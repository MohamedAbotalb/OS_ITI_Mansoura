const mongoose = require("mongoose");

//1- create schema object

const addressSchema = new mongoose.Schema(
  {
    city: String,
    street: Number,
  },
  { _id: false }
);

const schema = new mongoose.Schema({
  _id: Number,
  userName: { type: String },
  password: { type: String },
  department: { type: Number, ref: "departments" }, // ref:"collectionName"
  address: addressSchema,
});

//2-mapping
module.exports = mongoose.model("students", schema);
