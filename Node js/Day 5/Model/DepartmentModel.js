const mongoose = require("mongoose");

const schema = new mongoose.Schema({
  _id: Number,
  name: { type: String, unique: true },
});

module.exports = mongoose.model("departments", schema);
