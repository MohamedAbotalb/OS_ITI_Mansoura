const express = require("express");
const controller = require("./../Controller/studentController");
const {
  insertValidator,
} = require("./../Midelwares/validations/studentValidator");
const validatonResult = require("./../Midelwares/validations/validatorResult");
const { isAdmin } = require("./../Midelwares/authenticationMW");
const router = express.Router();

router
  .route("/students")
  .get(isAdmin, controller.getAllStudents)
  .post(insertValidator, validatonResult, controller.insertStudent)
  .patch(insertValidator, controller.updateStudent);

router.route("/students/:id").get(controller.getStudentById);

module.exports = router;
