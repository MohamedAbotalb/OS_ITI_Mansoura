const accordionContainer = document.querySelector('.container .accordion');
const products = [
  {
    name: 'The C Programming Language',
    price: 280,
    stock: 15,
    img: 'images/1.jpg',
  },
  {
    name: 'The Complete Book on Angular',
    price: 100,
    stock: 10,
    img: 'images/2.jpg',
  },
  { name: 'Full Stack React', price: 140, stock: 14, img: 'images/3.jpg' },
  { name: 'Vue.js in Action', price: 180, stock: 5, img: 'images/4.jpg' },
];

products.forEach((product) => {
  const count = products.indexOf(product) + 1;
  accordionContainer.innerHTML += `
  <div class="accordion-item text-center">
    <h2 class="accordion-header" id="heading${count}">
      <button
        class="accordion-button collapsed fs-4"
        type="button"
        data-bs-toggle="collapse"
        data-bs-target="#collapse${count}"
        aria-expanded="true"
        aria-controls="collapse${count}"
      >
        ${product.name}
      </button>
    </h2>
    <div
      id="collapse${count}"
      class="accordion-collapse collapse"
      aria-labelledby="heading${count}"
      data-bs-parent="#accordionExample"
    >
      <div class="accordion-body">
        <img src="${product.img}" class="w-25 my-3 " alt="product" />
        <p class="h4">Name: ${product.name}</p>
        <p class="fs-4">Price: ${product.price}L.E</p>
        <p class="fs-4">Stock: ${product.stock}</p>
      </div>
    </div>
  </div>
  `;
});
