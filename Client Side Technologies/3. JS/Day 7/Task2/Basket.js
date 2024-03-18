import { Image } from './Image.js';

export class Basket extends Image {
  constructor(src, imageClass) {
    super(src, imageClass);
    this.image.style.bottom = '0px';
    document.addEventListener('mousemove', this.handleMouseMove.bind(this));
  }

  handleMouseMove(e) {
    const containerRect = document.body.getBoundingClientRect();
    const containerLeft = containerRect.left;
    const containerWidth = containerRect.width;
    const imageWidth = this.image.offsetWidth;

    const mouseX = e.clientX - containerLeft;
    const maxLeft = 0;
    const maxRight = containerWidth - imageWidth;

    let imageLeft = mouseX - imageWidth / 2;
    imageLeft = Math.max(maxLeft, Math.min(maxRight, imageLeft));

    this.image.style.left = `${imageLeft}px`;
  }
}
