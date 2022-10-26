#binary exponentiation
def binexp(a, b, m):
    if b == 0:
        return 1
    if b % 2 == 0:
        return binexp((a*a) % m, b//2, m)
    else:
        return (a * binexp(a, b-1, m)) % m

#extended euclidean algorithm
def egcd(a, b):
    if a == 0:
        return (b, 0, 1)
    else:
        g, y, x = egcd(b % a, a)
        return (g, x - (b // a) * y, y)

#modular inverse
def modinv(a, m):
    g, x, y = egcd(a, m)
    if g != 1:
        raise Exception('modular inverse does not exist')
    else:
        return x % m


print(binexp(2, 3, 5))
print(modinv(3, 11))
print(egcd(3, 11))
