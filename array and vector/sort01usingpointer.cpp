
#include <iostream>
#include <vector>
using namespace std;

void display(vector<int>& v1) {
    for (int i = 0; i < v1.size(); i++) {
        cout << v1[i] << endl;
    }
    cout << endl;
}

void sort01(int i, int j, vector<int>& v1) {
    while (i < j) {
        if (v1[i] == 0) {
            i++;
        } else if (v1[j] == 1) {
            j--;
        } if(v1[i]==1 && v1[j]==0){
            v1[i]=0;
            v1[j]=1;
            i++;
            j--;
        }
    }
}

int main() {
    vector<int> v1 ;
    v1.push_back(1);
v1.push_back(0);
v1.push_back(1);
v1.push_back(0);
v1.push_back(0);
v1.push_back(1);
v1.push_back(1);
    sort01(0, v1.size() - 1, v1);
    display(v1);
}