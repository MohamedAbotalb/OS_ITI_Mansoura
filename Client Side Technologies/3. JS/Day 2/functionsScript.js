// const calcAverage = function (firstScore, secondScore, thirdScore) {
//   return (firstScore + secondScore + thirdScore) / 3;
// };

const calcAverage = function () {
  let sum = 0,
    count = arguments.length;
  for (let i = 0; i < count; i++) {
    sum += arguments[i];
  }
  return sum / count;
};

const checkWinner = function (firstTeam, secondTeam) {
  if (firstTeam > secondTeam) {
    return 'First Team is the Winner';
  } else if (firstTeam < secondTeam) {
    return 'Second Team is the Winner';
  } else {
    return 'No Winner';
  }
};

const checkPromptValue = function (value) {
  return !value || isNaN(value);
};

const getPromptValue = function (message) {
  let number;
  do {
    number = +prompt(message);
  } while (checkPromptValue(number));

  return number;
};

// Get the sum of all numbers entered from the user
const calcSum = function (
  values = getPromptValue('Please enter the number of values to sum')
) {
  let sum = 0;
  for (let i = 0; i < values; i++) {
    sum += getPromptValue(`Please enter ${i + 1} number`);
  }

  return sum;
};

/*
For Testing hoisting and function’s call 
1- Create function name it printVariables(value_1,value_2,value_3) (as 
function declaration)  the function call will print the values on console.  
a- Call the function  
b-try to console.log the values of value1,value2,value3 on 
consumingScript.js file ?? 
c- Try to call the function before definition line? 
d- Try to call the function with less than 3 parameters printVariables(3,5) . 
e- What if you call the function with too many parameters ? (more than 3) Can you print them using (arguments)? 
f- Define var value_4=3; value_5=5; inside the function’s block 
then before calling the function try to console.log the values value_4 
and value_5.??  
g- In step f , call the function and try to print value_4 and 
value_5? 
h- Define the following variable on your script (functions’ script) outside the 
function let value_4 =90; 
o in consuming script Before calling the function try to console.log the 
value value_4  
o then try to console.log value_4 after calling the function 
o Now try to console.log the value of value_4 inside the 
function but before variable’s definition line. 
o Now inside the function what if you remove let from value_4 
and repeat the pervious Steps again? 
*/

// printVariables(); // this will cause an exception(cannot access before initialization);
// console.log(fourthValue, fifthValue); // this will cause an exception(fourthValue is not defined);
const printVariables = function (firstValue, secondValue, thirdValue) {
  //   console.log(firstValue, secondValue, thirdValue);
  fourthValue = 3;
  fifthValue = 5;
  for (let i = 0; i < arguments.length; i++) {
    console.log(arguments[i]);
  }
  console.log(value_4);
};

printVariables();
// console.log(fourthValue, fifthValue); // this will cause an exception(fourthValue is not defined);

let value_4 = 90;
