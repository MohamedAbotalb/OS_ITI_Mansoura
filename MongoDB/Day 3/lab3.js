// Display employees fullname and department name for all employees
db.employee.aggregate([
  {
    $lookup: {
      from: 'department',
      localField: 'department_id',
      foreignField: 'department_id',
      as: 'department',
    },
  },
  {
    $project: {
      full_name: 1,
      departmentName: {
        $arrayElemAt: ['$department.department_description', 0],
      },
    },
  },
]);

// Display employees with position “VP Country Manager” (only display employee full name and salary).
db.employee.aggregate([
  {
    $lookup: {
      from: 'position',
      localField: 'position_id',
      foreignField: 'position_id',
      as: 'position',
    },
  },
  {
    $match: {
      'position.position_title': 'VP Country Manager',
    },
  },
  {
    $project: {
      full_name: 1,
      salary: 1,
    },
  },
]);

// Group products by brand name, count number
db.product.aggregate([
  {
    $group: {
      _id: '$brand_name',
      count: { $sum: 1 },
    },
  },
  {
    $project: {
      BrandName: '$_id',
      count: 1,
      _id: 0,
    },
  },
]);

// Group products by brand_name and product_name ,only select brand names ("Blue Label","King","Washington") then sort them by brand_name and product_name ascending
db.product.aggregate([
  {
    $project: {
      brand_name: 1,
      product_name: 1,
      _id: 0,
    },
  },
  {
    $match: {
      brand_name: { $in: ['Washington', 'King', 'Blue Label'] },
    },
  },
  {
    $sort: {
      brand_name: 1,
      product_name: 1,
    },
  },
]);
