#include<iostream>
using namespace std;

int main(){
int num;
cout<<"Enter the number of element=";
cin>>num;
cout<<endl;
 int arr[num];
 ///input
 cout<<"enter the array values = ";
 for(int i=0;i<num;i++){
    cin>>arr[i];
 }
 cout<<endl;
 ///printing
 cout<<"original aaray=";
 for(int i=0;i<num;i++){
    cout<<arr[i]<<" ";
 }
 cout<<endl;
 int start=0;
 int end=num-1;
 while(start<=end){
        swap(arr[start],arr[end]);
    start++;
    end--;
 }
 cout<<"reverse=";
 for(int i=0;i<num;i++){
    cout<<arr[i]<<" ";
 }
}
