const cardUL = document.querySelector('.nav');
const cardBody = document.querySelector('.card-body');

const products = [
  {
    name: 'The C Programming Language',
    price: 280,
    stock: 15,
    img: 'images/1.jpg',
  },
  { name: 'Eloquent JavaScript', price: 120, stock: 8, img: 'images/2.png' },
  {
    name: 'The Complete Book on Angular',
    price: 100,
    stock: 10,
    img: 'images/3.jpg',
  },
  { name: 'Head First Java', price: 150, stock: 25, img: 'images/4.jpg' },
  { name: 'Node.js in Action', price: 200, stock: 13, img: 'images/5.png' },
  { name: 'Full Stack React', price: 140, stock: 14, img: 'images/6.jpg' },
  { name: 'Vue.js in Action', price: 180, stock: 5, img: 'images/7.jpg' },
  { name: 'Programming Python', price: 220, stock: 9, img: 'images/8.jpg' },
  { name: 'C# in a Nutshell', price: 300, stock: 10, img: 'images/9.jpg' },
];

// Append the product details in the links and card body
products.forEach((item) => {
  const count = products.indexOf(item) + 1;
  if (count === 1) {
    cardUL.innerHTML += `
    <li class="nav-item">
      <a class="nav-link active" href="#" data-target="#product${count}">Product ${count}</a>
    </li>
  `;

    cardBody.innerHTML += `
    <div id="product${count}" class="content active">
      <img src="${item.img}" class="card-img-top w-25 my-3 " alt="product" />
      <h3 class="card-title">${item.name}</h3>
      <p class="card-text fs-4">Price: ${item.price}L.E</p>
      <p class="card-text fs-4">Stock: ${item.stock}</p>
    </div>
  `;
  } else {
    cardUL.innerHTML += `
    <li class="nav-item">
      <a class="nav-link" href="#" data-target="#product${count}">Product ${count}</a>
    </li>
  `;

    cardBody.innerHTML += `
    <div id="product${count}" class="content" style="display: none;">
      <img src="${item.img}" class="card-img-top w-25 my-3 " alt="product" />
      <h3 class="card-title">${item.name}</h3>
      <p class="card-text fs-4">Price: ${item.price}L.E</p>
      <p class="card-text fs-4">Stock: ${item.stock}</p>
    </div>
  `;
  }
});

const navLinks = document.querySelectorAll('.nav-link');
const productContent = document.querySelectorAll('.content');

navLinks.forEach((link) => {
  link.addEventListener('click', (e) => {
    e.preventDefault();

    navLinks.forEach((link) => link.classList.remove('active'));

    // Get the id of data-target and remove # (#product1 => product1)
    const targetId = link.getAttribute('data-target').slice(1);

    productContent.forEach((content) => {
      content.classList.remove('active');
      content.style.display = 'none';

      if (content.id === targetId) {
        link.classList.add('active');
        content.classList.add('active');
        content.style.display = 'block';
      }
    });
  });
});
