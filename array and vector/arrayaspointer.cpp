#include <iostream>
using namespace std;
//i[arr] or i[ptr]
int main() {
    int arr[]={1,2,3,4,5};
    int *ptr=arr;

    cout<<ptr<<endl;
    cout<<&arr[0];
    for(int i=0;i<5;i++){
cout<<ptr[i]<<endl;

    }
    cout<<endl;
    ptr[0]=4;
    //*ptr=8
    //ptr++
   // *ptr=9
    for(int i=0;i<5;i++){
        cout<<ptr[i]<<endl;
        
            }
            cout<<endl;
            for(int i=0;i<5;i++){
                cout<<*ptr<<endl;
                ptr++;}
 //since there is no meaning of above declaration and pointer point towards last element of array 
// Therefore we declare ptr=arr at last and after that we make updation in array
                ptr =arr;
                *ptr =0;
                ptr++;
                *ptr=78;
                ptr--;
                *ptr=90;
cout<<endl;
    return 0;for(int i=0;i<5;i++){
                cout<<*ptr<<endl;
                ptr++;}
 }