#include <bits/stdc++.h>
using namespace std;
bool CheckPrime(int n)
{
  if (n == 1 || n == 2)
    return true;
  for (int i = 2; i < n - 1; i++)
  {
    if (n % i == 0)
      return false;
  }
  return true;
}
int main()
{
  int n;
  cin >> n;
  if (CheckPrime(n))
  {
    cout << n << " is a prime Number" << endl;
  }
  else
  {
    cout << n << " is not a prime Number" << endl;
  }
  return 0;
}