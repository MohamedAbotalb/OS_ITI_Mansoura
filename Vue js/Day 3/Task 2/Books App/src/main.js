import { createApp } from 'vue';
import App from './App.vue';
import router from '@/routes/index';
import { createPinia } from 'pinia';

const pinia = createPinia();
const app = createApp(App);

app.use(pinia).use(router).mount('#app');
