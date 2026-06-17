#include <bits/stdc++.h>
using namespace std;
bool IsPrime(int n)
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
  vector<int> ans;
  for (int i = 2; i <= n; i++)
  {
    if (IsPrime(i))
    {
      ans.push_back(i);
    }
  }
  for (auto it : ans)
  {
    cout << it << " ";
  }
  return 0;
}