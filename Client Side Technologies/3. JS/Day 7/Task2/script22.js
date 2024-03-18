class Egg {
  #image;

  constructor() {
    this.image = './images/egg.png';
    this.image.style.top = '0px';
    this.image.style.left = `${Math.floor(
      Math.random() * document.body.getClientRects()[0].width
    )}px`;
    class Image {
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

    class Egg extends Image {
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

    class Basket extends Image {
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

    class Game {
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

    const game = new Game();
    game.start(50, 100);

    this.image.classList.add('egg');
  }

  set image(value) {
    this.#image = document.createElement('img');
    this.#image.src = value;
  }
  get image() {
    return this.#image;
  }

  showBrokenEgg() {
    this.image.style.display = 'none';
    this.image.src = './images/broken.png';
    this.image.style.display = 'block';
  }

  resetEgg() {
    this.image.src = './images/egg.png';
    this.image.style.display = 'block';
    this.image.style.top = '0px';
    this.image.style.left = `${Math.floor(
      Math.random() * document.body.getClientRects()[0].width
    )}px`;
  }
}

class Basket {
  #image;

  constructor() {
    this.image = './images/basket.png';
    this.image.style.bottom = '0px';
    this.image.classList.add('basket');
    document.addEventListener('mousemove', this.handleMouseMove.bind(this));
  }

  set image(value) {
    this.#image = document.createElement('img');
    this.#image.src = value;
  }
  get image() {
    return this.#image;
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

class Game {
  #egg;
  #basket;
  #score;
  constructor() {
    this.egg = new Egg();
    this.basket = new Basket();
    this.score = 0;
    document.body.append(this.egg.image, this.basket.image);
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
          alert(`Game Over your score = ${this.score}`);

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
    }, seconds);
  }

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

const game = new Game();
game.start(50, 100);
