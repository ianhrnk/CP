#include <iostream>
using namespace std;

int main() {
    int n, total_faces = 0;
    string s;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> s;
        if (s == "Tetrahedron")
            total_faces += 4;
        else if (s == "Cube")
            total_faces += 6;
        else if (s == "Octahedron")
            total_faces += 8;
        else if (s == "Dodecahedron")
            total_faces += 12;
        else
            total_faces += 20;
    }
    cout << total_faces << endl;
    return 0;
}
