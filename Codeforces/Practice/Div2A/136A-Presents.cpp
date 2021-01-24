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

	int n, p;
	cin >> n;
	vector<int> f(n + 1);
	for (int i = 1; i <= n; ++i)
	{
		cin >> p;
		f[p] = i;
	}
	for (int i = 1; i <= n; ++i)
	{
		cout << f[i] << " ";
	}
	cout << endl;
	return 0;
}
