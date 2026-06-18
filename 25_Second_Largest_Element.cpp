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

  int largest = INT_MIN;
  int second = INT_MIN;

  for (int i = 0; i < n; i++)
  {
    if (arr[i] > largest)
    {
      second = largest;
      largest = arr[i];
    }
    else if (arr[i] > second && arr[i] != largest)
    {
      second = arr[i];
    }
  }

  if (second == INT_MIN)
  {
    cout << "Second largest element does not exist" << endl;
  }
  else
  {
    cout << "Second Largest element of given array is " << second << endl;
  }

  return 0;
}