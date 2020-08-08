#include <iostream>
using namespace std;

int main()
{
  int n, anton = 0, danik = 0;
  string S;

  cin >> n >> S;

  for (int i = 0; i < n; ++i)
  {
    if (S[i] == 'A')
      anton++;
    else
      danik++;    
  }

  if (anton > danik)
    cout << "Anton" << endl;
  else if (danik > anton)
    cout << "Danik" << endl;
  else
    cout << "Friendship" << endl; 
}