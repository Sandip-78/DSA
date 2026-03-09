#include<iostream>
using namespace std;

class Node{
public : 
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

class List {
    Node* head;
    Node* tail;

public : 
    List(){
        head = tail = NULL;
    }

    void push_front(int val){
        Node* newNode = new Node(val);
        if(head==NULL){
            head = tail = newNode;
        }
        newNode->next = head;
        head = newNode;
    }

    void push_back(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
        } 
        tail->next = newNode;
        tail = newNode;
    }

    void pop_front(){
        if(head == NULL){
            cout<<"List is empty";
            return;
        }
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }

    void pop_back(){
        if(tail == NULL){
            cout<<"List is empty";
        }

        Node* temp = head;
        while(temp->next != tail){
            temp = temp->next;
        }
        tail->next = NULL;
        delete tail;
        tail = temp;
    }

    void print(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp = temp->next; 
        }
        cout<<"NULL";
    }
};

int main(){
    List ll;
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);
    ll.push_front(4);
    ll.push_back(5);
    ll.print();
    ll.pop_front();
    cout<<endl;
    ll.print();
    cout<<endl;
    ll.pop_back();
    ll.print();
    return 0;
}