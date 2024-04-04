# Write a program that remove all vowels from the input word and generate a brief version of it.

vowels = "aeoiuAEOIU"
briefString = ""
while True:
    word = input("Enter the word: ")
    if word.isalpha():
        break
    else:
        print("Please enter a valid word.")

for char in word:
    if char not in vowels:
        briefString += char

print(f"Brief version of '{word}' is '{briefString}'")