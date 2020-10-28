//Program Objective: Subtraction of two Matrices

#include <iostream.h>
#include <conio.h>
#include <process.h>
#include <dos.h>
void main()
{
    clrscr();
    int a[10][10], b[10][10], c[10][10];
    inti, j, m, n, p, q;
    cout << "Input row and column of matrix-a\n";
    cin >> m >> n;
    cout << "\nInput row and column of matrix-b\n";
    cin >> p >> q;
    if ((m == p) && (n == q))
        cout << "Matrices can be subtracted\n";
    else
    {
        cout << "Matrices cannot be subtracted\n";
        delay(500);
        exit(0);
    }
    cout << "\nInput matrix-a\n";
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
            cin >> a[i][j];
    }
    cout << "\nMatrix-a:";
    for (i = 0; i < m; i++)
    {
        cout << endl;
        for (j = 0; j < n; j++)
            cout << "  " << a[i][j];
    }
    cout << "\nInput matrix-b\n";
    for (i = 0; i < p; i++)
    {
        for (j = 0; j < q; j++)
            cin >> b[i][j];
    }
    cout << "\nMatrix-b:";
    for (i = 0; i < p; i++)
    {
        cout << endl;
        for (j = 0; j < q; j++)
            cout << "  " << b[i][j];
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
            c[i][j] = a[i][j] - b[i][j];
    }
    cout << "The difference of two matrices is:\n";
    for (i = 0; i < m; i++)
    {
        cout << endl;
        for (j = 0; j < n; j++)
            cout << "  " << c[i][j];
    }
    getch();
}
