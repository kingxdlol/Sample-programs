#check wheather the input is a palindrome or not without using reverse function

print("Enter a string: ")
string = input()


def palindrome(string):
    if len(string) == 1:
        return True
    elif string[0] == string[-1]:
        return palindrome(string[1:-1])
    else:
        return False

if palindrome(string):
    print("The string is a palindrome")
else:
    print("The string is not a palindrome")

