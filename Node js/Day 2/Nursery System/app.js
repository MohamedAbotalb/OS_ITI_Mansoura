const express = require('express');
const morgan = require('morgan');
const cors = require('cors');

const app = express();
const port = process.env.PORT || 8081;

app.listen(port, () => {
  console.log(`I'm listening on port ${port} ........`);
});

// Logging MiddleWare
app.use(morgan('dev'));

// CORS MiddleWare
app.use(cors());

// Routes
app.get('/teachers', (req, res, next) => {
  res.status(200).json('Got all teachers');
});

app.post('/teachers', (req, res, next) => {
  res.status(200).json('Added new teacher');
});

// Not found MiddleWare
app.use((req, res, next) => {
  res.status(404).json({ data: 'Not Found page' });
});

// Error MiddleWare
app.use((err, req, res, next) => {
  res.status(500).json({ data: `Error: ${err}` });
});
