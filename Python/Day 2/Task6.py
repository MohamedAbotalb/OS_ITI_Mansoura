# Write a program which repeatedly reads numbers until the user enters “done”.
# Once “done” is entered, print out the total, count, and average of the numbers.
# If the user enters anything other than a number, detect their mistake,
# print an error message and skip to the next number.

def get_numbers() -> list:
    values = []
    while True:
        value = input("Enter a number or 'done' to finish: ")
        if value.lstrip('-').isdigit():
            values.append(value)
        elif value.lower() == 'done':
            break
    return values


def calculate_total(values: list) -> float:
    total_value = 0
    for num in values:
        total_value += float(num)
    return total_value


def calculate_average(total_value: float, count_value: int) -> float:
    if count_value == 0:
        return 0
    return total_value / count_value


numbers = get_numbers()
total = calculate_total(numbers)
count = len(numbers)
average = calculate_average(total, count)
print(f"Total: {total}")
print(f"Count: {count}")
print(f"Average: {average}")
