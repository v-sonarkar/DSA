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

int x;
cout<<"enter the elerment ";
cin>>x;
bool flag =false;

for (int i=0;i<=n-1;i++){
if(arr[i]==x)
flag=true;

}
if (flag==true)
cout<<"element found";
else
cout<<"element not found";
    return 0;
 }