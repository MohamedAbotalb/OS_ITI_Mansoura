# Write a program that build a Mario pyramid

while True:
    height = input("Enter the height of the pyramid: ")
    if height.isdigit() and int(height) > 0:
        height = int(height)
        break
    else:
        print("Please enter a valid positive number.")

for i in range(1, height + 1):
    print(" " * (height - i) + "*" * i)
