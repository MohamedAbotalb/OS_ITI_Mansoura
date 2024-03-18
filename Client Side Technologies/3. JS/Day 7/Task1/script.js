class Person {
  #name;
  #gender;
  #profileImage;
  static #count = 0;

  constructor(name, gender, profileImage) {
    this.name = name;

    this.gender = gender;

    this.profileImage = profileImage;

    Person.#count++;

    if (this.constructor.name === 'Person') {
      throw new Error('cannot create object from class Person');
    }
  }

  set name(value) {
    if (value.trim().split(' ').length <= 1) {
      throw new Error('Please enter a valid name more than one word');
    }
    this.#name = this.pascalCase(value);
  }
  get name() {
    return this.#name;
  }

  set gender(value) {
    if (value == 'male' || value == 'female') {
      this.#gender = this.pascalCase(value);
    } else throw new Error('Please enter a valid gender value male or female');
  }
  get gender() {
    return this.#gender;
  }

  set profileImage(value) {
    if (!value) {
      this.#profileImage = `${this.gender}.png`;
    } else this.#profileImage = value;
  }
  get profileImage() {
    return this.#profileImage;
  }

  static get count() {
    return Person.#count;
  }

  #pascalCase(input) {
    input = new String(input);
    const segments = input.split(' ');
    let newSegments = [];

    for (let i = 0; i < segments.length; i++) {
      let word = segments[i];

      let capitalizedWord = word.replace(word[0], word[0].toUpperCase());

      newSegments.push(capitalizedWord);
    }

    return newSegments.join(' ');
  }

  get pascalCase() {
    return this.#pascalCase;
  }
}

// const p = new Person('mohamed abotalb', 'male');
// console.log(p);
// console.log(Person.count);

class Employee extends Person {
  #salary;
  #language;

  constructor(name, gender, salary = 0, language = '', profileImage) {
    super(name, gender, profileImage);
    this.salary = salary;
    this.language = language;
  }

  set salary(value) {
    this.#salary = value;
  }
  get salary() {
    return this.#salary;
  }

  set language(value) {
    this.#language = this.pascalCase(value);
  }
  get language() {
    return this.#language;
  }
  toString() {
    return `Employee Name is ${this.name} and Salary is ${this.salary}`;
  }

  #createCardElements(input = {}) {
    const card = document.createElement('div');
    card.classList.add('card');

    const profileImage = document.createElement('img');
    profileImage.src = `images/${input.profileImage}`;

    const employeeName = document.createElement('span');
    employeeName.textContent = input.name;

    const table = document.createElement('table');
    for (let key in input) {
      if (key === 'name' || key === 'profileImage') {
        continue;
      }
      const row = document.createElement(`tr`);
      const tableData = document.createElement('td');
      const spanElement = document.createElement('span');
      spanElement.textContent = input[key];
      tableData.append(spanElement);
      row.append(tableData);
      table.append(row);
    }

    card.append(profileImage, employeeName, table);
    console.log(card);

    return card;
  }

  addCard(container) {
    const object = {
      name: this.name,
      profileImage: this.profileImage,
      gender: this.gender,
      salary: this.salary,
      language: this.language,
    };
    const card = this.#createCardElements(object);

    container.append(card);
  }
}

const e = new Employee('mohamed abotalb', 'male', 5000, 'english');
console.log(e);

const e1 = new Employee('eman fathi', 'female', 10000, 'english');

const body = document.body;
e.addCard(body);
e1.addCard(body);
console.log(e1);
console.log(Employee.count);
