#include<iostream>
using namespace std;

int main(){

int arr[]={2,4,5,8,1,2,8,9};



int max1=arr[0],n=8,k=5;///asume that aaray first index is max ;
for(int i=1;i<n;i++){
    if(max1<arr[i]){///if value of max1 is greater than arr[i]
        max1=arr[i];///upadte the max1 value
    }

}
int temp[max1+1]={0};///made a temparory array in which store the max1 value whuch is greater than 1+ size  and {0} every value which is available in temp aray assign a zero
for(int i=0;i<n;i++){
    temp[arr[i]];///temp a[i]++ is increse the index

}
for(int i=0;i<=max1;i++){///iterate temp array
  if(temp[i]>0){///when the value of temp is greater than zero
    k=k-temp[i];///then minus store temp value from k
    if(k<=0){///whn we minus the k value if it is negative or zero
      cout<<"smallest e;lemnt"<<i;
      break ; ///ater that we give a ans
   }} }
   return 0;
}
