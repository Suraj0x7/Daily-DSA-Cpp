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
  vector<int> ans;
  ans.push_back(arr[0]);
  int j = 0;
  for (int i = 1; i < n; i++)
  {
    if (arr[i] != ans[j])
    {
      ans.push_back(arr[i]);
      j++;
    }
  }
  for (auto it : ans)
  {
    cout << it << " ";
  }
  return 0;
}