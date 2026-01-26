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
    Node* head;
    Node* tail;

public :
    List(){
        head=tail=NULL;
    }

    void push_front(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
            return;
        }else{
            newNode->next = head;
            head = newNode;
        }
    }

    void push_back(int val){
        Node* newNode = new Node(val);
        
        // Node* temp = head;
        // if(head == NULL){
        //     head = newNode;
        // }
        // while(temp->next!= NULL){
        //     temp = temp->next;
        // }
        // temp->next = newNode;
        // newNode->next = NULL;

        if(head==NULL){
            head=tail=newNode;
        }else{
            tail->next=newNode;
            tail=newNode;
        }
    }

    void pop_front(){
        if(head == NULL){
            cout<<"LL is empty";
            return ;
        }else{
            Node* temp = head;
            head = head->next;
            temp->next=NULL;
            delete temp;
        }
    }

    void insert(int val,int pos){
        if(pos < 0){
            cout<<"Invalid Pos\n";
            return;
        }
        else if(pos == 0){
            push_front(val);
            return;
        }
        else{
            Node* newNode = new Node(val);
            Node* temp = head;
            for(int i=0;i<pos-1;i++){
                temp = temp->next;
            }

            newNode->next = temp->next;
            temp->next = newNode;
        }
        
    }

    void print(){
        Node* temp = head;
        while(temp != NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
    }
};

int main(){

    List ll;
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.print();
    cout<<endl;

    
    return 0;
}