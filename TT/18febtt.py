#linked list
# class node:
#     def __init__(self,x):
#         self.data=x
#         self.next=None
# class linked:
#         def __init__(self):
#             self.head = None
#         def create(self,x):
#             if(self.head==None):
#                 self.head = node(x)
#             else:
#                 temp=self.head
#                 while(temp.next!=None):
#                     temp=temp.next
#                 temp.next=node(x)
#         def add_front(self,x):
#             if(self.head==None):
#                 self.head=node(x)
#             else:
#                 temp=node(x)
#                 temp.next=self.head
#                 self.head=temp
#         def display(self):
#             temp=self.head
#             while(temp!=None):
#                 print(temp.data,end='->')
#                 temp=temp.next
#             print("none")
# l1=linked()
# l1.create(20)
# l1.add_front(40)
# l1.create(30)
# l1.create(50)
# l1.add_front(50)
# l1.display()


#-------------------------------------------
# class node:
#     def __init__(self,x):
#         self.data=x
#         self.next=None
#         # self.prev=None --------->doubly linked
# class Linked:
#     def __init__(self):
#         self.head=None
#     def insertatbeg(self,x):
#         if(self.head==None):
#             self.head=node(x)
#         else:
#             temp=node(x)
#             temp.next=self.head
#             self.head=temp
#     def insertatend(self, x):
#             if(self.head==None):
#                 self.head = node(x)
#             else:
#                 temp=self.head
#                 while(temp.next!=None):
#                     temp=temp.next
#                 temp.next=node(x)
#     def display(self):
#         if(self.head==None):
#             print("EMPTY LINKED")
#         else:
#             temp=self.head
#             while(temp!=None):
#                 print(temp.data,end='->')
#                 temp=temp.next
#             print('none')
#
#     def add(self):
#         if(self.head==None):
#             print("EMPTY LINKED")
#         else:
#             s=0
#             temp=self.head
#             while(temp!=None):
#                 s=s+temp.data
#                 temp=temp.next
#             print('sum:',s)
#     def linear_search(self,x):
#         if(self.head==None):
#             print("EMPTY LINKED")
#         else:
#             temp=self.head
#             i=1
#             while(temp!=None):
#                 if(x==temp.data):
#                     print("node found at",i)
#                     return
#                 i+=1
#                 temp=temp.next
#             print("node not found")
#             return
#
#         def midnode(self):
#             # count nodes
#             temp = self.head
#             c = 0
#             while (temp != None):
#                 c = c + 1
#                 temp = temp.next
#             c = c // 2
#             # find mid
#             temp = self.head
#             while (c):
#                 temp = temp.next
#                 c = c - 1
#             print(temp.data)
# l1=Linked()
# l1.insertatbeg(20)
# l1.insertatend(25)
# l1.insertatend(55)
# l1.display()
# l1.add()
# l1.linear_search(55)
# l1.linear_search(100)
# 20->25->55->none
# sum: 100
# node found at 3
# node not found
#-------------------------------------------
# 10-20-30-40-50-60-70-n
# mid node prog
# class node:
#     def __init__(self,x):
#         self.data=x
#         self.next=None
#         # self.prev=None --------->doubly linked
# class Linked:
#     def __init__(self):
#         self.head=None
#     def insertatbeg(self,x):
#         if(self.head==None):
#             self.head=node(x)
#         else:
#             temp=node(x)
#             temp.next=self.head
#             self.head=temp
#     def insertatend(self, x):
#             if(self.head==None):
#                 self.head = node(x)
#             else:
#                 temp=self.head
#                 while(temp.next!=None):
#                     temp=temp.next
#                 temp.next=node(x)
#     # fast-slowpointermethod
#     #fastptr-2jumps
#     # slowptr-1jumps
#     # def midnode(self):
#     #     if(self.head==None):
#     #         print("empty")
#     #     tempf=self.head
#     #     temps=self.head
#     #     while(tempf!=None and tempf.next!=None):
#     #         tempf=tempf.next.next
#     #         temps=temps.next
#     #     print("mid:",temps.data)
#
#     # manual meth
#     # def midnode(self):
#     #     #count nodes
#     #     temp=self.head
#     #     c=0
#     #     while(temp!=None):
#     #         c=c+1
#     #         temp=temp.next
#     #     c=c//2
#     #     #find mid
#     #     temp=self.head
#     #     while(c):
#     #         temp=temp.next
#     #         c=c-1
#     #     print(temp.data)
# l1=Linked()
# l1.insertatend(10)
# l1.insertatend(20)
# l1.insertatend(30)
# l1.insertatend(40)
# l1.insertatend(50)
# l1.insertatend(60)
# l1.insertatend(70)
# l1.midnode()

# 10-20-30-40-50-60-70-n
#        f
# s

#-------------------------------------------sliding wndow
#
# class node:
#     def __init__(self,x):
#         self.data=x
#         self.next=None
#         # self.prev=None --------->doubly linked
# class Linked:
#     def __init__(self):
#         self.head=None
#     def insertatbeg(self,x):
#         if(self.head==None):
#             self.head=node(x)
#         else:
#             temp=node(x)
#             temp.next=self.head
#             self.head=temp
#     def insertatend(self, x):
#             if(self.head==None):
#                 self.head = node(x)
#             else:
#                 temp=self.head
#                 while(temp.next!=None):
#                     temp=temp.next
#                 temp.next=node(x)
#     #check consecutive occurence a-3,b-2
#     def slidingwindow(self):
#         if(self.head==None):
#             print("EMPTY LINKED")
#         else:
#             temp=self.head
#             while(temp.next!=None):
#                 print(temp.data,temp.next.data)
#                 temp=temp.next
#
# l1=Linked()
# l1.insertatend(10)
# l1.insertatend(20)
# l1.insertatend(30)
# l1.insertatend(40)
# l1.insertatend(50)
# l1.insertatend(60)
# l1.insertatend(70)
# l1.slidingwindow()


#-------------------------------------------
# dobly linked list
#-------------------------------------------
class node:
    def __init__(self,x):
        self.data=x
        self.next=None
        self.prev=None
class DLinked:
    def __init__(self):
        self.head=None
        self.tail=None
    def insertatbeg(self,x):
        if(self.head==None):
            self.head=node(x)
            self.tail=self.head
        else:
            temp=node(x)
            temp.next=self.head
            self.head.prev=temp
            self.head=temp
    def insertatend(self,x):
        if(self.head==None):
            self.head=node(x)
            self.tail=self.head
        else:
            temp = node(x)
            self.tail.next = temp
            temp.prev=self.tail
            self.tail=temp

    def displayrev(self):
         if(self.head==None):
             print("empty")
         else:
             temp=self.tail
             while(temp!=None):
                print(temp.data,end=" ")
                temp=temp.prev

    def palindrome(self):
        b=self.head
        l=self.tail
        while(b!=l):
            if(b.data!=l.data):
                print("not palindrome")
                return
        b=b.next
        l=l.prev
        print("palindrome")

l1=DLinked()
l1.insertatend(10)
l1.insertatend(20)
l1.insertatend(30)
l1.insertatend(40)
l1.insertatend(50)
l1.insertatend(60)
l1.insertatend(70)
l1.displayrev()