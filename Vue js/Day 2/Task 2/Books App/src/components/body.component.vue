<template>
  <table class="table table-striped">
    <thead>
      <tr>
        <th>ISBN</th>
        <th>Name</th>
        <th>Author</th>
        <th>Category</th>
        <th>Pages</th>
        <th>Price</th>
      </tr>
    </thead>
    <tbody>
      <tr v-for="book in books" :key="book.ISBN">
        <td>{{ book.ISBN }}</td>
        <td>{{ book.name }}</td>
        <td>{{ book.author }}</td>
        <td>{{ book.category }}</td>
        <td>{{ book.pages }}</td>
        <td>{{ book.price }}</td>
      </tr>
    </tbody>
    <tfoot>
      <tr>
        <th colspan="3" class="text-center">
          <h3>total number of books: {{ books.length }}</h3>
        </th>
        <th>
          <button
            type="button"
            class="btn btn-primary"
            data-bs-toggle="modal"
            data-bs-target="#static"
          >
            Add Book
          </button>
          <div
            class="modal fade"
            id="static"
            data-bs-backdrop="static"
            data-bs-keyboard="false"
          >
            <div class="modal-dialog modal-dialog-centered">
              <div class="modal-content">
                <div class="modal-header">
                  <h5 class="modal-title">Add New Book</h5>
                  <button
                    type="button"
                    class="btn-close"
                    data-bs-dismiss="modal"
                    aria-label="Close"
                  ></button>
                </div>

                <div class="modal-body">
                  <div class="row w-100">
                    <form
                      class="needs-validation"
                      novalidate
                      @submit.prevent="addBook"
                    >
                      <div class="card p-2 mt-2">
                        <div class="row input-group has-validation">
                          <!-- Book name input -->
                          <div class="form-group m-3 text-start">
                            <label for="bookname">Book name</label>
                            <input
                              type="text"
                              class="form-control"
                              id="bookname"
                              required
                              v-model="bookData.name"
                              pattern="[a-zA-Z0-9.\s]+"
                            />
                            <div class="invalid-feedback">
                              Please enter a valid book name.
                            </div>
                          </div>

                          <!-- Author name input -->
                          <div class="form-group m-3 text-start">
                            <label for="authorname">Author name</label>
                            <input
                              type="text"
                              class="form-control"
                              id="authorname"
                              required
                              v-model="bookData.author"
                              pattern="[a-zA-Z\s]+"
                            />
                            <div class="invalid-feedback">
                              Please enter a valid author name.
                            </div>
                          </div>
                        </div>

                        <!-- Category Select -->
                        <div class="form-group m-3 text-start">
                          <label class="form-label">Category</label>
                          <select
                            name="category"
                            class="form-select"
                            required
                            v-model="bookData.category"
                          >
                            <option disabled value="">Select Category</option>
                            <option
                              v-for="cat in book.category"
                              :value="cat"
                              :key="cat"
                            >
                              {{ cat }}
                            </option>
                          </select>
                          <div class="invalid-feedback">
                            Please choose the book category.
                          </div>
                        </div>

                        <!-- Pages number input -->
                        <div class="form-group m-3 text-start">
                          <label for="pages" class="form-label"
                            >Number of Pages</label
                          >
                          <input
                            type="number"
                            class="form-control"
                            id="pages"
                            v-model="bookData.pages"
                            required
                            min="1"
                          />
                          <div class="invalid-feedback">
                            Please enter a valid number of book pages.
                          </div>
                        </div>

                        <!-- ISBN input -->
                        <div class="form-group m-3 text-start">
                          <label for="isbn" class="form-label">ISBN</label>
                          <input
                            type="text"
                            class="form-control"
                            id="isbn"
                            v-model="bookData.ISBN"
                            required
                            pattern="[0-9]{13}"
                          />
                          <div class="invalid-feedback">
                            Please enter a valid book ISBN.
                          </div>
                        </div>

                        <!-- Price number input -->
                        <div class="form-group m-3 text-start">
                          <label for="price" class="form-label">Price</label>
                          <input
                            type="number"
                            class="form-control"
                            id="price"
                            v-model="bookData.price"
                            required
                            min="1"
                          />
                          <div class="invalid-feedback">
                            Please enter a valid book price.
                          </div>
                        </div>

                        <div class="from-floating my-2 m-auto">
                          <input
                            type="submit"
                            class="btn btn-primary"
                            value="Submit"
                            data-bs-dismiss=""
                          />
                        </div>
                      </div>
                    </form>
                  </div>
                </div>

                <div class="modal-footer">
                  <button
                    type="button"
                    class="btn btn-secondary close"
                    data-bs-dismiss="modal"
                  >
                    Close
                  </button>
                </div>
              </div>
            </div>
          </div>
        </th>
      </tr>
    </tfoot>
  </table>
</template>

<script>
import books from '../books';
export default {
  data: () => ({
    bookData: {
      name: '',
      author: '',
      category: '',
      ISBN: '',
      price: '',
      pages: '',
    },
    books,
    book: {
      category: [
        'Frontend',
        'Backend',
        'AI',
        'Embedded Systems',
        'Networking',
        'Data Science',
      ],
    },
  }),
  methods: {
    addBook() {
      const form = document.querySelector('.needs-validation');

      form.addEventListener('click', () =>
        form.classList.remove('was-validated')
      );
      if (form.checkValidity()) {
        this.books.push({ ...this.bookData });
        this.resetData();

        document.querySelector('.close').click();
      } else {
        form.classList.add('was-validated');
      }
    },
    resetData() {
      this.bookData.name = '';
      this.bookData.author = '';
      this.bookData.pages = '';
      this.bookData.category = '';
      this.bookData.ISBN = '';
      this.bookData.price = '';
    },
  },
};
</script>

<style></style>
