const listGroupItems = document.querySelectorAll('.list-group a');

// Remove the active class from any item and then add it to the clicked item
listGroupItems.forEach(
  (item) =>
    (item.onclick = () => {
      listGroupItems.forEach((item) => item.classList.remove('active'));
      item.classList.add('active');
    })
);
