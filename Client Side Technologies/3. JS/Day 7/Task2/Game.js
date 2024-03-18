import { Egg } from './Egg.js';
import { Basket } from './Basket.js';

export class Game {
  #egg;
  #basket;
  #score;

  constructor() {
    this.egg = new Egg('./images/egg.png', 'egg');
    this.basket = new Basket('./images/basket.png', 'basket');
    document.body.append(this.egg.image, this.basket.image);
    this.score = 0;
  }

  set egg(value) {
    this.#egg = value;
  }
  get egg() {
    return this.#egg;
  }

  set basket(value) {
    this.#basket = value;
  }
  get basket() {
    return this.#basket;
  }

  set score(value) {
    this.#score = value;
  }
  get score() {
    return this.#score;
  }

  start(step, seconds) {
    let top;
    let id = setInterval(() => {
      top = parseInt(this.egg.image.style.top) + step;

      if (top > window.innerHeight - this.egg.image.height) {
        this.egg.showBrokenEgg();

        clearInterval(id);

        setTimeout(() => {
          alert(`Game Over your score is ${this.score}`);

          this.score = 0;
        }, 50);

        setTimeout(() => {
          this.egg.resetEgg();
          this.start(50, 100);
        }, 200);
      } else if (this.isCollision()) {
        clearInterval(id);
        this.egg.image.style.display = 'none';
        this.score++;
        setTimeout(() => {
          this.egg.resetEgg();
          this.start(50, 100);
        }, 200);
      } else {
        this.egg.image.style.top = `${top}px`;
      }
      console.log(this.egg.image.style.top);
    }, seconds);
  }

  // check if the basket catch the egg
  isCollision() {
    const egg = this.egg.image.getBoundingClientRect();
    const basket = this.basket.image.getBoundingClientRect();

    return !(
      egg.right < basket.left ||
      egg.left > basket.right ||
      egg.bottom < basket.top ||
      egg.top > basket.bottom
    );
  }
}
