<template>
  <div class="container">
    <div class="row">
      <div class="col-12">
        <Header></Header>
      </div>
    </div>
    <div class="row">
      <div class="col-12">
        <Nav></Nav>
      </div>
    </div>
    <RouterView></RouterView>
    <!-- <div class="row">
      <div class="col-12">
        <Home></Home>
      </div>
    </div> -->
    <div class="row">
      <div class="col-12">
        <Footer></Footer>
      </div>
    </div>
  </div>
  <!--end of container-->
</template>

<script>
import { dataStore } from '@/datastore';
import Header from './components/header.component.vue';
import Nav from './components/nav.component.vue';
import Home from './components/home.component.vue';
import Footer from './components/footer.component.vue';

export default {
  name: 'App',
  data: () => ({
    dataStore: dataStore(),
  }),
  created() {
    // Call the loadBooks and loadWishlist methods of the dataStore
    this.dataStore.loadBooks;
    this.dataStore.loadWishlist;
  },
  components: {
    Header,
    Nav,
    Home,
    Footer,
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
</style>
