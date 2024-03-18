// Task 1 test case
let input = 'the quick brown fox';
console.log(pascalCase(input)); // The Quick Brown Fox

// Task 2 test case
input = 'Web Development Tutorial';
console.log(getLongestWord(input)); // Development

// Task 3 test case
input = 'javascript';
console.log(getAlphabeticalOrder(input)); // aacijprstv

input = 'JAvaScRiPt';
console.log(getAlphabeticalOrder(input)); // AaciJPRStv

// Task 4 test case
input = '12-6-2023'; // month-day-year
console.log(getMonthName(input)); // December

input = '6-12-2023';
console.log(getMonthName(input)); // June

// Task 5 test case
console.log(getRandomArray());

let name = 'mohamed';
let arrName = [...name];

console.log(arrName);

window.setTimeout(function () {
  window.console.log('Hi after 1 second');
}, 1000);

setTimeout(() => {
  console.log('Hi after 3 seconds');
}, 3000);
