# a program to swap 2 numbers

print("Enter 2 numbers to swap: ")
a = int(input("Enter first number: "))
b = int(input("Enter second number: "))
temp = a
a = b
b = temp
print("After swapping: ")
print("First number: ", a)
print("Second number: ", b)
