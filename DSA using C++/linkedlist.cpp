#include <iostream>
using namespace std;

class Node {
public:
    int data;  // Declare data with type
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

class List {

    Node* head;
    Node* tail;
    public:
    List() {
        head = nullptr;
        tail = nullptr;
    }

    void pushfront(int value) {
        Node* newNode = new Node(value);
        if (head == nullptr) {
            head = newNode;
            tail = newNode;
        } else {
            newNode->next = head;
            head = newNode;
        }
    }

    void pushback(int value){
        Node* newNode= new Node(value);
        if (head==nullptr){
            head=newNode;
            tail=newNode;
        }
        else{
            tail->next=newNode;
            tail=newNode;
        }
    }

    void popfront(){
        if(head==nullptr){
            cout<<"list is empty\n";
        }
        else{
           Node *temp=head;
           head=head->next;
           temp->next=nullptr;
           delete temp;
        }
    }

    void popback(){
        if(head==nullptr){
            cout<<"list is empty";
        }
        Node* temp=head;
        while(temp->next !=tail){
            temp=temp->next;
        }
        temp->next=nullptr;
        delete tail;
        tail=temp;
    }
    
    void display() {  // Added function to display the list
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main() {
    List l;
    l.pushfront(5);
    l.pushfront(10);
    l.pushfront(15);
    l.pushback(20);
    l.display();  // Display the list to verify functionality
    l.popfront();
    l.display();
    l.popback();
    l.display();
    return 0;
}
