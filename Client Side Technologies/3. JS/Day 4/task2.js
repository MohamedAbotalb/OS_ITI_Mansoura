/*
Task 2- create  a function createTrackList(trackId,parentElement)  
The function will create a courseList  unordered List and added it to the DOM tree 
The function will take the track name title and the parent element object where it will be added to the DOM
*/

// Create a track list as unordered list element and make the trackId as ul.id and then append the list to parent element
const createTrackList = function (trackId, parentElement) {
  const list = document.createElement('ul');
  list.id = trackId;

  parentElement.appendChild(list);
};

const listParent = document.querySelectorAll('.list');
const trackListParentOS = listParent[0];
const trackListParentPD = listParent[1];

// Create a new track list using unordered list its id = 'os' and append it to the div.list
createTrackList('os', trackListParentOS);
createTrackList('pd', trackListParentPD);

const trackListOS = trackListParentOS.firstChild;
const trackListPD = trackListParentPD.firstChild;

const checkValidCourseName = function (courseName) {
  return (
    !courseName || courseName.match(/^[A-Za-z]+[A-Za-z0-9\s#&+-.]*$/) === null
  );
};

const checkPresenceCourse = function (courseName, listItems) {
  const indexes = [];
  for (let i = 0; i < listItems.length; i++) {
    if (listItems[i].textContent === courseName) {
      indexes.push(i);
    }
  }
  return indexes;
};

// Add a new course to the list
const addCourse = function (courseName, listTrackElement) {
  if (checkValidCourseName(courseName)) {
    return 'Please enter a valid course name';
  }

  const listItems = listTrackElement.children;

  // check if the course is present in the list
  if (checkPresenceCourse(courseName, listItems).length == 1) {
    return 'Duplicate course, please add a new course';
  }

  // create new list item and append to the ul
  const newItem = document.createElement('li');
  newItem.textContent = courseName;
  listTrackElement.appendChild(newItem);
};

// Remove a course from the list
const removeCourse = function (courseName, listTrackElement) {
  if (checkValidCourseName(courseName)) {
    return 'Please enter a valid course name';
  }

  const listItems = listTrackElement.children;

  // check if the course is present in the list
  const itemIndex = checkPresenceCourse(courseName, listItems)[0];

  if (itemIndex > -1) {
    listItems[itemIndex].remove();
  } else {
    return `${courseName} is not found`;
  }
};

const moveCourse = function (courseName, targetListTrackElement) {
  if (checkValidCourseName(courseName)) {
    return 'Please enter a valid course name';
  }

  const listItems = document.querySelectorAll('li');

  // check if the course is found in the source and target
  const array = checkPresenceCourse(courseName, listItems);

  // check if the return array length is greater than 1 so the course is present in the source and target
  if (array.length > 1) {
    return `cannot move ${courseName} as it is found in the target list`;
  } else if (array.length == 1) {
    const item = listItems[array[0]];
    item.parentElement.removeChild(item);

    addCourse(courseName, targetListTrackElement);
  } else {
    return `${courseName} is not found`;
  }
};
