#include <iostream>
#include <vector>
using namespace std;
class Solution{
public:
    void rotate(vector<int> & arr){
    int i=0;
    int n=arr.size();
    int prev=arr[arr.size()-1];
    while(i<arr.size()){
        int next=arr[i];
        arr[i]=prev;
        prev=next;
        i++;
    }
    }
};
int main(){
Solution sol;
vector<int> arr={1,3,5,2,7};
sol.rotate(arr);
for(int i=0;i<arr.size();i++){
    cout<<arr[i];
}

}
