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
vector<int>v2(v1.size());
for(int i=0;i<v1.size();i++){
int j=v1.size()-i-1;

v2[i]=v1[j];

}

for(int i=0;i<v2.size();i++){
    cout<<v2[i]<<" ";
    }
}