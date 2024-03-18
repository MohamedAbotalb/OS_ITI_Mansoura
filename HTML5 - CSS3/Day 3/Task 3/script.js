window.addEventListener('load', () => {
  productList = document.querySelector('#product-list');
  productList.addEventListener('dragstart', dragStart);

  cart = document.querySelector('#cart');
  cart.addEventListener('dragover', allowDrop);
  cart.addEventListener('drop', drop);
});

let item;
const boxShadow = '5px 5px 70px lightgreen inset';

function dragStart(e) {
  item = e.target;
}

function allowDrop(e) {
  e.preventDefault();
}

function drop(e) {
  e.preventDefault();

  // Append the draggable element to the cart
  cart.appendChild(item);

  if (cart.children.length > 0) {
    cart.style.boxShadow = boxShadow;
  }

  // Check if all product items are in the cart, display "Product list is empty" in the list
  if (productList.children.length === 0) {
    productList.innerHTML = '<p>Product list is empty</p>';
    productList.style.boxShadow = boxShadow;
  }
}

cart.addEventListener('drop', drop);
cart.addEventListener('dragover', allowDrop);
