#include <bits/stdc++.h>
using namespace std;
bool solve(int n)
{
  if (n % 2 == 0)
  {
    return false;
  }
  return true;
}
int main()
{
  int n;
  cin >> n;
  int ans = 0;
  while (n)
  {
    int digit = n % 10;
    if (solve(digit))
    {
      ans++;
    }
    n /= 10;
  }
  cout << "The odd number count is " << ans << endl;
  return 0;
}