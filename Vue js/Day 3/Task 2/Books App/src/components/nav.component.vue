<template>
  <ul class="list-group list-group-horizontal text-center my-4 fs-5">
    <router-link
      to="/"
      class="list-group-item w-50 text-decoration-none text-black"
      active-class="active-nav"
      >Home</router-link
    >

    <router-link
      to="/addnewbook"
      class="list-group-item w-50 text-decoration-none text-black"
      active-class="active-nav"
      >Add New Book</router-link
    >

    <router-link
      to="/wishlist"
      class="list-group-item w-50 text-decoration-none text-black"
      active-class="active-nav"
      >Wishlist</router-link
    >
  </ul>
</template>

<script>
export default {};
</script>

<style>
.active-nav {
  background-color: blue;
  color: white;
}
</style>
