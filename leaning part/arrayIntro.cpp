#include<iostream>
using namespace std;
int main(){

int a[4];//initialize the value
a[0]=4;//assign the array value
a[3]=5;
cout<<a[0]<<" "<<a[3]<<endl;//print the value

int e[10]={1,2,3,4};//initialize the value and rest of the value contain zero
for(int i=0;i<10;i++){
    cout<<e[i]<<endl;
}
int f[10];
cout<<f[0]<<" "<<f[2];//it coontain a garbage value

int b[10];
for(int i=0;i<10;i++){
b[i]=i*i;
    cout<<b[i]<<endl;
}
int c;
cout<<sizeof(c)<<endl;

int d[10]={1,2,3};
cout<<sizeof(d)<<endl;
return 0;
}

