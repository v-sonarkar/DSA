#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void display(vector<int>& v1) {
    for (int i = 0; i < v1.size(); i++) {
        cout << v1[i] << " ";
    }
    cout << endl;
}

void sortNegPos(int i, int j, vector<int>& v1) {
    while (i < j) {
        // Move i to the right while it's negative
        while (v1[i] < 0 && i < j) i++;

        // Move j to the left while it's positive or zero
        while (v1[j] >= 0 && i < j) j--;

        // Swap only when i < j
        if (i < j) {
            swap(v1[i], v1[j]);
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
    v1.push_back(1);
    v1.push_back(-4);
    v1.push_back(1);
    v1.push_back(-3);
    v1.push_back(-5);
    v1.push_back(0);
    v1.push_back(-9);

    sortNegPos(0, v1.size() - 1, v1);
    display(v1);
    cout << "After sorting negative numbers to the left and positive numbers to the right:" << endl;
    sort(v1.begin(),v1.end());

    display(v1);
    
    return 0;}