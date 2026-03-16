#include <iostream>
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
int sum=0;
for (i = 0; i < m; i++) {
for (j = 0; j < n; j++) {
sum=sum+arr[i][j];
}
}
cout<<sum;
}