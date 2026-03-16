#include <iostream>
using namespace std;

int main() {
    int arr1[3][3] = {1, 0, 0, 0, 1, 0, 0, 0, 1};
    int arr2[3][3] = {1, 0, 0, 0, 1, 0, 0, 0, 1};

    int res[3][3];

    // Adding arr1 and arr2
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            res[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    // Printing result matrix
    cout << "Resultant Matrix:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}