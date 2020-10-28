//Program Objective:Check if string is palindrome or not

#include <iostream.h>
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
void main()
{
    clrscr();
    charstr[80], c;
    cout << "Enter string(max 79 characters):" << endl;
    gets(str);
    for (intlen = 0; str[len] != '\0'; len++)
        ;
    inti, j, flag = 1;
    for (i = 0, j = len - 1; i < len / 2; i++, j--)
    {
        if (str[i] != str[j])
        {
            flag = 0;
            break;
        }
    }
    if (flag)
        cout << "\nIt is a palindrome";
    else
        cout << "\nIt is not a palindrome";
    getch();
}
