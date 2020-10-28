//Program Objective:Reverse a number

#include <iostream.h>
#include <conio.h>

void main()
{
    clrscr();
    intr, n, s = 0;
    cout << "\n enter a no:";
    cin >> n;
    while (n != 0)
    {
        r = n % 10;
        s = (s * 10) + r;
        n = n / 10;
    }
    cout << "\n reverse of the no: is=" << s;
    getch();
}
