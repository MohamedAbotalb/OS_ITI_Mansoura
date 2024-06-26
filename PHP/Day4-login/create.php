<?php

session_start();
$errors = isset($_SESSION['errors']) ? $_SESSION['errors'] : [];

?>

<!DOCTYPE html>
<html lang="en">
  <head>
    <meta charset="UTF-8" />
    <meta name="viewport" content="width=device-width, initial-scale=1.0" />
    <title>PHP CRUD APP</title>

    <!-- Bootstrap CSS -->
    <link
      href="https://cdn.jsdelivr.net/npm/bootstrap@5.1.3/dist/css/bootstrap.min.css"
      rel="stylesheet"
      integrity="sha384-1BmE4kWBq78iYhFldvKuhfTAU6auU8tT94WrHftjDbrCEXSU1oBoqyl2QvZ6jIW3"
      crossorigin="anonymous"
    />

    <style>
      body {
        padding-top: 50px;
      }
    </style>
  </head>
  <body>
    <div class="container position-relative text-center">
      <h1 class="my-5">PHP CRUD APP</h1>
      <h2 class="my-5">Register</h2>
      <form action="save.php" method="post" class="row g-3 needs-validation" enctype="multipart/form-data" novalidate>
        <!-- First name input -->
        <div class="col-md-6 form-floating position-relative">
          <input
            type="text"
            class="form-control"
            name="first_name"
            id="firstname"
            placeholder="First Name"
            required
          />
          <label for="firstname">First name</label>
          <div class="invalid-tooltip">Please enter your first name.</div>
          <?php
            if (isset($errors['fname'])) { echo "<span style='color: red' >".$errors['fname']."</span>"; }
          ?>
        </div>

        <!-- Last name input -->
        <div class="col-md-6 form-floating position-relative">
          <input
            type="text"
            class="form-control"
            name="last_name"
            id="lastname"
            placeholder="Last Name"
            required
          />
          <label for="lastname">Last name</label>
          <div class="invalid-tooltip">Please enter your last name.</div>
          <?php
            if (isset($errors['lname'])) { echo "<span style='color: red' >".$errors['lname']."</span>"; }
          ?>
        </div>

        <!-- Address input -->
        <div class="col-md-6 form-floating position-relative">
          <input
            type="text"
            class="form-control"
            name="address"
            id="address"
            placeholder="Address"
            required
          />
          <label for="address">Address</label>
          <div class="invalid-tooltip">Please enter your Address.</div>
          <?php
            if (isset($errors['address'])) { echo "<span style='color: red' >".$errors['address']."</span>"; }
          ?>
        </div>

        <!-- Salary input -->
        <div class="col-md-6 form-floating position-relative">
          <input
            type="number"
            class="form-control"
            name="salary"
            id="salary"
            min="3000"
            max="100000"
            placeholder="Salary"
            required
          />
          <label for="salary">Salary</label>
          <div class="invalid-tooltip">Please enter your a valid Salary.</div>
          <?php
            if (isset($errors['salary'])) { echo "<span style='color: red' >".$errors['salary']."</span>"; }
          ?>
        </div>

        <!-- Radio Button -->
        <div class="form-group fs-4 col-md-8 d-flex justify-content-between">
          <p>Gender</p>
          <div class="form-check">
            <input
              class="form-check-input"
              type="radio"
              name="gender"
              value="Male"
              id="male"
            />
            <label class="form-check-label" for="male"> Male </label>
          </div>
          <div class="form-check">
            <input
              class="form-check-input"
              type="radio"
              name="gender"
              value="Female"
              id="female"
            />
            <label class="form-check-label" for="female"> Female </label>
          </div>
          <?php
            if (isset($errors['gender'])) { echo "<span style='color: red' >".$errors['gender']."</span>"; }
          ?>
        </div>

        <!-- Email input -->
        <div class="col-md-6 form-floating position-relative">
          <div class="form-floating has-validation">
            <input
              type="email"
              class="form-control"
              name="email"
              id="email"
              aria-describedby="validationTooltipEmailPrepend"
              placeholder="Email"
              required
            />
            <label for="email">Email</label>
            <div class="invalid-tooltip">
              Please choose a unique and valid email.
            </div>
          </div>
          <?php
            if (isset($errors['email'])) { echo "<span style='color: red' >".$errors['email']."</span>"; }
          ?>
        </div>

        <!-- Password input -->
        <div class="col-md-6 form-floating position-relative">
          <input
            type="password"
            class="form-control"
            name="password"
            id="password"
            placeholder="Password"
            required
          />
          <label for="password">Password</label>
          <div class="invalid-tooltip">
            Please choose a unique and valid password.
          </div>
          <?php
            if (isset($errors['password'])) { echo "<span style='color: red' >".$errors['password']."</span>"; }
          ?>
        </div>

        <!-- Image file input -->
        <div class="col-md-6">
          <input class="form-control" type="file" name="image">
          <?php
            if (isset($errors['image'])) { echo "<span style='color: red' >".$errors['image']."</span>"; }
          ?>
        </div>

        <!-- Submit button -->
        <div class="col-3">
          <button class="btn btn-primary" type="submit">Submit</button>
        </div>

        <!-- Reset button -->
        <div class="col-3">
          <button class="btn btn-primary" type="reset">Reset</button>
        </div>
      </form>
    </div>

    <br /><br /><br /><br /><br /><br /><br /><br /><br /><br /><br /><br /><br />
    <br /><br /><br /><br /><br /><br /><br /><br /><br /><br /><br /><br /><br />
    <script
      src="https://cdn.jsdelivr.net/npm/bootstrap@5.1.3/dist/js/bootstrap.bundle.min.js"
      integrity="sha384-ka7Sk0Gln4gmtz2MlQnikT1wXgYsOg+OMhuP+IlRH9sENBO0LRn5q+8nbTov4+1p"
      crossorigin="anonymous"
    ></script>
    <script src="script.js"></script>
  </body>
</html>
