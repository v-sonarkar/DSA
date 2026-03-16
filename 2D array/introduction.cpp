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

for (i = 0; i < m; i++) {
for (j = 0; j < n; j++) {
cout << arr[i][j]<<" "<<endl;
}
}
}