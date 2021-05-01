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
		int l; cin >> l;
		
		string s;
		cin >> s;

		double p = 0.0, t = 0.0;
		bool possible = false;

		for(int i = 0; i < l; i++)
		{
			t++;
			if(s[i] == '1') p++;

			if((p / t) >= 0.5) 
			{
				possible = true;
				break;
			}
		}

		if(possible) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}