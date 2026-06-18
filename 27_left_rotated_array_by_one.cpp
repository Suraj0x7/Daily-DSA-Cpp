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
  reverse(arr.begin(), arr.end());
  reverse(arr.begin(), arr.end() - 1);
  for (auto it : arr)
  {
    cout << it << " ";
  }
  return 0;
}