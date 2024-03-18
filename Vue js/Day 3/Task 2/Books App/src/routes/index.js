// Create routers array object
// import { createRouter, createWebHistory } from vue-router

import { createRouter, createWebHistory } from 'vue-router';
import Home from '@/components/home.component.vue'; // view all books
import Wishlist from '@/components/wishlist.component.vue'; // view books in wishlist
import Book from '@/components/book.component.vue'; // view book details
import AddNewBook from '@/components/addnewbook.component.vue'; // view admin book crud operation

const routes = [
  { path: '/', component: Home },
  { path: '/wishlist', component: Wishlist },
  { path: '/addnewbook', component: AddNewBook },
  { path: '/book/:id', component: Book },
];

const router = createRouter({
  routes: routes,
  history: createWebHistory(),
});

export default router;
