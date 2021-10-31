#check whether the number is prime or not


def is_prime(n):
    if n == 1:
        return False
    for x in range(2, n):
        if n % x == 0:
            return False
    else:
        return True


def main():
    n = int(input("Enter a number: "))
    if is_prime(n):
        print("{} is a prime number".format(n))
    else:
        print("{} is not a prime number".format(n))


if __name__ == '__main__':
    main()
