#include<iostream>
#include<string>
using namespace std;
int count=1;
//logic for fibonacci series using recursion method
int toh(int n,char source='S',char auxiliary='A',char destination='D'){
if(n==1){
    cout<<"step:"<<count++<<" move disc "<< n <<" from "<<source<<" to "<<destination<<endl;
}
else{
    toh(n-1,source,destination,auxiliary);
    cout<<"step:"<<count++<<" move disc "<< n <<" from "<<source<<" to "<<destination<<endl;
    toh(n-1,auxiliary,source,destination);
}
}
int main()
{
    toh(4);

    return 0;
}
