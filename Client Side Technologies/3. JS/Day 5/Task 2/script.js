window.onload = function () {
  const divElements = document.querySelectorAll('div');

  const divHandler = function () {
    const newDiv = this.cloneNode(true);

    this.removeEventListener('click', divHandler);
    newDiv.addEventListener('click', divHandler);

    document.body.append(newDiv);
  };

  for (let i = 0; i < divElements.length; i++) {
    divElements[i].addEventListener('click', divHandler);
  }
};
