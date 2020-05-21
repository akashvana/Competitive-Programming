#include<bits/stdc++.h>
using namespace std;

/*****All definitions*******/
#define w(t) int t; cin>>t; while(t--)
#define vi vector<int>
#define vs vector<string>
#define mp make_pair
/***************************/

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	int k;
	cin >> k;
	for (int i = 0; i < k; i++)
	{
		if (n % 10 == 0)
			n = n / 10;
		else n--;
	}
	cout << n;
	return 0;
}
