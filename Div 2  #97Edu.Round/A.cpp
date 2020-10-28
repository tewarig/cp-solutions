#include <bits/stdc++.h>
using namespace std;
 
int main()
{
 
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
#ifndef ONLINE_JUDGE
  freopen("input.txt" , "r" , stdin);
  freopen("output.txt", "w" , stdout);
#endif
 
  int n;
  cin >> n;
  while (n--)
  {
    long long int size1;
    long long int size2;
    cin >> size1 >> size2;
    if (2 * size1 > size2)
    {
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }
  }
 
 
  return 0;
 
 
}
