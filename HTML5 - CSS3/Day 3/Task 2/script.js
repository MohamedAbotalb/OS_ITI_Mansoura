const btns = document.querySelectorAll('button');
const video = document.querySelector('video');

btns.forEach(
  (btn) =>
    (btn.onclick = () => {
      btns.forEach((btn) => btn.classList.remove('active'));
      btn.classList.add('active');
      if (btn.classList.contains('active')) {
        let src = btn.getAttribute('videosrc');
        video.src = src;
      }
    })
);

const play = () => {
  video.paused ? video.play() : video.pause();
};

function resize() {
  document.fullscreenElement
    ? video.webkitExitFullscreen()
    : video.requestFullscreen();
}

video.addEventListener('click', play);
video.addEventListener('dblclick', resize);
