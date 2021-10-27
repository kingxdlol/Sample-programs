/*
Quick Sort in Array of structure
*/

#include<bits/stdc++.h>

using namespace std;

struct node
{
    int data;
    string name;
};

int Partition(node arr[], int low, int high)
{
    int pivot = arr[high].data;
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++)
    {
        if (arr[j].data <= pivot)
        {
            i++;
            swap(arr[i].data, arr[j].data);
            swap(arr[i].name, arr[j].name);
        }
    }
    swap(arr[i + 1].data, arr[high].data);
    swap(arr[i + 1].name, arr[high].name);
    return (i + 1);
}

void QuickSort(node arr[], int low, int high)
{
    if(low < high)
    {
        int pi = Partition(arr, low, high);
        QuickSort(arr, low, pi-1);
        QuickSort(arr, pi+1, high);
    }
}

int main(){
    int n;
    cin>>n;
    node arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i].data;
        cin>>arr[i].name;
    }
    QuickSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i].data<<" "<<arr[i].name<<endl;
    }
    return 0;
}
