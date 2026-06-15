#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int temp = n;
  int rev = 0;
  while (temp)
  {
    int digit = temp % 10;
    rev = rev * 10 + digit;
    temp /= 10;
  }
  if (n == rev)
  {
    cout << "Palindrome" << endl;
  }
  else
  {
    cout << "Not Palindrome" << endl;
  }
  return 0;
}
