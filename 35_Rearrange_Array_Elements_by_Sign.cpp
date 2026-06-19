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
  vector<int> ans(n);
  int posIndex = 0;
  int negIndex = 1;
  for (int i = 0; i < n; i++)
  {
    if (arr[i] > 0)
    {
      ans[posIndex] = arr[i];
      posIndex += 2;
    }
    else if (arr[i] < 0)
    {
      ans[negIndex] = arr[i];
      negIndex += 2;
    }
  }
  for (auto it : ans)
  {
    cout << it << " ";
  }
  return 0;
}