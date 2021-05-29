#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

#define endl '\n'

#define PI 3.141
#define MOD 1000000007

typedef long long int lli;
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
		int n, x, k;
		cin >> n >> x >> k;

		if(k == 1) cout << "YES" << endl;
		else 
		{
			if((x % k) == ((n + 1) % k)) cout << "YES" << endl;
			else if(x % k == 0) cout << "YES" << endl;
			else cout << "NO" << endl;
		}
	}
	return 0;
}