#include<iostream>
using  namespace std;
int fibbo(int n){
    if(n==1 or n==2){
        return 1;
    }
    else{
    
        return fibbo(n-1) + fibbo(n-2);
    }
}
int main(){
 int num;
    cout<<"enter number "<<endl;
    cin>>num;
    cout<<fibbo(num);
return 0;
}
