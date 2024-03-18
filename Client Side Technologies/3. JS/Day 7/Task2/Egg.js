import { Image } from './Image.js';

export class Egg extends Image {
  constructor(src, imageClass) {
    super(src, imageClass);
    this.setTopLeft();
  }

  #setTopLeft() {
    this.image.style.top = '0px';
    this.image.style.left = `${Math.floor(
      Math.random() * document.body.getClientRects()[0].width - 20
    )}px`;
  }

  get setTopLeft() {
    return this.#setTopLeft;
  }

  showBrokenEgg() {
    this.image.style.display = 'none';
    this.image.src = './images/broken.png';
    this.image.style.display = 'block';
  }

  resetEgg() {
    this.image.src = './images/egg.png';
    this.image.style.display = 'block';
    this.setTopLeft();
  }
}
