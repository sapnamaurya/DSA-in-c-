#include<iostream>
#include<climits>
using namespace std;
int main(){
int n;
cout<<"entere the number of elemnt:"<<endl;
cin>>n;

int a[n];
//input
cout<<"enter the array value:"<<endl;
for(int i=0;i<n;i++){
    cin>>a[i];
}
//printing
cout<<"printing the aaray value:"<<endl;
for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
}
cout<<endl;
//int largest=a[0];
int smallest=a[0];
int largest=INT_MIN;
//INT_MIN - infinity
//INT_MAX + infinity
for(int i=1;i<n;i++){
if(a[i]>largest){
    largest=a[i];
}
if(a[i]<smallest){
    smallest=a[i];
}
}
cout<<"largest value:"<<largest<<endl;
cout<<"smallest value:"<<smallest;
}
