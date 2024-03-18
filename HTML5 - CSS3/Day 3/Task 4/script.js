window.addEventListener('load', () => {
  mapElement = document.querySelector('#map');
  infoElement = document.querySelector('#info');
  const displayMapBtn = document.querySelector('#display');
  const displayInformationBtn = document.querySelector('#details');

  displayMapBtn.addEventListener('click', () => {
    mapElement.style.display = 'block';
    infoElement.style.display = 'none';
    showMap();
  });

  displayInformationBtn.addEventListener('click', () => {
    mapElement.style.display = 'none';
    infoElement.style.display = 'flex';
    showInfo();
  });

  infoElement.addEventListener('click', () => {
    infoElement.style.color = 'white';
    infoElement.style.backgroundColor = '#00b2ff';
    infoElement.style.border = '5px double blue';
    infoElement.style.transform = 'scale(1.1)';

    setTimeout(() => {
      infoElement.style.color = 'black';
      infoElement.style.backgroundColor = 'greenyellow';
      infoElement.style.border = '3px solid purple';
      infoElement.style.transform = 'scale(1)';
    }, 2000);
  });

  const getPositionMap = (position) => {
    const lat = position.coords.latitude;
    const lng = position.coords.longitude;
    const location = new google.maps.LatLng(lat, lng);
    const specs = { zoom: 12, center: location };
    const map = new google.maps.Map(mapElement, specs);

    new google.maps.Marker({
      position: location,
      map,
      title: "I'm here",
    });
  };

  const errorHandler = () => {
    alert('Error');
  };

  const showMap = () => {
    if (navigator.geolocation) {
      this.navigator.geolocation.getCurrentPosition(
        getPositionMap,
        errorHandler
      );
    } else {
      infoElement.innerText = 'Update Your Browser and Try Again !';
    }
  };

  const getPositionInfo = (position) => {
    infoElement.innerHTML = `
      <p>Latitude (degree)</p>
      <p>${position.coords.latitude}</p>
      <p>Longitude (degree)</p>
      <p>${position.coords.longitude}</p>
      <p>Accuracy (m)</p>
      <p>${position.coords.accuracy}</p>
      <p>Time Stamp (Current Time and Date)</p>
      <p>${new Date()}</p>
    `;
  };

  const showInfo = () => {
    if (navigator.geolocation) {
      this.navigator.geolocation.getCurrentPosition(
        getPositionInfo,
        errorHandler
      );
    } else {
      infoElement.innerText = 'Update Your Browser and Try Again !';
    }
  };
});
