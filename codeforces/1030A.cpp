#include <iostream>
using namespace std;

int main() {
    int n, j;
    bool k = false;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> j;
        if (j == 1) {
            k = true;
            break;
        }
    }
    if (k)
        cout << "HARD" << endl;
    else
        cout << "EASY" << endl;   
    return 0;
}
