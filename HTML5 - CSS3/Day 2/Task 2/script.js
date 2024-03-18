const rectangle = document.querySelector('.rectangle');
const startBtn = document.getElementById('startBtn');
const pauseBtn = document.getElementById('pauseBtn');
const stopBtn = document.getElementById('stopBtn');

function startAnimation() {
  rectangle.style.animation = 'moveRect 3s linear infinite';
  rectangle.style.animationPlayState = 'running';
}

function pauseAnimation() {
  rectangle.style.animationPlayState = 'paused';
}

function stopAnimation() {
  rectangle.style.animation = 'none';
}

function mouseHover() {
  rectangle.style.animationPlayState = 'paused';
  rectangle.style.transform = 'scale(1.5)';
}

function mouseOut() {
  rectangle.style.animationPlayState = 'running';
  rectangle.style.transform = 'scale(1)';
}

rectangle.addEventListener('mouseover', mouseHover);
rectangle.addEventListener('mouseout', mouseOut);
startBtn.addEventListener('click', startAnimation);
pauseBtn.addEventListener('click', pauseAnimation);
stopBtn.addEventListener('click', stopAnimation);
