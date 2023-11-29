class Stack:
    def __init__(self):
        self.stack = []

    def push(self, item):
        self.stack.append(item)

    def pop(self):
        if not self.is_empty():
            return self.stack.pop()
        else:
            return None

    def is_empty(self):
        return len(self.stack) == 0

    def size(self):
        return len(self.stack)

    def display(self):
        print("Содержимое стека:", self.stack)
stack = Stack()

stack.push(32)
stack.display()

stack.push(52)
stack.display()

stack.push(19)
stack.display()

print("Извлеченный элемент:", stack.pop())
stack.display()

print("Извлеченный элемент:", stack.pop())
stack.display()

print("Извлеченный элемент:", stack.pop())
stack.display()
