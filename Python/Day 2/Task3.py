# Write a function which has an input of a string from user then it will return the same string reversed.

def validate_string() -> str:
    while True:
        value = input("Enter the string value: ")
        if value.isalpha() and len(value) > 1:
            return value

        print("Please enter a valid string value.")


string = validate_string()
reversed_string = string[::-1]
print(f"The reversed string of {string} is {reversed_string}")
