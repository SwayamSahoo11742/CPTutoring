#include <bits/stdc++.h>

using namespace std;

inline void solve()
{
	int n;
	cin >> n;
	int permutation[n], location[n];
	for(int i = 0; i < n; i++)
	{
		cin >> permutation[i];
		permutation[i]--;
		location[permutation[i]] = i;
	}
	for(int i = 0; i < n; i++)
	{
		if(location[i] == n-1)
			cout << rand()%n+1 << (i == n-1?'\n':' ');
		else
			cout << location[i]+2 << (i == n-1?'\n':' ');
	}
}

int main()
{
	int t;
	cin >> t;
	while(t--)
		solve();
	return 0;
}