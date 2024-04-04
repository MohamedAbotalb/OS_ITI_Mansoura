# Write a program that generate a multiplication table from 1 to the number passed.

while True:
    number = input("Enter the number of multiplication: ")
    if number.isdigit() and int(number) > 0:
        number = int(number)
        break
    else:
        print("Please enter a valid positive number.")

table = []
for i in range(1, number + 1):
    row = [i * j for j in range(1, i + 1)]
    table.append(row)

print(f"Multiplications from 1 to {number} are: {table}")