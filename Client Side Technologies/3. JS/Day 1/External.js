// Create 3 Number variables number1, number2, number3
console.log(number1); // this will work with no exception because of the Hoisting of the variable and its value is undefined
var number1 = 3;
// number1 = 3; // this will cause an exception(number1 is not defined) because the variable is not defined and not hoisted from another script

// console.log(number2); // this will cause an exception(cannot access number2 before initialization) because the variable is called before definition
let number2 = 2.9;
// number2 = 2.9;

// console.log(number3); // this will cause an exception(number2 is not defined) because the variable is called before definition
const number3 = 0xff;
// number3 = 0xff;

// Create 3 String variables firstName, middleName, lastName;
let firstName = 'Mohamed';

let middleName = 'Abd Elaziz';

let lastName = `Abotalb`;

// Create a Flag variable
let flag = true;

console.log('This is the External JavaScript file');

let studentHTML = `
    <table>
        <tr>
            <td>Student First Name = ${firstName}</td>
            <td>Student Last Name = ${lastName}</td>
        </tr>
    </table>
`;

console.log(studentHTML);

let fullName = `${firstName} ${middleName} ${lastName}`;
let result = `${number1} + ${number2} = ${number1 + number2}`;

console.log(fullName);
console.log(result);
