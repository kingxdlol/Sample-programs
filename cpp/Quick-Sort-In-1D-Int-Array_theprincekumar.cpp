/*
Quick Sort in 1D Array
*/

#include<bits/stdc++.h>

using namespace std;

void quickSort(int a[], int low, int high)
{
    int i, j, temp, pivot;
    i = low;
    j = high;
    pivot = a[low];
    while(i < j)
    {
        while(a[i] <= pivot && i < high)
            i++;
        while(a[j] > pivot)
            j--;
        if(i < j)
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }
    a[low] = a[j];
    a[j] = pivot;
    if(low < j-1)
        quickSort(a, low, j-1);
    if(j+1 < high)
        quickSort(a, j+1, high);
}

int main()
{
    int a[10], n, i;
    cout<<"Enter the number of elements: ";
    cin>>n;
    cout<<"Enter the elements: ";
    for(i=0; i<n; i++)
        cin>>a[i];
    quickSort(a, 0, n-1);
    cout<<"Sorted array is: ";
    for(i=0; i<n; i++)
        cout<<a[i]<<" ";
    return 0;
}
