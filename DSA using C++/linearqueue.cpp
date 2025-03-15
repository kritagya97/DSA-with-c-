#include<iostream>
using namespace std;

class Linear_Queue{
private:

    static const int max=5;
    int Queue[max];
    int rear=-1,front=0;
public:

    //enqueue operation
    void  enqueue(int data){
        if(rear>=max-1){
            cout<<"Queue is full"<<endl;

        }
        else{
            rear=rear+1;
            Queue[rear]=data;
            cout<<"enqueue :"<<Queue[rear]<<endl;

        }

    }

    //dequeue operation
    int dequeue(){
        if (front>rear){
            cout<<"Queue is empty"<<endl;
            return front-1;
        }
        else{

            int data=Queue[front];
            front= ++front;
            cout<<"dequeue : "<<data<<endl;
            return data;
        }

    }

};
int main(){
    Linear_Queue lq;
    lq.enqueue(23);
    lq.enqueue(23);
    lq.enqueue(23);
    lq.enqueue(23);
    lq.enqueue(23);
    lq.enqueue(23);
    lq.dequeue();
    lq.dequeue();
    lq.dequeue();
    lq.dequeue();
    lq.dequeue();
    lq.dequeue();


return 0;
}
