#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of queue: ";
    cin>>n;
    int queue[n];
    int front=-1,rear=-1;
    int choice;
    do
    {
        cout<<"1. Insert element to queue "<<endl;
        cout<<"2. Delete element from queue "<<endl;
        cout<<"3. Display all the elements of queue "<<endl;
        cout<<"4. Exit "<<endl;
        cout<<"Enter your choice : ";
        cin>>choice;
        switch(choice)
        {
            case 1:
                int val;
                cout<<"Insert the element in queue : ";
                cin>>val;
                if(rear==n-1)
                    cout<<"Queue Overflow"<<endl;
                else if(front==-1 && rear==-1)
                    front=rear=0;
                else
                    rear++;
                queue[rear]=val;
                break;
            case 2:
                if(front==-1 || front>rear)
                    cout<<"Queue Underflow ";
                else
                {
                    cout<<"Element deleted from queue is : "<< queue[front] <<endl;
                    front++;
                }
                break;
            case 3:
                if(front==-1 || front>rear)
                    cout<<"Queue is empty";
                else
                {
                    cout<<"Queue elements are: ";
                    for(int i=front;i<=rear;i++)
                        cout<<queue[i]<<" ";
                    cout<<endl;
                }
                break;
            case 4:
                cout<<"Exit"<<endl;
                break;
            default:
                cout<<"Invalid choice"<<endl;
        }
    }while(choice!=4);
    return 0;
}
