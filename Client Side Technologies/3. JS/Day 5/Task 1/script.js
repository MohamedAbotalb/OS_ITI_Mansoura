window.onload = function () {
  const buttons = document.querySelectorAll('button');
  const img = document.querySelector('img');
  const nextBtn = buttons[0];
  const previousBtn = buttons[1];
  const slideBtn = buttons[2];
  const stopBtn = buttons[3];
  let count = 1;

  // Handle next button event
  nextBtn.onclick = function () {
    count++;
    if (count == 9) count = 1;

    // console.log(count);

    img.src = `images/${count}.jpg`;
  };

  // Handle previous button event
  previousBtn.onclick = function () {
    count--;
    if (count == 0) count = 8;

    // console.log(count);

    img.src = `images/${count}.jpg`;
  };

  let slider;

  // Handle slide show button event
  slideBtn.onclick = function () {
    nextBtn.disabled = true;
    previousBtn.disabled = true;
    slideBtn.disabled = true;
    slider = setInterval(function () {
      if (count == 9) count = 1;

      img.src = `images/${count}.jpg`;
      //   console.log(count);

      count++;
    }, 1000);
  };

  // Handle stop button event
  stopBtn.onclick = function () {
    nextBtn.disabled = false;
    previousBtn.disabled = false;
    slideBtn.disabled = false;
    clearInterval(slider);
  };
};
