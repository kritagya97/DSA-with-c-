#include<iostream>
using namespace std;

class circular_Queue{

private:
    static const int max=5;
    int Queue[max];
    int rear=-1,front=-1;
    int size=0;

public:

    //circular enqueue operation
    void enqueue(int data){
        if((rear+1)%max==front){
            cout<<"Queue is full"<<endl;
        }
       else {
            rear = (rear + 1) % max;
            Queue[rear] = data;
            if (front == -1) {
                front = 0;
            }
            size++;
            cout << "enqueue: " << Queue[rear] << endl;
        }
    }


    //dequeue operation in circular queueue

    int dequeue(){
        if (size==0){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        else{
            int data=Queue[front];
            front=(front+1)%max;
            size=size-1;
            cout << "dequeue: " << data << endl;

            return data;
        }

    }

};

int main(){
circular_Queue cq;
cq.enqueue(23);
cq.enqueue(23);
cq.enqueue(23);
cq.enqueue(23);
cq.enqueue(23);
cq.enqueue(23);
cq.enqueue(23);
cq.enqueue(23);
cq.dequeue();
cq.dequeue();
cq.dequeue();
cq.dequeue();
cq.dequeue();
cq.dequeue();
return 0;
}
