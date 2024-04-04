# Ask the user for his name then confirm that he has entered his name(not an empty string/integers). then proceed to ask
# him for his email and print all this data (Bonus) check if it is a valid email or not

import re


def validate_name() -> str:
    while True:
        name = input("Enter your name value: ")
        if name.isalpha() and len(name) > 2:
            return name

        print("Please enter a valid name value.")


def validate_email() -> str:
    while True:
        email = input("Enter your email: ")
        pattern = r"^[a-zA-Z0-9_.+-]+@[a-zA-Z0-9-]+\.[a-zA-Z0-9-.]+$"
        if re.match(pattern, email):
            return email
        print("Please enter a valid email address.")


user_name = validate_name()
user_email = validate_email()
print(f"Your name is '{user_name}' and you email is '{user_email}'")
