#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

#define endl '\n'

#define PI 3.141
#define MOD 1000000007

typedef long long int lli;
using namespace std;

lli find(lli n)
{
	if(n <= 1) return 1;
	if(n % 2 == 1)
	{
		lli x = find((n / 2) + 1);
		return (x * x) % MOD;
	} else {
		lli x = find(n / 2);
		return (((x * x) % MOD) * 2) % MOD;
	}
}
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
		int n; cin >> n;

		lli count = find(n);
		cout << count << endl;
	}
	return 0;
}