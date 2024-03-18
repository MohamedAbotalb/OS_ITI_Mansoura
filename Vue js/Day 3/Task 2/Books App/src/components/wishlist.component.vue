<template>
  <!-- start of Wishlist table -->

  <div class="text-center">
    <div
      v-if="dataStore.wishlist.items.length == 0"
      class="alert-warning fs-3 text-danger"
      role="alert"
    >
      Your wishlist is Empty
    </div>
    <div v-else>
      <table class="table table-success">
        <thead>
          <tr>
            <th>ISBN</th>
            <th>Title</th>
            <th>Author</th>
            <th>Category</th>
            <th>Pages</th>
            <th>Price</th>
            <th>Action</th>
          </tr>
        </thead>
        <tbody>
          <tr v-for="item in dataStore.wishlist.items" :key="item.id">
            <td>{{ item.ISBN }}</td>
            <td>{{ item.name }}</td>
            <td>{{ item.author }}</td>
            <td>{{ item.category }}</td>
            <td>{{ item.pages }}</td>
            <td>{{ dataStore.formattedPrice(item.price) }}</td>
            <td>
              <button class="btn btn-danger" @click="removeFromWishlist(item)">
                Remove
              </button>
            </td>
          </tr>
        </tbody>
        <tfoot>
          <tr>
            <td colspan="4">Total cost</td>
            <td colspan="4">{{ dataStore.formattedPrice(getTotalCost) }}</td>
          </tr>
        </tfoot>
      </table>
    </div>
  </div>

  <!-- end of Wishlist table -->
</template>

<script>
import { dataStore } from '@/datastore';

export default {
  data: () => ({ dataStore: dataStore() }),
  methods: {
    async removeFromWishlist(book) {
      this.dataStore.wishlist.items.splice(
        this.dataStore.wishlist.items.findIndex((item) => item.id == book.id),
        1
      );
      await fetch(`http://localhost:3000/wishlist/${book.id}`, {
        method: 'DELETE',
      });
    },
  },
  computed: {
    getTotalCost() {
      let totalCost = 0;
      let i = 0;
      while (i < this.dataStore.wishlist.items.length) {
        totalCost += this.dataStore.wishlist.items[i].price;
        i++;
      }

      return totalCost;
    },
  },
};
</script>

<style></style>
