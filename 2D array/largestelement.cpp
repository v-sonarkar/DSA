#include <iostream>
#include <climits>
using namespace std;
int main() {
  int m,n;
    
    cout<<"Enter no of rows :"<<endl;
    cin>>m;
    cout<<"Enter no of columns :"<<endl;
     cin>>n;
int arr[m][n];
int i, j;

for (i = 0; i < m; i++) {
for (j = 0; j < n; j++) {
cin >> arr[i][j];
}
}
int Max = INT_MIN;
for (i = 0; i < m; i++) {
for (j = 0; j < n; j++) {
if(Max<arr[i][j]){

Max=arr[i][j];


}
cout<<Max;
}
}
}