from ChildQueue import ChildQueue

my_queue = ChildQueue("my_queue", 5)
my_queue.insert(1)
my_queue.insert(2)
my_queue.insert(3)
my_queue.insert(4)

ChildQueue.save("data.json")
ChildQueue.load("data.json")

second_queue = ChildQueue("second_queue", 6)
second_queue.insert(1)
second_queue.insert(2)
second_queue.insert(3)
second_queue.insert(4)
second_queue.insert(5)

ChildQueue.save("data.json")
ChildQueue.load("data.json")

loaded_queue = ChildQueue.get_queue("my_queue")
loaded_second_queue = ChildQueue.get_queue("second_queue")

if loaded_queue:
    print("Values of the loaded queue:", loaded_queue['values'])
else:
    print("Queue not found.")

if loaded_second_queue:
    print("Values of the loaded queue:", loaded_second_queue['values'])
else:
    print("Queue not found.")
