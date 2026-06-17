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
  bool ans = true;
  for (int i = 1; i < n; i++)
  {
    if (arr[i - 1] > arr[i])
    {
      ans = false;
      break;
    }
  }
  if (ans)
  {
    cout << "Given array is an sorted " << endl;
  }
  else
  {
    cout << "Given array is not sorted" << endl;
  }
  return 0;
}
