import { defineStore } from 'pinia';

export const dataStore = defineStore('dataId', {
  state: () => ({
    books: [],
    wishlist: {
      items: [],
    },
  }),
  actions: {
    formattedPrice(value) {
      return Intl.NumberFormat('en-SA', {
        style: 'currency',
        currency: 'SAR',
        minimumFractionDigits: 0,
      }).format(value);
    },
  },
  getters: {
    async loadBooks() {
      const data = await fetch('http://localhost:3000/books/');
      this.books = await data.json();
    },
    async loadWishlist() {
      const wishlist = await fetch('http://localhost:3000/wishlist/');
      this.wishlist.items = await wishlist.json();
    },
  },
});
