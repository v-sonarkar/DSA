#include <iostream>
#include<vector>
using namespace std;
void display(vector<int>& v1){
  for(int i=0;i<v1.size();i++){
cout<<v1[i]<<endl;

  }
cout<<endl;

}
void reverse(int i,int j,vector<int>& v1){
while(i<=j){
    int temp=v1[i];
    v1[i]=v1[j];
    v1[j]=temp;
    i++;
    j--;
    }}
    void    partreverse(int i,int j,vector<int>& v1){
        while(i<=j){
            int temp=v1[i];
            v1[i]=v1[j];
            v1[j]=temp;
            i++;
            j--;
            }}
int main(){
    vector<int>v1;
v1.push_back(1);
v1.push_back(2);
v1.push_back(3);
v1.push_back(4);
v1.push_back(5);
v1.push_back(6);
v1.push_back(7);
display(v1);
reverse(0,v1.size()-1,v1);
display(v1);
partreverse(0,4,v1);
display(v1);

}