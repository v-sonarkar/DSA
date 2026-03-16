#include <iostream>
using namespace std;
/*void reverse(int i,int j,vector<int>& v1){
    while(i<=j){
        int temp=v1[i];
        v1[i]=v1[j];
        v1[j]=temp;
        i++;
        j--;
        } return;
    }*/
   
void permutation(vector <int> &v1){
int n=v1.size();
int idx=-1;
for(int i=n-2;i>=0;i--){
if(arr[i]<arr[i+1]){
idx=i;
break;
}
}

//if array is already largest
if(idx==-1){
reverse(v1.begin(),v1.end());

return;
}
// reverse after pivot
int j=-1;
reverse(v1.begin()+idx=1;v1.end());
//swapping idx and idx+1
int temp=v1[idx];
v1[idx]=v1[idx+1];
v1[idx+1]=temp;

return;


}












int main() { 
    
return 0;
 }