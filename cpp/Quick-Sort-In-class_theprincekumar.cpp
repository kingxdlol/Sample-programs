/*
Quick Sort in class
*/

#include<bits/stdc++.h>

using namespace std;

class myclass {
    int id;
    string name;
    public:
    myclass(){
        id = 0;
        name = "";
    }
    myclass(int i, string n) {
        id = i;
        name = n;
    }

    void display() {
        cout << id << " " << name << endl;
    }
    void enter() {
        cin >> id >> name;
    }
    int getid() {
        return id;
    }
    string getname() {
        return name;
    }
};

//quick sort
int partition(myclass arr[], int low, int high) {
    myclass pivot = arr[high];
    int i = low - 1;
    for (int j = low; j <= high - 1; j++) {
        if (arr[j].getid() <= pivot.getid()) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}

void quickSort(myclass arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    int n;
    cin >> n;
    myclass arr[n];
    for (int i = 0; i < n; i++) {
        arr[i].enter();
    }
    quickSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++) {
        arr[i].display();
    }
    return 0;
}
