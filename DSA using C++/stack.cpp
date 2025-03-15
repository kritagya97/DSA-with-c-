#include <iostream>
using namespace std;
class stack{
  public:
    // static const int max=5;
   static const int max=5;
    int top=0;
    int arr[max];
    
int push(int a){
        if(top>=max){
            cout<<"stack is full"<<endl;
            return -1;
        }
        else{
             arr[top++]=a;
            cout<<"success"<<endl;
           
            return 0;
            
        }
   }

int pop(){
    if(top>0){
    cout<<arr[--top]<<endl;
    return 0;
    }
    else{
        cout<<"stack is empty"<<endl;
        return -1;
    }
}
};

int main() {
   stack a;
    a.push(1);
    a.push(2);

    a.push(3);
    a.push(4);
    a.push(5);//no.5 element in stack
    a.push(6);
    a.push(5);
    a.push(5);
    a.pop();
    a.pop();
    a.pop();
     a.pop();
    a.pop();//no error till then
    a.pop();
     a.pop();
    a.pop();
    a.pop();
    return 0;
}