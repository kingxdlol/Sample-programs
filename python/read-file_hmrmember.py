# A program that read txt file and print the txt file contents


def main():
    file_name = input("Enter file name: ")
    try:
        with open(file_name) as file_object:
            contents = file_object.read()
            print(contents)
    except FileNotFoundError:
        print("File not found")


if __name__ == '__main__':
    main()
