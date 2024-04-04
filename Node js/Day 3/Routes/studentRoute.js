const express = require("express");
const controller = require("./../Controller/studentController");
const {
  insertValidator,
} = require("./../Midelwares/validations/studentValidator");
const validatonResult = require("./../Midelwares/validations/validatorResult");
const router = express.Router();

router
  .route("/students")
  .get(controller.getAllStudents)
  .post(insertValidator, validatonResult, controller.insertStudent)
  .patch(insertValidator, controller.updateStudent);

// router.get("/students/:id", controller.getStudentById);
// router.delete("/students/:id", controller.getStudentById);

router.route("/students/:id").get(controller.getStudentById);
// .delete(controller.deleteStudent)

module.exports = router;

// post(
//     // validation
//     (req, res, next) => {
//       if (true) next();
//       else next(new Error("validation Error"));
//     },
//     //athuration
//     (req, res, next) => {
//       if (!true) next();
//       else next(new Error("Authorization problem"));
//     },

//     (req, res, next) => {
//       res.status(201).json({ data: "Added" });
//     }
