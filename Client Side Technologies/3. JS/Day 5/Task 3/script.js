window.onload = function () {
  const inputs = document.querySelectorAll('input[type="text"]');
  const radios = [...document.querySelectorAll('input[type="radio"]')];
  const btn = document.querySelector('button');
  const table = document.querySelector('table');
  const studentNameInput = inputs[0];
  const studentGradeInput = inputs[1];

  const pascalCase = function (input) {
    input = new String(input);
    const segments = input.split(' ');
    let newSegments = [];

    for (let i = 0; i < segments.length; i++) {
      const word = segments[i];

      const capitalizedWord = word.replace(word[0], word[0].toUpperCase());

      newSegments.push(capitalizedWord);
    }

    return newSegments.join(' ');
  };

  const checkStudentPresence = function (name, grade) {
    const tableRows = document.querySelectorAll('tr');

    for (let i = 0; i < tableRows.length; i++) {
      const firstTD = tableRows[i].firstChild;
      console.log(firstTD);
      const secondTD = tableRows[i].lastChild;
      console.log(secondTD);

      if (
        firstTD.textContent.toLowerCase() === name &&
        secondTD.textContent === grade
      ) {
        return true;
      }
    }
  };

  const createStudent = function (userName, grade, department) {
    const newRow = document.createElement('tr');

    let newTableData = document.createElement('td');
    userName = pascalCase(userName);
    newTableData.textContent = userName;
    newRow.append(newTableData);

    newTableData = document.createElement('td');
    newTableData.textContent = grade;
    newRow.append(newTableData);

    newRow.classList.add(department.value);

    table.append(newRow);
  };

  studentNameInput.addEventListener('blur', function () {
    let userName = this.value;

    if (userName.length < 3 || !userName.match(/^[A-Za-z\s]+$/)) {
      this.nextSibling.style.visibility = 'visible';
    } else {
      this.nextSibling.style.visibility = 'hidden';
    }
  });

  studentGradeInput.addEventListener('blur', function () {
    let grade = this.value;
    if (isNaN(grade) || +grade < 0 || +grade > 100) {
      this.nextSibling.style.visibility = 'visible';
    } else {
      this.nextSibling.style.visibility = 'hidden';
    }
  });

  btn.addEventListener('click', function () {
    let studentName = studentNameInput.value;
    let grade = studentGradeInput.value;
    let radio = radios.find((r) => r.checked);
    if (!studentName || !grade || !radio) {
      return console.log(
        'cannot create a new student please enter username and grade'
      );
    }

    if (checkStudentPresence(studentName, grade)) {
      return console.log(
        'Duplicate data, please enter a new student name and grade'
      );
    }

    createStudent(studentName, grade, radio);
    studentNameInput.value = '';
    studentGradeInput.value = '';
    radio.checked = false;
  });
};
