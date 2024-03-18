const loginBtn = document.querySelector('#login');
const userName = document.querySelector('#Username');
const password = document.querySelector('#Password');
const userData = document.querySelector('#userdata');

const showUserData = () => {
  userData.style.display = 'block';

  renderUserData();
};

const renderUserData = () => {
  userData.innerHTML = `
    <p class="my-3">Username: ${userName.value}</p>
    <p>Password: ${password.value}</p>
  `;
};

loginBtn.addEventListener('click', showUserData);
