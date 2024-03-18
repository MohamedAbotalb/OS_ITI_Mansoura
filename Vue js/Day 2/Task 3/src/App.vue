<template>
  <div class="container">
    <!-- start of Nav -->
    <div
      class="d-flex p-3 bg-dark justify-content-between align-items-baseline"
    >
      <a
        href="#"
        style="text-decoration: none; color: yellow; font-size: 1.5rem"
        @click.prevent="showWishlist = false"
        >Books</a
      >
      <button class="btn btn-primary" @click="showWishlist = true">
        Show Wishlist
      </button>
    </div>
    <!-- end of Nav -->

    <ul v-for="(book, index) in books" :key="index" class="list-group">
      <li class="list-group-item" :title="book.author">{{ book.name }}</li>
    </ul>

    <!-- start of books cards -->
    <div class="row" v-if="showWishlist == false">
      <div
        class="card text-center py-2"
        style="width: 26rem; margin: 0.8rem auto"
        :class="book.pages < 50 ? 'less' : 'more'"
        v-for="(book, index) in books"
        :key="index"
      >
        <img
          :src="book.img"
          class="my-3 mx-auto"
          style="width: 200px; height: 250px"
        />
        <div class="d-flex justify-content-around align-items-center">
          <p
            class="category border border-1 rounded bg-secondary p-2 text-light"
          >
            {{ book.category }}
          </p>
          <p class="author border border-1 rounded bg-secondary p-2 text-light">
            {{ book.author }}
          </p>
        </div>

        <div class="d-flex justify-content-around align-items-center">
          <p class="pages border border-1 rounded bg-secondary p-2 text-light">
            #{{ book.pages }}
          </p>
          <p class="price border border-1 rounded bg-secondary p-2 text-light">
            {{ formattedPrice(book.price) }}
          </p>
        </div>

        <div class="d-flex justify-content-around align-items-baseline">
          <p class="isbn border border-1 rounded bg-secondary p-2 text-light">
            {{ book.ISBN }}
          </p>
          <button
            class="bg-primary border-0 text-light p-2"
            @click="addToList(book)"
            :disabled="book.addedToList"
          >
            Add To List
          </button>
        </div>
      </div>
    </div>
    <!-- end of books cards -->

    <!-- start of Wishlist table -->
    <div v-if="showWishlist == true && wishlist.length > 0">
      <h2>Your Wishlist</h2>
      <table class="table">
        <thead>
          <tr>
            <th>Title</th>
            <th>Author</th>
            <th>Category</th>
            <th>Pages</th>
            <th>Price</th>
            <th>ISBN</th>
          </tr>
        </thead>
        <tbody>
          <tr v-for="book in wishlist" :key="book.ISBN">
            <td>{{ book.name }}</td>
            <td>{{ book.author }}</td>
            <td>{{ book.category }}</td>
            <td>{{ book.pages }}</td>
            <td>{{ formattedPrice(book.price) }}</td>
            <td>{{ book.ISBN }}</td>
            <td>
              <button class="btn btn-danger" @click="removeFromWishlist(book)">
                Remove
              </button>
            </td>
          </tr>
        </tbody>
      </table>
    </div>
    <div class="text-center text-danger" v-else-if="showWishlist == true">
      <h2>The Wishlist is empty</h2>
    </div>
    <!-- end of Wishlist table -->
  </div>
  <!--end of container-->
</template>

<script>

import books from './books';
export default {
  name: 'App',

  data: () => ({
    books: books.map((book) => ({ ...book, addedToList: false })),
    wishlist: [],
    showWishlist: false,
  }),
  methods: {
    addToList(book) {
      this.wishlist.push(book);
      console.log(this.wishlist[0]);
      book.addedToList = true;
    },
    toggleWishlistDisplay() {
      this.showWishlist = !this.showWishlist;
    },
    removeFromWishlist(book) {
      const index = this.wishlist.findIndex((item) => item.ISBN === book.ISBN);

      if (index !== -1) {
        this.wishlist.splice(index, 1);
        book.addedToList = false;
      }
    },
    formattedPrice(value) {
      return Intl.NumberFormat('en-SA', {
        style: 'currency',
        currency: 'SAR',
        minimumFractionDigits: 0,
      }).format(value);
    },
  },
};
</script>

<style>
#app {
  font-family: Avenir, Helvetica, Arial, sans-serif;
  -webkit-font-smoothing: antialiased;
  -moz-osx-font-smoothing: grayscale;
  text-align: center;
  color: #2c3e50;
  margin-top: 60px;
}

.more {
  background-color:green;
}

.less {
  background-color: red;
}
</style>
