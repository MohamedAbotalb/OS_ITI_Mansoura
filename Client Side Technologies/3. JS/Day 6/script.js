const ball = {
  top: 10,
  left: 10,
  radius: 20,
  color: 'blue',
  //   calculateArea: () => {
  //     return Math.PI * this.radius * this.radius; // return NaN
  //   },
  calculateArea() {
    return Math.PI * this.radius * this.radius;
  },
  toString() {
    return `Ball Dimensions ${this.top} ${this.left} ${this.radius}`;
  },
};

// call properties and functions using . and []

console.log(ball.calculateArea());
console.log(ball.toString());

ball.move = function () {
  return 'the ball is moving...';
};

ball.right = 30;

console.log(ball.move());
console.log(ball.right);

const balls = [
  {
    top: 10,
    left: 10,
    radius: 10,
    color: 'Blue',
    calculateArea() {
      return Math.PI * this.radius * this.radius;
    },
    toString() {
      return `Ball Dimensions ${this.top} ${this.left} ${this.radius}`;
    },
  },
  {
    top: 20,
    left: 20,
    radius: 20,
    color: 'Red',
    calculateArea() {
      return Math.PI * this.radius * this.radius;
    },
    toString() {
      return `Ball Dimensions ${this.top} ${this.left} ${this.radius}`;
    },
  },
  {
    top: 10,
    left: 30,
    radius: 30,
    color: 'Yellow',
    calculateArea() {
      return Math.PI * this.radius * this.radius;
    },
    toString() {
      return `Ball Dimensions ${this.top} ${this.left} ${this.radius}`;
    },
  },
  {
    top: 5,
    left: 40,
    radius: 40,
    color: 'Green',
    calculateArea() {
      return Math.PI * this.radius * this.radius;
    },
    toString() {
      return `Ball Dimensions ${this.top} ${this.left} ${this.radius}`;
    },
  },
];

const printColorsAndAreas = function (array) {
  array.forEach((ball) => {
    console.log(
      `Ball color is ${ball.color} and its area is ${ball.calculateArea()}`
    );
  });
};

printColorsAndAreas(balls);

// Sort the array
balls.sort((a, b) => {
  if (a.top === b.top) return a.left - b.left;
  return a.top - b.top;
});

console.table(balls);
