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
  int m;
  cin >> m;
  vector<int> brr(m);
  for (int i = 0; i < m; i++)
  {
    cin >> brr[i];
  }
  int i = 0;
  int j = 0;
  vector<int> ans;
  while (i < n && j < m)
  {
    if (arr[i] < brr[j])
    {
      if (ans.empty() || ans.back() != arr[i])
      {
        ans.push_back(arr[i]);
      }
      i++;
    }
    else if (arr[i] > brr[j])
    {
      if (ans.empty() || ans.back() != brr[j])
      {
        ans.push_back(brr[j]);
      }
      j++;
    }
    else if (arr[i] == brr[j])
    {
      if (ans.empty() || ans.back() != arr[i])
      {
        ans.push_back(arr[i]);
      }
      i++;
      j++;
    }
  }
  while (i < n)
  {
    if (ans.empty() || ans.back() != arr[i])
    {
      ans.push_back(arr[i]);
    }
    i++;
  }
  while (j < m)
  {
    if (ans.empty() || ans.back() != brr[j])
    {
      ans.push_back(brr[j]);
    }
    j++;
  }
  for (auto it : ans)
  {
    cout << it << " ";
  }
  return 0;
}