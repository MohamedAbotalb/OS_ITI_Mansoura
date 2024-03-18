<template>
  <div class="container">
    <!-- start of books cards -->
    <div class="row">
      <div
        class="card text-center py-2"
        style="width: 26rem; margin: 0.8rem auto"
        :class="book.pages < 50 ? 'less' : 'more'"
        v-for="(book, index) in dataStore.books"
        :key="index"
      >
        <router-link :to="/book/ + book.id">
          <img
            :src="book.img"
            class="card-img-top my-4"
            style="width: 200px; height: 250px"
          />
        </router-link>
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
            {{ dataStore.formattedPrice(book.price) }}
          </p>
        </div>

        <div class="d-flex justify-content-around align-items-baseline">
          <p class="isbn border border-1 rounded bg-secondary p-2 text-light">
            {{ book.ISBN }}
          </p>
          <button
            class="bg-primary border-0 text-light p-2"
            @click="addToList(book)"
            :disabled="addedToList(book) !== -1"
          >
            Add To List
          </button>
        </div>
      </div>
    </div>
    <!-- end of books cards -->
  </div>
  <!--end of container-->
</template>

<script>
import { dataStore } from '@/datastore';
export default {
  name: 'App',

  data: () => ({
    dataStore: dataStore(),
  }),

  methods: {
    async addToList(book) {
      this.dataStore.wishlist.items.push(book);
      await fetch('http://localhost:3000/wishlist/', {
        method: 'post',
        headers: { 'Content-Type': 'application/json' },
        body: JSON.stringify(book),
      });
    },
    addedToList(book) {
      return this.dataStore.wishlist.items.findIndex(
        (item) => item.id == book.id
      );
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
  background-color: green;
}

.less {
  background-color: red;
}
</style>
