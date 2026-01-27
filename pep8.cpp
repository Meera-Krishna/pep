//to print hollow triangle
#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cin >> rows >> cols;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= cols; j++) {
            if (i == 1 || i == rows || j == 1 || j == cols)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
    cin.get();
    cin.get();
    return 0;
}
