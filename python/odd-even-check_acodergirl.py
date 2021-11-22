#check whether the number is odd or even


def is_odd(number):
    if number % 2 == 0:
        return False
    else:
        return True


def main():
    number = int(input("Enter a number: "))
    if is_odd(number):
        print("The number is odd")
    else:
        print("The number is even")


if __name__ == '__main__':
    main()
