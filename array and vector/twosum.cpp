#include <iostream>
#include<vector>
using namespace std;
int main() {
int x;
cout<<"enter number : ";
cin>>x;
vector<int>v;
int n;
cout<<"Enter size of array : ";
cin>>n;
cout<<"Enter element of array : ";
for(int i=0;i<n;i++){

int q;
cin>>q;
v.push_back(q);
}
for(int i=0;i<v.size()-1;i++){
    for(int j=i+1;j<v.size();j++){
if(v[i]+v[j]==x){
cout<<"Indixes are " <<endl;
cout<<"("<<i<<","<<j<<")"<<endl;
cout<<"Two sum elements are " <<endl;
cout<<"("<<v[i]<<","<<v[j]<<")"<<endl;
}
    }}
    return 0;
 }