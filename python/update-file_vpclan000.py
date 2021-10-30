#update text file

print("This program will update a text file with a new line of text.")


def main():
    #open file
    infile = open("test.txt", "r")
    #read file
    data = infile.read()
    #close file
    infile.close()
    #print file
    print(data)
    #open file
    infile = open("test.txt", "a")
    #write new line
    infile.write("\nThis is a new line of text.")
    #close file
    infile.close()
    #open file
    infile = open("test.txt", "r")
    #read file
    data = infile.read()
    #close file
    infile.close()
    #print file
    print(data)


if __name__ == "__main__":
    main()
