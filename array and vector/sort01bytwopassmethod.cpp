#include <iostream>
#include <vector>
using namespace std;

void display(vector<int>& v1) {
    for (int i = 0; i < v1.size(); i++) {
        cout << v1[i] << endl;
    }
    cout << endl;
}

void sort01(vector<int>& v1) {
    int noz = 0;
    int noo = 0;

    for (int i = 0; i < v1.size(); i++) {
        if (v1[i] == 0)
            noz++;
        else
            noo++;
    }

    for (int i = 0; i < v1.size(); i++) {
        if (i < noz)
            v1[i] = 0;
        else
            v1[i] = 1;
    }
}

int main() {
    vector<int> v1;

    v1.push_back(1);
    v1.push_back(0);
    v1.push_back(1);
    v1.push_back(0);
    v1.push_back(0);
    v1.push_back(1);
    v1.push_back(1);
    v1.push_back(1);
    v1.push_back(0);
    v1.push_back(1);
    v1.push_back(0);
    v1.push_back(0);
    v1.push_back(0);
    v1.push_back(0);

    sort01(v1);
    display(v1);
}










