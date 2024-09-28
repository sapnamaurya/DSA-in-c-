
#include<iostream>
using namespace std;
int main(){
    cout<<"enter the number of element:";
int n;
//enter the number of element

cin>>n;

int a[n];
//input
cout<<"enter the aaray value: ";
for(int i=0;i<n;i++){

    cin>>a[i];
}
cout<<"printing value:"<<endl;
for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
}
cout<<endl;
int sum=0;
for(int i=0;i<n;i++){
  sum+=a[i];

}
cout<<"sum is:"<<sum;
}
