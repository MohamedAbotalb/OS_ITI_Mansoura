const StudentSchema = require("./../Model/StudentModel");

exports.getAllStudents = (req, res, next) => {
  StudentSchema.find({})
    .populate({ path: "department", select: { name: 1 } })
    .then((data) => {
      res.status(200).json({ data });
    })
    .catch((error) => next(error));
};

exports.getStudentById = (req, res, next) => {
  StudentSchema.findOne({ _id: req.params.id })
    .populate({ path: "department" })
    .then((object) => {
      if (!object) {
        throw new Error("Student not Exists");
      }
      res.status(200).json({ object });
    })
    .catch((error) => next(error));
};

exports.insertStudent = (req, res, next) => {
  let object = new StudentSchema(req.body);
  object
    .save()
    .then((data) => {
      res.status(200).json({ data });
    })
    .catch((error) => next(error));
};

exports.updateStudent = (req, res, next) => {
  res.status(200).json({ data: "updated" });
};
