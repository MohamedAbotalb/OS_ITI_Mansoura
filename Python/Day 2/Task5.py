# Write a function that takes a string and prints the longest alphabetical ordered substring occurred
# For example, if the string is 'abdulrahman' then the output is: Longest substring in alphabetical order is: abdu

def validate_string() -> str:
    while True:
        value = input("Enter the string value: ")
        if value.isalpha() and len(value) > 2:
            return value

        print("Please enter a valid string value.")


def get_longest_substring(string: str) -> str:
    current_value = string[0]
    longest_value = string[0]
    for char in string[1:]:
        if char >= current_value[-1]:
            current_value += char
        else:
            if len(current_value) > len(longest_value):
                longest_value = current_value
            current_value = char

    return longest_value


my_string = validate_string()
longest_substring = get_longest_substring(my_string)
print(f"The longest alphabetical ordered substring in '{my_string}' is '{longest_substring}'")
