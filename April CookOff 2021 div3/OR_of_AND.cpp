#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

#define endl '\n'

#define PI 3.141
#define MOD 1000000007

typedef long long int lli;
using namespace std;

int main()
{

	fastio;
	int testcases; cin >> testcases;
	while(testcases--)
	{
		int n, q;
		cin >> n >> q;

		int bits[33] = {0}, arr[n];
		
        // calculating the bits
		for(int i = 0; i < n; i++)
		{
		    cin >> arr[i];

			int j = 1, x = arr[i];
			while(x > 0)
			{
				if(x & 1 == 1) bits[j]++;
				j++;
				x = x >> 1;
			}
		}
		
		lli ans = 0;
		for(int i = 1; i <= 32; i++)
		{
		    if(bits[i] > 0)
		        ans += pow(2, i - 1);
		}
		cout << ans << endl;

		for(int i = 0; i < q; i++)
		{
			int index, val;
			cin >> index >> val;
			
			int x = arr[index - 1];
			arr[index - 1] = val;
			
			int j = 1;
			while(x > 0)
			{
			    if(x & 1 == 1) bits[j]--;
			    j++;
			    x = x >> 1;
			}
			   
			j = 1;
			while(val > 0)
			{
			    if(val & 1 == 1) bits[j]++;
			    j++;
			    val = val >> 1;
			}
			
			ans = 0;
		    for(int i = 1; i <= 32; i++)
		    {
		        if(bits[i] > 0)
		            ans += pow(2, i - 1);
		    }
		    cout << ans << endl;
			
		}
		
	}
	return 0;
}