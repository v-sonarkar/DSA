#include <iostream>
using namespace std;

int main() {
 int n;
    cout<<"enter size of array  ";
    cin>>n;
    int arr[n];
    for (int i=0;i<=n-1;i++){
        cin>>arr[i];
    }

int min=arr[0];
for (int i=1;i<=n-1;i++){
if(min>arr[i])

min=arr[i];
}
cout<<min<<endl ;

int smin=arr[0];
for (int i=1;i<=n-1;i++){
    if(smin>arr[i] && arr[i]!=min)
    
    smin=arr[i];
    }
    cout<<smin ;


    return 0;
 }