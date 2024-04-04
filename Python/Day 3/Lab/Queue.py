# We need to implement a python class that represents the queue data structure.
# The class should have these operations:
# - insert(value) => which inserts a new value at the rear of the queue
# - pop() => which returns and removes a value from the front of the queue.
# We should return None and print a warning message if we tried to pop value from an empty queue
# - is_empty() => which returns True or False to represent whether the queue is empty or not

class Queue:
    def __init__(self):
        self.values = []

    def is_empty(self) -> bool:
        return len(self.values) == 0

    def insert(self, value: int) -> None:
        self.values.append(value)

    def pop(self) -> None or int:
        if self.is_empty():
            print("Queue is empty")
            return None
        return self.values.pop(0)
