# Print table of a number

print("This program prints table of a number")
print()
number = int(input("Enter a number: "))
print()
print("Table of", number)
print()
for i in range(1, 11):
    print(number, "x", i, '=', number * i)
