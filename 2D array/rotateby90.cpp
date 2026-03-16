#include <iostream>
using namespace std;
int main() {
  int m;
    
    cout<<"Enter no of rows/columns :"<<endl;
    cin>>m;
    
int arr[m][m];


for (int i = 0; i < m; i++) {
for  (int j = 0; j < m; j++) {
cin >> arr[i][j];
}
}

for (int i = 0; i < m; i++) {
for (int j = 0; j < m; j++) {
cout << arr[i][j]<<" "<<endl;
}
}

for (int i = 0; i < m; i++) {
for (int j = i+1; j < m; j++) {
int temp=arr[i][j];
arr[i][j]=arr[j][i];
arr[j][i]=temp; 
}}

//traversing each row
for(int k=0;k<m;k++){
    int i=0;
int j=m-1;
while(i<=j){


int temp=arr[k][i];
arr[k][i]=arr[k][j];
arr[k][j]=temp;
i++;
j--;
}

for (int i = 0; i < m; i++) {
for (int j = 0; j < m; j++) {
cout << arr[i][j]<<" "<<endl;
}
}
}
}