# Write a function that accepts two arguments (length, start) to generate an array of a specific length
# filled with integer numbers increased by one from start.

def validate_length() -> int:
    while True:
        length_value = input("Enter the length value: ")
        if length_value.isdigit() and int(length_value) > 0:
            return int(length_value)

        print("Please enter a valid positive number.")


def validate_start() -> int:
    while True:
        start_value = input("Enter the start value: ")
        if start_value.lstrip('-').isdigit():
            return int(start_value)

        print("Please enter a valid number.")


def generate_list(my_length: int, my_start: int) -> list:
    my_list = []
    for i in range(my_length):
        my_list.append(my_start + i)
    return my_list


length = validate_length()
start = validate_start()
result = generate_list(length, start)
print(f"The generated List: {result}")
