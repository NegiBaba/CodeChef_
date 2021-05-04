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
		int n, r;
		cin >> n >> r;

		vector<pair<int, int>> arr(n);

		for(int i = 0; i < n; i++)
		{
			cin >> arr[i].first;
		}

		for(int i = 0; i < n; i++)
		{
			cin >> arr[i].second;
		}

		lli total = arr[0].second, ans = arr[0].second;

		for(int i = 1; i < n; i++)
		{
			total -= (arr[i].first - arr[i - 1].first) * r;
			if(total < 0) total = 0;
			total += arr[i].second;
			ans = max(ans, total);
		}	
		cout << ans << endl;
	}
	return 0;
}