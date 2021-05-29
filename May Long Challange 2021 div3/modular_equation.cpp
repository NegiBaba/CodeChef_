#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

#define endl '\n'

#define PI 3.141
#define MOD 1000000007

typedef long long int lli;
using namespace std;

int mod(int m, int a, int b)
{
    return (m % a) % b;
}

lli find(int n, int m)
{
	lli count = (n - 1);

	for(int i = 2; i < n; i++)
	{
		for(int j = i + 1; j <= n; j++)
		{
			if(mod(m, i, j) == mod(m, j, i))
			cout << "{" << i << " " << j << "} ";
		}
		cout << endl;
	}
	return count;
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
		int n, m; cin >> n >> m;

		cout << find(n, m) << endl;
	}
	return 0;
}