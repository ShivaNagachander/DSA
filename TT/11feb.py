#basic--------------------------------------------------------------
# class node:
#     def __init__(self,x):
#         self.data=x
#         self.next=None
# head=node(50)
# b=node(60)
# c=node(70)
# head.next=b
# b.next=c
# print(head.next.data)-->60
# print(head.next.next.data)-->70
#-------------------------------------------------------------------------------
# class node:
#     def __init__(self,x):
#         self.data=x
#         self.next=None
# head=node(50)
# head.next=node(60)
# head.next.next=node(70)
# print(head.next.data)-->60
# print(head.next.next.data)-->70
# print(head.next.next.next)-->None
#-------------------------------------------------------------------------------
# class node:
#     def __init__(self,x):
#         self.data=x
#         self.next=None
# head=node(50)
# head.next=node(60)
# head.next.next=node(70)
# temp=head
# while(temp!=None):
#     print(temp.data,end='->')
#     temp=temp.next
# print("none")
# 50->60->70->none
#-------------------------------------------------------------------------------
# class node:
#     def __init__(self,x):
#         self.data=x
#         self.next=None
# head=node(20)--->cumpulsory
# temp=head
# while(temp.next!=None):
#     temp=temp.next
# temp.next=node(30)
# # 2nd time
# temp=head
# while(temp.next!=None):
#     temp=temp.next
# temp.next=node(40)
# # ---------------------------------------
# # put the above inunction fo recalling evertime  a node is created
# # ---------------------------------------
# print("none")

#-------------------------------------------------------------------------------

# class node:
#     def __init__(self,x):
#         self.data=x
#         self.next=None
# # adding node at back of linked list
# def create(x):
#     temp=head
#     while(temp.next!=None):
#         temp=temp.next
#     temp.next=node(x)
# def display():
#     temp=head
#     while(temp!=None):
#         print(temp.data,end='->')
#         temp=temp.next
#     print("none")
# head=node(20)
# for i in range(5):
#     create(int(input()))
# display()

# 1
# 2
# 3
# 4
# 5
# 20->1->2->3->4->5->none


#-------------------------------------------------------------------------------



# class node:
#     def __init__(self,x):
#         self.data=x
#         self.next=None
# class linked:
#         # adding node at back of linked list
#         def __init__(self, x):
#             self.head = None
#         def create(self,x):
#             if(self.head==None):
#                 self.head == node(x)
#             else:
#                 temp=self.head
#                 while(temp.next!=None):
#                     temp=temp.next
#                 temp.next=node(x)
#         # adding node at front of linked list
#         def create_atfront(self,x,head):
#             temp=node(x)
#             temp.next=head
#             self.head=temp
#             # head=temp-->head become local var head should be global
#         def display(self):
#             temp=head
#             while(temp!=None):
#                 print(temp.data,end='->')
#                 temp=temp.next
#             print("none")
# l1=linked()
# l1.create(20)
# l1.create(30)
# l1.create(50)
# l1.create_atfront(50)
# l1.display()

#-------------------------------------------------------------------------------
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

# 50->40->20->30->50->none