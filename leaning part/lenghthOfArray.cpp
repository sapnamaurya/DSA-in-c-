
#include<iostream>
using namespace std;

int length(char input[]){
int count=0;
for(int i=0;input[i]!='\0';i++){
    count++;
}
return count;
}

int main(){
char name[100];
cout<<"enter the name = ";
cin>>name;//it doesnot take the vlue after the space tab and /n
// cin.getline(name,100);//its take the value after the space tab and /n
//cin.getline(name,100,'o');
cout<<"name= "<<name<<endl;
cout<<"lenght of name"<<length(name);
return 0;
}
