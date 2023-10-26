class Node:
    def __init__(self, data):
        self.data = data
        self.next = None #다음 데이터를 가리킴

    def __repr__(self): 
        return self.data

class LinkedList:
    def __init__(self, nodes=None):
        self.head = None
    
    def display(self):
        node = self.head
        nodes = [] # list로 구현
        while node is not None:
            nodes.append(node.data)
            node = node.next
        nodes.append("None")
        print( " -> ".join(nodes)) #node를 print해줌 비어있을경우 None 을 print

    def push(self, node):
        node.next = self.head
        self.head = node

    def pop(self):
        self.head = self.head.next

    def peek(self):
        print(self.head)
        
llist = LinkedList()
llist.push(Node("b"))
llist.push(Node("a"))
llist.push(Node("c"))
llist.push(Node("e"))
llist.push(Node("d"))
llist.pop()
llist.peek()
llist.display()