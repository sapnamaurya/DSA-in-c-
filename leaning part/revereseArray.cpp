#include <iostream>
using namespace std;

int main(){
    //number of element declare
int n;
cout<<"enetr the number of element = ";
cin>>n;
cout<<endl;
int a[n];
//enter the array value
cout<<"enter the aaray value : ";
for(int i=0;i<n;i++){
    cin>>a[i];
}
cout<<endl;
int start=0;
int ended=n-1;
    while(start<=ended){
             swap(a[start],a[ended]);
    start++;
    ended--;

    }

cout<<"after  reverse";
for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
}

}
