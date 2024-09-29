#include<iostream>
#include<climits>///for INT_Max,INT_MIN
using namespace std;

int main(){
int num;
cout<<"enter the number of elemnt =:";
cin>>num;
cout<<endl;
 int arr[num];
 cout<<"enter the array value:=";
 for(int i=0;i<num;i++){
    cin>>arr[i];
 }
 cout<<endl;
int largest=INT_MIN;
int smallest=INT_MAX;

for(int i=0;i<num;i++){
    if(arr[i]>largest){
        largest=arr[i];
    }
    if(arr[i]<smallest){
        smallest=arr[i];
    }

}
cout<<"largest number :-"<<largest<<endl;
cout<<"smallest number :-"<<smallest;
cout<<endl;
}
