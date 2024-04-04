const DepartmentSchema = require("./../Model/DepartmentModel");
exports.getAllDepartments = (req, res, next) => {
  DepartmentSchema.find()
    .then((data) => {
      res.status(200).json({ data });
    })
    .catch((error) => next(error));
};

exports.insertDepartment = (req, res, next) => {
  let object = new DepartmentSchema(req.body);
  object
    .save()
    .then((data) => {
      res.status(201).json({ data });
    })
    .catch((error) => next(error));
};
