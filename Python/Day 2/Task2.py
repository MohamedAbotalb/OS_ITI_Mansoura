# write a function that takes a number as an argument and if the number divisible by 3 return "Fizz" and
# if it is divisible by 5 return "buzz" and if is divisible by both return "FizzBuzz"

def validate_number() -> int:
    while True:
        value = input("Enter the start value: ")
        if value.lstrip('-').isdigit():
            return int(value)

        print("Please enter a valid number.")


def get_result(number: int) -> str:
    if number % 3 == 0 or number % 5 == 0:
        return "FizzBuzz"
    elif number % 3 == 0:
        return "Fizz"
    elif number % 5 == 0:
        return "Buzz"
    else:
        return "the number is not divisible by 5 or 3"


my_number = validate_number()
result = get_result(my_number)
print(f"The result: {result}")
