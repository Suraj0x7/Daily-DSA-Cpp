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

  // Mistake fixed: handle empty array
  if (n == 0)
  {
    return 0;
  }

  int largest = arr[n - 1];
  vector<int> ans;

  ans.push_back(largest);

  // Mistake fixed: i >= 0, because index 0 also needs to be checked
  for (int i = n - 2; i >= 0; i--)
  {
    if (arr[i] > largest)
    {
      largest = arr[i];
      ans.push_back(largest);
    }
  }

  reverse(ans.begin(), ans.end());

  for (auto it : ans)
  {
    cout << it << " ";
  }

  return 0;
}