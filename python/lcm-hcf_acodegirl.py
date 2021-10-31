#find lcm and hcf of two numbers

print("This program finds the LCM and HCF of two numbers")
n1 = int(input("Enter first number: "))
n2 = int(input("Enter second number: "))


def lcm(n1, n2):
    if n1 > n2:
        n1, n2 = n2, n1
    for i in range(n1, n1*n2+1, n1):
        if i % n2 == 0:
            return i
        
def hcf(n1, n2):
    if n1 > n2:
        n1, n2 = n2, n1
    for i in range(n1, 0, -1):
        if n1 % i == 0 and n2 % i == 0:
            return i


print("The LCM of", n1, "and", n2, "is", lcm(n1, n2))
print("The HCF of", n1, "and", n2, "is", hcf(n1, n2))
