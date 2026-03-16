
//without using extra array
#include <iostream>
#include<vector>

using namespace std;
int main(){
vector<int>v1;
v1.push_back(1);
v1.push_back(2);
v1.push_back(3);
v1.push_back(4);
v1.push_back(5);
v1.push_back(6);
v1.push_back(7);

for(int i=0;i<v1.size();i++){
cout<<v1[i]<<" ";
}
cout<<endl;
int i=0;
int j=v1.size()-1;
while(i<=j){
int temp=v1[i];
v1[i]=v1[j];
v1[j]=temp;
i++;
j--;
}
for(int i=0;i<v1.size();i++){
    cout<<v1[i]<<" ";
    }
}