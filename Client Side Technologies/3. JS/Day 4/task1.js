/*
Task 1- Using document object method on the lecture’s HTML page  
a- Find all images in page by two ways (document default 
collection and document methods).  
b- Find all options for City drop down list.  
c- Find all rows(tds) for second table in page.  
d- Find all elements that contain class name fontBlue and    
BGrey. 
*/

// a- find all images by two ways

// First way: image collection -> return HTMLCollection
// const Images = document.images;
const Images = document.getElementsByTagName('img');

console.log(Images);
console.log(Images[0].src);
console.log(Images[1].src);

// Second way: document.querySelectorAll -> return NodeList
const newImages = document.querySelectorAll('img');

console.log(newImages);
console.log(newImages[0].src);
console.log(newImages[1].src);

// b- Find all options for City drop down list.
const forms = document.forms;

const cityOptions = forms[1].querySelectorAll('select option');

// const cityOptions = document.querySelectorAll(
//   'form[name = regForm] select option'
// );

console.log(cityOptions);

for (let i = 0; i < cityOptions.length; i++) {
  console.log(cityOptions[i].innerText); // Mansoura, Cairo, Alex
}

// c- Find all rows(tds) for second table in page.
const secondTableData = document.querySelectorAll('.bPink tr td');

console.log(secondTableData);

for (let i = 0; i < secondTableData.length; i++) {
  console.log(secondTableData[i].innerText);
}

// d- Find all elements that contain class name fontBlue and BGrey.
const elements = document.querySelectorAll('.fontBlue, .BGrey');

console.log(elements);

for (let i = 0; i < elements.length; i++) {
  console.log(elements[i].innerText);
}
