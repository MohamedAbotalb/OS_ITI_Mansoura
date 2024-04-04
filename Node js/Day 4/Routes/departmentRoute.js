const express = require("express");
const controller = require("./../Controller/departmnetController");
const router = express.Router();

router
  .route("/departments")
  .get(controller.getAllDepartments)
  .post(controller.insertDepartment);

module.exports = router;
