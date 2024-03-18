// Task 1
/* 
function accept a full name string and convert each letter of 
first world to Capital and the remaining to small (Pascal Case). 
//Example : 'the quick brown fox'  
//Output : 'The Quick Brown Fox' 
*/

const pascalCase = function (input) {
  input = new String(input);
  const segments = input.split(' ');
  let newSegments = [];

  for (let i = 0; i < segments.length; i++) {
    let word = segments[i];

    // let capitalizedWord = word[0].toUpperCase() + word.slice(1);
    let capitalizedWord = word.replace(word[0], word[0].toUpperCase());

    newSegments.push(capitalizedWord);
  }

  return newSegments.join(' ');
};

//-----------------------------------------------
// Task 2
/*
function that accept a sentence and return the longest word 
within the input 
//Example : 'Web Development Tutorial'  
//Output : 'Development'
*/

const getLongestWord = function (input) {
  input = new String(input);
  const segments = input.split(' ');
  let longWord = segments[0];

  for (let i = 1; i < segments.length; i++) {
    let temp = segments[i];
    if (temp.length > longWord.length) {
      longWord = temp;
    }
  }
  return longWord;
};

//-----------------------------------------------
// Task 3
/*
Write a JavaScript function that returns a passed string with 
letters in alphabetical order  
//Example : javascript  
//Output : aacijprstv
*/

const getAlphabeticalOrder = function (input) {
  input = new String(input);

  let segments = input.split('');

  segments.sort(function (a, b) {
    let first = a.toLowerCase();
    let second = b.toLowerCase();

    if (first > second) return 1;
    else if (first < second) return -1;
    return 0;
  });

  return segments.join('');
};

//-----------------------------------------------
// Task 4
/*
Write a JavaScript function to get the month name from a 
particular date (use Date class) 
*/

const monthNames = [
  'January',
  'February',
  'March',
  'April',
  'May',
  'June',
  'July',
  'August',
  'September',
  'October',
  'November',
  'December',
];

const getMonthName = function (input) {
  const date = new Date(input);

  const monthNumber = date.getMonth(); // getMonth() return the index of month (0 to 11)

  return monthNames[monthNumber];
};

//-----------------------------------------------
// Task 5
/*
Write JavaScript function that returns random array of 5 numbers 
between 1:10   without repetition 
      Note: the function takes no input. 
to create array  use the following steps : 
let randomNumbers=[];  
randomNumbers.push()
*/

const getRandomArray = function () {
  const randomNumbers = [];

  while (randomNumbers.length < 5) {
    const number = Math.ceil(Math.random() * 10);

    if (randomNumbers.indexOf(number) == -1) {
      randomNumbers.push(number);
    }
  }

  return randomNumbers;
};

// Search

