//Program Objective:Reverse a string

#include <iostream.h>
#include <conio.h>
#include <stdio.h>
#include <string.h>
void main()
{
    clrscr();
    intl, i, k = 0;
    charstr[80], word[80];
    cout << "Enter any string(max 80 characters)" << endl;
    gets(str);
    strcat(str, " ");
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ')
        {
            word[k] = str[i];
            k = k + 1;
        }
        else
        {
            while (k > 0)
            {
                cout << word[--k];
            }
            cout << str[i];
        }
    }
    getch();
}
