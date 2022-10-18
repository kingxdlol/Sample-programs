#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
};

class Queue{
    Node* front;
    Node* rear;
    public:
    Queue(){
        front = NULL;
        rear = NULL;
    }
    void enqueue(int x);
    int dequeue();
    void display();
};

void Queue::enqueue(int x){
    Node* temp = new Node();
    temp->data = x;
    temp->next = NULL;
    if(front == NULL && rear == NULL){
        front = rear = temp;
        return;
    }
    rear->next = temp;
    rear = temp;
}

int Queue::dequeue(){
    Node* temp = front;
    if(front == NULL){
        cout<<"Queue is empty"<<endl;
        return -1;
    }
    if(front == rear){
        front = rear = NULL;
    }
    else{
        front = front->next;
    }
    int x = temp->data;
    delete temp;
    return x;
}

void Queue::display(){
    Node* temp = front;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main() {
    Queue q;
    q.enqueue(2);
    q.enqueue(4);
    q.enqueue(6);
    q.display();
    cout<<q.dequeue()<<endl;
    q.display();
    return 0;
}

