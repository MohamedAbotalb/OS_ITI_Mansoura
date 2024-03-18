export class Image {
  #image;

  constructor(src = '', imageClass = '') {
    this.image = document.createElement('img');
    this.image.src = src;
    this.image.classList.add(imageClass);
  }

  set image(value) {
    this.#image = value;
  }
  get image() {
    return this.#image;
  }
}
