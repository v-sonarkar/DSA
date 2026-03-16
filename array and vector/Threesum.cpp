#include <iostream>
#include <vector>
using namespace std;

int main() {
    int x;
    cout << "Enter number: ";
    cin >> x;

    vector<int> v;
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    cout << "Enter elements of array: ";
    for (int i = 0; i < n; i++) {
        int q;
        cin >> q;
        v.push_back(q);
    }

    bool found = false;
    for (int i = 0; i < v.size() - 2; i++) {
        for (int j = i + 1; j < v.size() - 1; j++) {
            for (int k = j + 1; k < v.size(); k++) {
                if (v[i] + v[j] + v[k] == x) {
                    found = true;
                    cout << "Indexes are: ";
                    cout << "(" << i << "," << j << "," << k << ")" << endl;
                    cout << "Three sum elements are: ";
                    cout << "(" << v[i] << "," << v[j] << "," << v[k] << ")" << endl;
                }
            }
        }
    }

    if (!found) {
        cout << "No triplet found with sum " << x << endl;
    }

    return 0;
}
