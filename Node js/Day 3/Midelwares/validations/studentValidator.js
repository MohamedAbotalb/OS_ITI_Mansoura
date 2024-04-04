const { body, param, query } = require("express-validator");

exports.insertValidator = [
  body("id")
    .isInt()
    .withMessage("student id shoukd be int")
    .custom(() => {
      next(new Error());
    }),
  body("userName")
    .optional()
    .isAlpha()
    .withMessage("student username should be string"),
  // .isLength({ min: 5 })
  // .withMessage(" student userName lenght>5"),
];

let updateValidator = [];
