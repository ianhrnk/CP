#include <iostream>
using namespace std;

int main() {
    int n, bills = 0, temp;
    cin >> n;
    bills = n / 100;
    temp = n % 100;
    bills += temp / 20;
    temp = n % 20;
    bills += temp / 10;
    temp = n % 10;
    bills += temp / 5;
    temp = n % 5;
    bills += temp;
    cout << bills << endl;
    return 0;
}
