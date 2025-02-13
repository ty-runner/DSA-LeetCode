class SinglyLinkedList:
    def __init__(self):
        self.head = None
    def push(self,value):
        newNode = Node(value)
        newNode.next = self.head
        self.head = newNode
    def display(self):
        current = self.head
        while current:
            print(current.value, end=" -> ")
            current = current.next
        print("None")
    def pop(self):
        #we want to delete head
        #take head's next make it head
        if self.head is None:
            print("BLANK LIST")
            return
        self.head = self.head.next
    def append(self, value):
        node = Node(value)
        if self.head is None:
            self.head = node
            return
        point = self.head
        while point.next is not None:
            point = point.next
        point.next = node
    def insert(self, index, value):
        if index == 0:
            self.push(value)
            return
        node = Node(value)
        point = self.head
        count = 0
        while count < index-1 and point is not None:
            point = point.next
            count += 1
        if point is None:
            print("Invalid index- out of bounds")
            return
        node.next = point.next
        point.next = node
    def remove(self, index):
        if index == 0:
            self.pop()
            return
        point = self.head
        count = 0
        while count < index-1 and point is not None:
            point = point.next
            count += 1
        if point is None or point.next is None:
            print("Invalid index- out of bounds")
            return
        if point.next.next is None:
            point.next = None
        else:
            point.next = point.next.next
    def search(self, value):
        point = self.head
        while point is not None:
            if point.value == value:
                return point
            point = point.next
        return None
    def length(self):
        point = self.head
        length = 0
        while point:
            length += 1
            point = point.next
        return length
    def reverse(self):
        point = self.head
        prev = None
        while point:
            next_node = point.next
            point.next = prev
            prev = point #skip to next
            point = next_node #skip to next
        self.head = prev


            
class Node:
    def __init__(self, value, next_node=None):
        self.value = value
        self.next = next_node


singly = SinglyLinkedList()
singly.push(1)
singly.display()
singly.push(2)
singly.display()
singly.pop()
singly.display()
singly.append(3)
singly.display()
singly.insert(2, 2)
singly.display()
singly.remove(0)
singly.display()
print(singly.search(3))
print(singly.length())
singly.insert(2, 80)
singly.display()
print(singly.length())
singly.reverse()
singly.display()