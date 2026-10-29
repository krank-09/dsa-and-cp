# Queue class backed by a Python list: enqueue, dequeue, peek, size.

# Implementing a simple queue in Python
class Queue:
    def __init__(self):
        self.items = []

    def is_empty(self):
        return len(self.items) == 0

    def enqueue(self, item):
        self.items.append(item)

    def dequeue(self):
        if not self.is_empty():
            return self.items.pop(0)
        return None

    def peek(self):
        if not self.is_empty():
            return self.items[0]
        return None

    def size(self):
        return len(self.items)

# Example usage
q = Queue()
q.enqueue(10)
q.enqueue(20)
print("Front element:", q.peek())
print("Queue size:", q.size())
q.dequeue()
print("Front element after dequeue:", q.peek())
print("Is queue empty?", q.is_empty())

# Implementing a simple queue in Python w/o in-built methods
# class SimpleQueue:
#     def __init__(self):
#         self.items = []
#         self.front_index = 0

#     def is_empty(self):
#         return self.front_index >= len(self.items)

#     def enqueue(self, item):
#         self.items.append(item)
#
#     def dequeue(self):
#         if not self.is_empty():
#             item = self.items[self.front_index]
#             self.front_index += 1
#             return item
#         return None

#     def peek(self):
#         if not self.is_empty():
#             return self.items[self.front_index]
#         return None

#     def size(self):
#         return len(self.items) - self.front_index
    
#     def __str__(self):
#         return str(self.items[self.front_index:])
# # Example usage
# sq = SimpleQueue()
# sq.enqueue(10)  
# sq.enqueue(20)
# print("Front element:", sq.peek())
# print("Queue size:", sq.size())
# sq.dequeue()    
# print("Front element after dequeue:", sq.peek())
# print("Is queue empty?", sq.is_empty())