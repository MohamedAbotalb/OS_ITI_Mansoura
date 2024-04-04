# We need to implement another queue class that has the same properties as previous but with the following changes:
# A. The queue should have a name that is provided as a parameter of its constructor
# B. The queue should have a size that is provided as a parameter of its constructor and if we tried to insert more
# values than its size raises a custom exception called QueueOutOfRangeException
# C. The queue keeps track with all queues instances that has been created through this class, and we can get
# any queue of them using its name
# D. The queue class should have two class methods called (save, load) which saves all created queues
# instances to a file and load them when needed. (bonus)

from Queue import Queue
from QueueException import QueueOutOfRangeException
import json


class ChildQueue(Queue):
    queues = {}

    def __init__(self, name: str, size: int):
        super().__init__()
        self.size = size
        self.name = name
        self.queues[name] = self.__dict__

    @property
    def name(self) -> str:
        return self._name

    @name.setter
    def name(self, value) -> None:
        if value in ChildQueue.queues:
            raise ValueError("Queue with this name already exists.")
        self._name = value

    @classmethod
    def load(cls, filename) -> None:
        try:
            file = open(filename, 'r')
            cls.queues = json.load(file)
        except Exception as e:
            print(f"Error: {e}")

    @classmethod
    def save(cls, filename) -> None:
        try:
            file = open(filename, 'w')
            json.dump(cls.queues, file, indent=2)
        except Exception as e:
            print(f"Error: {e}")

    @classmethod
    def get_queue(cls, name) -> Queue:
        return cls.queues.get(name)

    def is_full(self) -> bool:
        return len(self.values) >= self.size

    def insert(self, value: int) -> None:
        if self.is_full():
            raise QueueOutOfRangeException("Queue size exceeded.")
        self.values.append(value)


