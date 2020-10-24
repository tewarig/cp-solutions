#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;
#define ll long long ;
 
#define w(t)  int y ; cin>>y;  while(y--)
int main()
{
 
 
	w(t) {
 
		int n;
		long long int k;
 
		cin >> n;
		cin >> k;
		int arr[n];
		long long int sum = 0;
 
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
			sum += arr[i];
 
		}
 
		if (sum == k)
		{
			cout << "YES" << "\n";
		} else {
			cout << "NO" << "\n";
		}
 
 
	}
 
	return 0;
}
 
