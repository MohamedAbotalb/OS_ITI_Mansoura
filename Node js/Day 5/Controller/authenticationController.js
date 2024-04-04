const StudentShema = require("./../Model/StudentModel");
const jwt = require("jsonwebtoken");

exports.login = (req, res, next) => {
  StudentShema.findOne({
    userName: req.body.userName,
    password: req.body.password,
  })
    .then((object) => {
      if (!object) {
        throw new Error("Not Authenticated");
      }

      let token = jwt.sign(
        {
          _id: object._id,
          role: "student",
        },
        "os track",
        { expiresIn: "1hr" }
      );

      res.json({ data: "Authenticated", token });
    })
    .catch((error) => next(error));
};
