#include <iostream>
using namespace std;
int main(){
int a, b;
cout<<"before swapping"<<endl;
cout<<"enetr the value of a and b"<<endl;
cin>>a>>b;
//w have a three method to swaped
//1.temp

//int temp=a;
//a=b;
//b=temp;

//2.with xor method
//a=a^b;
//b=a^b;
//a=a^b;

//3.with swap

swap(a,b);//inbuild function
cout<<"after swappping"<<endl;
cout<<a<<" "<<b;

}
