#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main()
{
  int n, k1, k2, temp;
  string s1, s2, curr_state;
  unordered_set<string> states;
  bool finished = false;
  cin >> n;

  cin >> k1;
  for (int i = 0; i < k1; ++i)
  {
    cin >> temp;
    if (temp == 10)
      s1.append("d");
    else
      s1.append(to_string(temp));
  }
  cin >> k2;
  for (int i = 0; i < k2; ++i)
  {
    cin >> temp;
    if (temp == 10)
      s2.append("d");
    else
      s2.append(to_string(temp));
  }

  temp = 0;
  while (k1 != 0 && k2 != 0 && !finished)
  {
    if (s1[0] > s2[0])
    {
      s1.insert(s1.end(), s2[0]);
      s2.erase(0, 1);
      s1.insert(s1.end(), s1[0]);
      s1.erase(0, 1);
      k1++;
      k2--;
    }
    else
    {
      s2.insert(s2.end(), s1[0]);
      s1.erase(0, 1);
      s2.insert(s2.end(), s2[0]);
      s2.erase(0, 1);
      k2++;
      k1--;
    }
    curr_state.assign(s1+','+s2);
    if (states.find(curr_state) == states.end())
      states.insert(curr_state);
    else
      finished = true;
    temp++;
  }

  if (finished)
    cout << "-1" << endl;
  else
  {
    if (k1 == 0)
      cout << temp << " 2" << endl;
    else
      cout << temp << " 1" << endl;
  }
  
  return 0;
}
