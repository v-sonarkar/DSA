#include <iostream>
using namespace std;
int main() {
  int m,n;
    
    cout<<"Enter no of rows of 1st matrix :"<<endl;
    cin>>m;
    cout<<"Enter no of columns of 1st matrix :"<<endl;
     cin>>n;
int a[m][n];
int i, j;

for (i = 0; i < m; i++) {
for (j = 0; j < n; j++) {
cin >> a[i][j];
}
}

for (i = 0; i < m; i++) {
for (j = 0; j < n; j++) {
cout << a[i][j]<<" "<<endl;
}
}
int p,q;
cout<<"Enter no of rows of 2nd matrix :"<<endl;
    cin>>p;
    cout<<"Enter no of columns  of 2nd matrix :"<<endl;
     cin>>q;
int b[p][q];


for (int i = 0; i < p; i++) {
for (int j = 0; j < q; j++) {
cin >> b[i][j];
}
}

for (int i = 0; i < p; i++) {
for (int j = 0; j < q; j++) {
cout << b[i][j]<<" "<<endl;
}
}
if(n==p){
int res[m][q];
for (int i = 0; i < m; i++) {
for (int j = 0; j < q; j++) {
res[i][j]=0;
for (int k = 0; k < p; k++) {

res[i][j]+=a[i][k]*b[k][j];
}}
for (int i = 0; i < m; i++) {
for (int j = 0; j < q; j++) {
cout << res[i][j]<<" "<<endl;
}
}


}
}
if(n!=p){
    cout<<"Matrix Multiplication is not possible";
}


}