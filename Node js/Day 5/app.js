const express = require("express");
const mongoose = require("mongoose");
const dot_env = require("dotenv").config();
const studentRoute = require("./Routes/studentRoute");
const departmentRoute = require("./Routes/departmentRoute");
const loginRoute = require("./Routes/authentication");
const authenticationMW = require("./Midelwares/authenticationMW");
// 1- default function create server
const server = express();

//2- setting port number
const port = process.env.PORT || 8080;

mongoose
  .connect("mongodb://127.0.0.1:27017/ITISystem")
  .then(() => {
    console.log("DB Connected....");
    server.listen(port, () => {
      console.log("I am listening..........", port);
    });
  })
  .catch((error) => {
    console.log("DB Problem ..." + error);
  });

/********************* Structure*************** */
// first MW
server.use((request, response, next) => {
  console.log(request.url, request.method);

  next();
});

/******************* EndPoints (Routes) */
server.use(express.json());

server.use(loginRoute);

server.use(authenticationMW);
// layer authentication
server.use(studentRoute);
server.use(departmentRoute);
/******************************************/
// Not Found
server.use((request, response) => {
  response.status(404).json({ data: "Not Found" });
});

// Error MW
server.use((error, request, response, next) => {
  response.status(500).json({ data: `Error MW ${error}` });
});
