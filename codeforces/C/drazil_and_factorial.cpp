#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool decrescente (int i, int j) { return (i > j); }

int main()
{
  int n;
  vector<int> x;
  string a;
  string fatoracao[8] = {"2", "3", "322", "5", "53", "7", "7222", "7332"};
  cin >> n >> a;
  for (auto i : a)
  {
    if (i != '1' && i != '0')
      for (auto j : fatoracao[i-'0'-2])
        x.insert(x.end(), j-'0');
  }
  sort(x.begin(), x.end(), decrescente);
  for (auto i : x)
    cout << i;
  cout << endl;
  return 0;
}
