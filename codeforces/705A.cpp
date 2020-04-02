#include <iostream>
using namespace std;

int main() {
    int n;
    string s = "I hate ";
    cin >> n;
    for (int i = 2; i <= n; ++i) {
        s += "that ";
        if (i % 2 == 0)
            s += "I love ";
        else
            s += "I hate ";        
    }
    s += "it";
    cout << s << endl;
    return 0;
}
