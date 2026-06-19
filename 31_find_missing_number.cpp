#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int> &nums)
{
  int n = nums.size();
  int total = n * (n + 1) / 2;
  int sum = 0;

  for (int x : nums)
  {
    sum += x;
  }

  return total - sum;
}

int main()
{
  int n;
  cin >> n;

  vector<int> arr(n);

  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  cout << "Missing Number is: " << missingNumber(arr) << endl;

  return 0;
}