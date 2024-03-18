<template>
  <div class="alert alert-success text-center d-flex justify-content-evenly">
    <template>{{ getBookData($route.params.id) }}</template>
    <img style="width: 25%" :src="bookImage" class="card-img-top" alt="..." />
    <div class="d-flex flex-column justify-content-between">
      <p class="alert alert-primary">Book ISBN : {{ bookISBN }}</p>
      <p class="alert alert-primary">Book Name : {{ bookName }}</p>
      <p class="alert alert-primary">Category : {{ category }}</p>
      <p class="alert alert-primary">Pages : {{ pages }}</p>
      <p class="alert alert-primary">
        Price : {{ dataStore.formattedPrice(price) }}
      </p>
      <p class="alert alert-primary">Stock : {{ stock }}</p>
    </div>
  </div>
</template>

<script>
import { dataStore } from '@/datastore';
export default {
  data: () => ({
    dataStore: dataStore(),
    bookISBN: '',
    bookName: '',
    authorName: '',
    category: '',
    price: '',
    pages: '',
    stock: '',
    bookImage: '',
  }),
  methods: {
    async getBookData(id) {
      const data = await fetch(`http://localhost:3000/books/${id}`);
      const book = await data.json();

      this.bookISBN = book.ISBN;
      this.bookId = book.id;
      this.bookName = book.name;
      this.category = book.category;
      this.pages = book.pages;
      this.price = book.price;
      this.stock = book.stock;
      this.bookImage = `../${book.img}`;
    },
  },
};
</script>

<style></style>
