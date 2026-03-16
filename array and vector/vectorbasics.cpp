#include <iostream>
#include<vector>
using namespace std;
int main() {
vector<int>v;


v.push_back(1);
cout<<v.size()<<endl;
cout<<v.capacity()<<endl;

v.push_back(10);
cout<<v.size()<<endl;
cout<<v.capacity()<<endl;

v.push_back(100);
cout<<v.size()<<endl;
cout<<v.capacity()<<endl;
v.push_back(1000);
cout<<v.size()<<endl;
cout<<v.capacity()<<endl;
cout<<v[0]<<endl;
cout<<v[1]<<endl;
cout<<v[2]<<endl;
cout<<v[3]<<endl;

cout<<endl;
//if you want to update
v[0]=90;
for(int i=0;i<v.size();i++){
cout<<v[i]<<endl;
}
cout<<endl;
v.pop_back();
v.pop_back();
for(int i=0;i<v.size();i++){
    cout<<v[i]<<endl;
    }
    return 0;
 }