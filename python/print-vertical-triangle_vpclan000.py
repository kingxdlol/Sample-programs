#print vertical triangle

print("Enter the number of rows:")
rows = int(input())


for i in range(1, rows+1):
    print(" "*(rows-i) + "*"*i)


for i in range(rows-1, 0, -1):
    print(" "*(rows-i) + "*"*i)


