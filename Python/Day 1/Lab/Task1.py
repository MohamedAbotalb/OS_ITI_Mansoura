# Write a program that counts up the number of vowels [a, e, i, o, u] contained in the string.

sentence = "Hello from Ghaza"
vowels = 'aeoiuAEOIU'
count = 0

for character in sentence:
    if character in vowels:
        count += 1

print(f"count of vowels in the sentence '{sentence}' is {count}")
