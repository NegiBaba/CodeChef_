/*
The solution to this problem is very easy,
just divide the time it takes to drive by
the time of song.
*/
#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

#define lli long long int
#define endl '\n'

#define PI 3.141
#define MOD 1000000009

using namespace std;

int main()
{

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	fastio;
	int testcases; cin >> testcases;
	while(testcases--)
	{
		int m, s; 
		cin >> m >> s;

		cout << (m / s) << endl;
	}
	return 0;
}