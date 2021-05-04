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
		int n, x;
		cin >> n >> x;

		unordered_map<int, int> mp;
		lli total = 0, count = 0;

		for(int i = 0; i < n; i++)
		{
			int a; cin >> a;
			total++;

			if(mp[a] == 0)
			{
				mp[a]++;
				count++;
			}
		}

		if((total - x) >= count) cout << count << endl;
		else cout << total - x << endl;
	}
	return 0;
}