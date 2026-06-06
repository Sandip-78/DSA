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

class List{
public : 
    Node* head;
    Node* tail;

    List(){
        head = tail = NULL;
    }

    void push_front(int val){
        if(head == NULL){
            head = tail = new Node(val);
        }else{
            Node* newNode = new Node(val);
            newNode->next = head;
            head = newNode;
        }
    }

    void push_back(int val){
        if(head == NULL){
            head = tail = new Node(val); 
        }else{
            Node* newNode = new Node(val);
            tail->next = newNode;
            tail = newNode;
        }
    }


    void insert(int val,int pos){
        if(pos < 0){
            cout<<"Not Possible";
        }else if(pos == 0){
            push_front(val);
            return;
        }else{
            Node* newNode = new Node(val);
            Node* temp = head;

            for(int i=0;i<pos-1 &&  temp!=NULL;i++){
                temp = temp->next;
            }
            newNode->next = temp->next;
            temp->next = newNode;
        }
    }

    void pop_front(){
        if(head == NULL){
            cout<<"List is empty";
            return;
        }else{
            Node* temp = head;
            head = head->next;
            temp->next = NULL;
            delete temp;
        }
    }

    void pop_back(){
        if(head == NULL){
            cout<<"List is empty";
        }
        if(head == tail){
            delete head;
            head = tail = NULL;
            return;
        }else{
            Node* temp = head;
            while(temp->next != tail){
                temp = temp->next;
            }
            temp->next = NULL;
            delete tail;
            tail = temp;
        }
    }

    int search(int key){
        Node* temp = head;
        int idx = 0;

        while(temp !=NULL){
        if(temp->data == key){
            return idx;
        }
        temp = temp->next;
        idx++;
        }

        return -1;
        
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
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.print();
    cout<<endl;
    ll.insert(4,1);
    ll.print();
    cout<<endl;
    cout<<ll.search(2);  
    return 0;
}