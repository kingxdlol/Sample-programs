#check whether the year is leap or not

print("Enter the year:")
year = int(input())
if year % 4 == 0:
    if year % 100 == 0:
        if year % 400 == 0:
            print("{0} is a leap year".format(year))
        else:
            print("{0} is not a leap year".format(year))
    else:
        print("{0} is a leap year".format(year))
else:
    print("{0} is not a leap year".format(year))
