#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter size of array ";
    cin>>n;
int arr[n];
for (int i=0;i<=n-1;i++){
    cin>>arr[i];
}
bool flag = false;
for(int i=0;i<n-1;i++){
for(int j=i+1;j<n;j++){
if(arr[i]==arr[j]){
flag = true;
cout<<"Duplicate element is "<< arr[i];
cout<<endl;
}
}
}
cout<<endl;
if(flag=true)
cout<<"duplicate found "<<endl;
else
cout<<" no duplicate";
return 0;
}