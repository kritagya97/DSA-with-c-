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
    //insert data into specified position
     void insert(int value,int position){
        if(position<0){
            cout<<"invalid position\n";
        }
        if(position==0){
            pushfront(value);
        }
        Node* temp= head;
        for(int i=0;i<position-1;i++){
            if(temp==nullptr){
                cout<<"invalid position\n";
            }
            temp=temp->next;
        }
        Node* newNode=new Node(value);
        newNode->next=temp->next;
        temp->next=newNode;
    }

//remove data from specified location
     void remove(int position){
        if(position<0){
            cout<<"invalid position\n";
        }
        if(head==nullptr){
            cout<<"list is empty"<<endl;
        }
        if(position==0){
            popfront();
        }
        Node* temp = head;
        for (int i = 0; i < position - 1 && temp->next != nullptr; i++) {
            temp = temp->next;
        }
        if (temp->next == nullptr) {
            cout << "index too high. try lower index  \n";
           
        }
        Node* nodeToDelete = temp->next;
        temp->next = temp->next->next;
        if (nodeToDelete == tail) { // If last node is deleted, update tail
            tail = temp;
        }
        delete nodeToDelete;
       
       
    }

    //searching data
     int search(int key){
        int index=0;
        Node* temp =head;
        while(temp!=nullptr){
            if(temp->data==key){
                return index;
            }
            temp=temp->next;
            index++;
        }
        return -1;
    }
        //search display pannel.
     void listsearch(int key){
        int result=search(key);
        if(result == -1){
            cout<<"Search data not found in list"<<endl;
        }
        else{
            cout<<"Search data Found at index "<<result<<endl;
        }
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
    
    l.display();
    // Display the list to verify functionality
    l.popfront();
    l.display();

    l.insert(30,1);
    l.display();
    
    l.popback();
    l.display();
    l.listsearch(5);
    
    l.remove(2);
    l.display();

    l.insert(12,2);
    l.display();
    return 0;
}
