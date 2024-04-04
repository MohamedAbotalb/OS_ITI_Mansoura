exports.getAllStudents = (req, res, next) => {
  console.log(req.query);
  //   console.log(req.params);

  res.status(200).json({ data: [] });
};

exports.getStudentById = (req, res, next) => {
  res.status(200).json({ data: req.params });
};

exports.insertStudent = (req, res, next) => {
  console.log(req.body);
  res.status(200).json({ data: "added" });
};

exports.updateStudent = (req, res, next) => {
  res.status(200).json({ data: "updated" });
};
