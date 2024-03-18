/*
3- using setInterval or setTimeout to start change the first image on 
the html (src property) every second  
(slide show simulation)
*/

// get the first image in the dom
const firstImage = document.images[0];

let count = 1;

setInterval(
  () => {
    if (count === 9) count = 1;

    firstImage.src = `images/${count}.jpg`;

    count++;
  },
  1000,
  count
);
