#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int largest = INT_MIN;
  while (n)
  {
    int digit = n % 10;
    if (digit > largest)
    {
      largest = digit;
    }
    n /= 10;
  }
  cout << "Largest Digit is " << largest << endl;
  return 0;
}