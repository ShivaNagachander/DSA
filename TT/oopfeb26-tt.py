## =========================================================================================
#oops programs
## =========================================================================================
#class cse:
#     x=20
#     def __init__(self):
#         self.y = 40
#     def qwer(self):
#         print(a.x,self.x)
#         print("this is meth")
#     def qwer2(self,q,w):
#         print(a.x,self.x,q,w)
#
# a=cse()
# a.qwer()
# a.qwer2(5,7)#goes to qwer2
# print(a.x)
# print(cse.x)
# print(a.y)
# print(cse.y)constructor use so only using obj we can aces data
# print(self.y)self not def
# this is meth
# 20 20 5 7
# 20
# 20
# 40
# =========================================================================================


# class cse:
#     def __init__(self):
#         print("hi")
#         self.y=40
#         self.x=50
# a=cse()
# # a=cse(20)missing one positional argument
# b=cse()
# print(a.x)
# print(b.x)


# =========================================================================================



# class cse:
#     def __init__(self,u):
#         self.y=u
#         self.x=50
# a=cse(20)
# b=cse(40)
# print(a.y)
# print(b.y)
# op
# 20
# 40


# =========================================================================================


# class cse:
#     def __init__(self,u,v):
#         self.x=u
#         self.y=v
#     def qwer(self,z):
#         print(self.x,self.y,z)
# a=cse(20,30)
# b=cse(40,20)
# a.qwer(10)
# b.qwer(15)
# op
# 20 30 10
# 40 20 15


# =========================================================================================
#infsys
# class cse:
#     def __init__(self,v,u):
#         self.x=u
#         self.y=v
#     def qwer(self,z):
#         print(self.x+z,self.y-z)
#                 b-20+12    40-12
#                 a-20+13    20-13
# a=cse(20,30)
# b=cse(40,20)#40 go to y ,20 go to x
# b.qwer(12)
# a.qwer(13)
# op
# 32 28
# 43 7

# =========================================================================================
#
# class cse:
#     def __init__(self,v,u):
#         self.x=u
#         self.y=v
#     def qwer(self,z):#50 0
#         print(self.x+z,self.y-z)
#     def asd(self):
#         print(self.x,a.y)
#         a.qwer(10)   #30 10
#         self.qwer(10) #40 40
# a=cse(10,40)
# b=cse(50,30)
# b.asd()
# op
# 30 10
# 50 0

# =========================================================================================
# =========================================================================================
#inheritance
# =========================================================================================
#single
# class A:
#     def asd(self):
#         print('hi')
# class B(A):
#     def asd(self):
#         print('hello')
# a=A()
# b=B()
# b.asd()
# hello
#----------------------------------------------------------------------------------------------------
# class A:
#     def asd(self):
#         print('hi')
# class B(A):
#     def asd(self):
#         print('hello')
# a=A()
# b=B()
# b.asd()
# ----------------------------------------------------------------------------------------------------
# mcq
# class A:
#     def asd(self):
#         print('hi')
# class B(A):
#     def asd(self):
#         print('hello')
# a=A()
# b=B()
# b.asd()method overriding of A by B
# hello :op
# ----------------------------------------------------------------------------------------------------
# class A:
#     def asd(self):
#         print('hi')
#     def asd(self):
#         print('hello')
# a=A()
# a.asd()method overloading in same place latest function is printed
# hello :op
# ----------------------------------------------------------------------------------------------------

# class A:
#     def asd(self):
#         print('hi')
# class B:
#     def asd(self):
#         print('hello')
# class C(B,A):
#     def fun(self):
#         print('hey')
#
# c=C()
# c.asd()
# op:hello method overriding




