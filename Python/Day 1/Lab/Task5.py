# Write a program that prints the locations of "i" character in any string you added.

sentence = "Hello this is mohamed, i study in iti"
target = 'i'
locations = []
index = sentence.find(target)

while index != -1:
    locations.append(index)
    index = sentence.find(target, index + 1)

if locations:
    print(f"The character 'i' is found at the following indices: {locations}")
else:
    print("The character 'i' is not found in the sentence.")