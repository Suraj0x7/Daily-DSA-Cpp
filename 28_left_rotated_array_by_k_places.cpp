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

  int k;
  cin >> k;

  k = k % n;

  vector<int> temp;

  // store first k elements
  for (int i = 0; i < k; i++)
  {
    temp.push_back(arr[i]);
  }

  // shift remaining elements to left
  for (int i = k; i < n; i++)
  {
    arr[i - k] = arr[i];
  }

  // put temp elements at end
  int j = 0;
  for (int i = n - k; i < n; i++)
  {
    arr[i] = temp[j];
    j++;
  }

  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }

  return 0;
}