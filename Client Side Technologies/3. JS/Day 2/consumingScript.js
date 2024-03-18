// Case 1 : Team1 scores (44,23,71)      Team2 scores (65,54,49)
let firstTeamAverage = calcAverage(44, 23, 71);
let secondTeamAverage = calcAverage(65, 54, 49);

let result = checkWinner(firstTeamAverage, secondTeamAverage);

console.log(result);

// Case 2 : Team1 scores (85,54,41)      Team2 scores (23,34,27)
firstTeamAverage = calcAverage(85, 54, 41);
secondTeamAverage = calcAverage(23, 34, 27);

result = checkWinner(firstTeamAverage, secondTeamAverage);

console.log(result);

firstTeamAverage = calcAverage(2, 3);
secondTeamAverage = calcAverage(3, 4);

result = checkWinner(firstTeamAverage, secondTeamAverage);

console.log(result);

// Task 2,3

// Ask the user to enter how many numbers to sum
// result = calcSum();

// console.log(result);

// Testing Hoisting of the function
printVariables();
printVariables(3, 5);
printVariables(1, 2, 3, 4, 5, 6);
console.log(value_4);
