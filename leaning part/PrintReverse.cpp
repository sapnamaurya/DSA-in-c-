#include <iostream>
using namespace std;

int main(){
int n;
cout<<"enter the number of element:";
cin>>n;
cout<<endl;
int a[n];
cout<<"enter the array value:";
for(int i=0;i<n;i++){
    cin>>a[i];
}
cout<<endl;
//normal print left to rigght
cout<<"left to right= ";
for(int i=0;i<n;i++){
    cout<<a[i];
}
cout<<endl;
//reverse order right to left
cout<<"right to left = ";
for (int i=n-1;i>=0;i--){
    cout<<a[i];
}
return 0;

}
