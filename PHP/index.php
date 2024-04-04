<!DOCTYPE html>
<html lang="en">
  <head>
    <meta charset="UTF-8" />
    <meta name="viewport" content="width=device-width, initial-scale=1.0" />
    <title>Form Validation</title>

    <!-- Bootstrap CSS -->
    <link
      href="https://cdn.jsdelivr.net/npm/bootstrap@5.1.3/dist/css/bootstrap.min.css"
      rel="stylesheet"
      integrity="sha384-1BmE4kWBq78iYhFldvKuhfTAU6auU8tT94WrHftjDbrCEXSU1oBoqyl2QvZ6jIW3"
      crossorigin="anonymous"
    />

    <!-- Font-Awesome -->
    <link
      rel="stylesheet"
      href="https://cdnjs.cloudflare.com/ajax/libs/font-awesome/6.5.1/css/all.min.css"
      integrity="sha512-DTOQO9RWCH3ppGqcWaEA1BIZOC6xxalwEsw9c2QQeAIftl+Vegovlnee1c9QX4TctnWMn13TZye+giMm8e2LwA=="
      crossorigin="anonymous"
      referrerpolicy="no-referrer"
    />

    <style>
      body {
        padding-top: 50px;
      }
    </style>
  </head>
  <body>
    <div class="container position-relative text-center">
      <h1 class="my-5">Form Validation</h1>
      <form action="save.php" method="post" class="row g-3 needs-validation" novalidate>
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
        </div>

        <!-- Address textarea -->
        <div class="col-12 form-floating has-validation">
          <textarea
            class="form-control"
            placeholder="Leave a comment here"
            name="address"
            id="address"
            required
          ></textarea>
          <label for="address">Address</label>
          <div class="invalid-tooltip">Please enter a valid address.</div>
        </div>

        <!-- Country Select -->
        <div class="col-12 my-4 form-group">
          <select
            name="country"
            class="form-select form-select-lg mb-3"
            aria-label=".form-select-lg"
            aria-describedby="countryValidationFeedback"
            required
          >
            <option disabled selected>Select Country</option>
            <option value="Egypt">Egypt</option>
            <option value="KSA">KSA</option>
            <option value="UAE">UAE</option>
          </select>
          <div id="countryValidationFeedback" class="invalid-tooltip">
            Please enter a valid address.
          </div>
        </div>

        <!-- Radio Button -->
        <div class="form-group fs-4 col-md-8 d-flex justify-content-between">
          <p>Gender</p>
          <div class="form-check">
            <input
              class="form-check-input"
              type="radio"
              name="gender"
              value="male"
              id="male"
            />
            <label class="form-check-label" for="male"> Male </label>
          </div>
          <div class="form-check">
            <input
              class="form-check-input"
              type="radio"
              name="gender"
              value="female"
              id="female"
            />
            <label class="form-check-label" for="female"> Female </label>
          </div>
        </div>

        <!-- Checkbox Button -->
        <div class="form-group fs-4 col-md-8 d-flex justify-content-between">
          <p>Skills</p>
          <div class="form-check">
            <input
              class="form-check-input"
              type="checkbox"
              name="skills[]"
              value="PHP"
              id="PHP"
            />
            <label class="form-check-label" for="PHP"> PHP </label>
          </div>
          <div class="form-check">
            <input
              class="form-check-input"
              type="checkbox"
              name="skills[]"
              value="MYSQL"
              id="MYSQL"
            />
            <label class="form-check-label" for="MYSQL"> MYSQL </label>
          </div>

          <div class="form-check">
            <input
              class="form-check-input"
              type="checkbox"
              name="skills[]"
              value="J2SE"
              id="J2SE"
            />
            <label class="form-check-label" for="J2SE"> J2SE </label>
          </div>

          <div class="form-check">
            <input
              class="form-check-input"
              type="checkbox"
              name="skills[]"
              value="PostgreSQL"
              id="PostgreSQL"
            />
            <label class="form-check-label" for="PostgreSQL">
              PostgreSQL
            </label>
          </div>
        </div>

        <!-- Username input -->
        <div class="col-md-6 form-floating position-relative">
          <div class="form-floating has-validation">
            <input
              type="text"
              class="form-control"
              name="username"
              id="username"
              aria-describedby="validationTooltipUsernamePrepend"
              placeholder="Username"
              required
            />
            <label for="username">Username</label>
            <div class="invalid-tooltip">
              Please choose a unique and valid username.
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

        <!-- Department input -->
        <div class="col-12 form-group position-relative d-flex">
          <label for="department" class="form-label">Department</label>
          <input
            type="text"
            class="form-control"
            id="department"
            name="department"
            value="Open Source"
            readonly
          />
        </div>

        <!-- Submit button -->
        <div class="col-6">
          <button class="btn btn-primary" type="submit">Submit</button>
        </div>

        <!-- Reset button -->
        <div class="col-6">
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
