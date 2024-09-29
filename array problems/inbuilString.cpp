#include<iostream>
#include <cstring>

using namespace std;
int main(){
    ///length
   // char input[100];
   //cout<<"enter the name = ";
   // cin>>input;
    //int len=strlen(input);///inbuilt function
    //cout<<"length:="<<" "<<len;
///compare two string
//char str1[100];
//char str2[100];
//cout<<"enter the first name"<<endl;
//cin>>str1;
//cout<<"enter the second name"<<endl;
//cin>>str2;
 //if(strcmp(str1,str2)==0){
 //   cout<<"strings are equal";
// }
// else{
 //   cout<<"strings are not equal";
 //}
///copy the string
//char str1[100];
//char str2[100];
//cout<<"enter the first name"<<endl;
//cin>>str1;
//cout<<"enter the second name"<<endl;
//cin>>str2;
//before copy
//cout<<"first name=="<<str1<<endl;
//cout<<"second name=="<<str2<<endl;
//after copy
//strcpy(str1,str2);
//cout<<"first name=="<<str1<<endl;
//cout<<"second name=="<<str2<<endl;
///catatination
//char str1[100];
//char str2[100];
//cout<<"enter the first name"<<endl;
//cin>>str1;
//cout<<"enter the second name"<<endl;
//cin>>str2;
//before catenation
//cout<<"first name=="<<str1<<endl;
//cout<<"second name=="<<str2<<endl;
//after catenation
//strcat(str1,str2);
//cout<<"first name=="<<str1<<endl;
//cout<<"second name=="<<str2<<endl;
///copy the given items character

char str1[100];
char str2[100];
cout<<"enter the first name"<<endl;
cin>>str1;
cout<<"enter the second name"<<endl;
cin>>str2;
//before copy
cout<<"first name=="<<str1<<endl;
cout<<"second name=="<<str2<<endl;
//after copy
strncpy(str1,str2,4);
cout<<"first name=="<<str1<<endl;
cout<<"second name=="<<str2<<endl;
return 0;
}
