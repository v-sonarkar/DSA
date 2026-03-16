#include <iostream>
using namespace std;
#include<vector>
int main() {
vector<int>v;
// array of size 5 and each element equal to zero
for(int i=0;i<5;i++){
int x;
cin>>x;
v.push_back(x);
}

for(int i=0;i<5;i++){

    cout<<v[i]<<" ";
}
cout<<v.size();
cout<<endl;
cout<<v.capacity();
cout<<endl;
vector<int>vr(5,7);// size is 5 and each element is 7
cout<<vr[0];
    return 0;
 }