# Fill an array of 5 elements from the user, Sort it in descending and ascending orders then display the output.

myList = []
for i in range(5):
    while True:
        value = input(f"Enter value number {i + 1}: ")
        if value.isdigit():
            myList.append(int(value))
            break
        else:
            print("Please enter a valid integer.")

print(myList)
myList.sort(reverse=True)
print(myList)
myList.sort()
print(myList)