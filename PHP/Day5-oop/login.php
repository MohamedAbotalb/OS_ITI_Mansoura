<?php

session_start();
// if (isset($_SESSION['loggedIn'])) {
//   header("Location: view-all.php");
// }
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
      <h2 class="my-5">Login</h2>
      <form action="loginController.php" method="post" class="row g-3 needs-validation" novalidate>
        
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
        </div>

        <?php
          if (isset($errors['login'])) { echo "<span style='color: red' >".$errors['login']."</span>"; }
        ?>

        <!-- Submit button -->
        <div class="col-1">
          <button class="btn btn-primary" type="submit">Login</button>
        </div>

        <!-- Reset button -->
        <div class="col-1">
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

