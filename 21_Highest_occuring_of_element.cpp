#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin >> n;
  vector<int> arr(n);
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  unordered_map<int, int> mp;
  for (int i = 0; i < n; i++)
  {
    mp[arr[i]]++;
  }
  int ans = 0;
  int Aans = 0;
  for (auto it : mp)
  {
    if (it.second > ans)
    {
      ans = it.second;
      Aans = it.first;
    }
  }
  cout << "Highest occuring of given array is " << Aans;
  return 0;
}