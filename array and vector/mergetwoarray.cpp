#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int>merge(vector<int>&v1,vector<int>&v2){
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
int n=v1.size();
int m=v2.size();
vector<int>v(m+n);
int i=0;//pointer to v1
int j=0;//pointer to v2
int k=0;//pointer to v
while (i<n && j<m)
{if(v1[i]<v2[j]){
v[k]=v1[i];
i++;
k++;
}
    else{
v[k]=v2[j];
j++;
k++;}
    }
if(i==n){
while(j<m)
v[k]=v2[j];
k++;
j++;
}

if(j==m){
    while(i<n)
    v[k]=v1[i];
    k++;
    i++;
    }
return v;
}
int main() {
vector<int>v1;

vector<int>v2;


v1.push_back(1);
    v1.push_back(0);
    v1.push_back(1);
    v1.push_back(6);
    v1.push_back(8);
for(int i=0;i<v1.size();i++){
cout<<v1[i]<<endl;


}
cout<<endl;
    v2.push_back(4);
    v2.push_back(9);
    v2.push_back(10);
    v2.push_back(78);
    v2.push_back(34);
    v2.push_back(15);

    for(int i=0;i<v2.size();i++){
cout<<v2[i]<<endl;}

vector<int>v=merge(v1,v2);
for(int i=0;i<v.size();i++){
    cout<<v[i]<<endl;}
    
    return 0;
 }