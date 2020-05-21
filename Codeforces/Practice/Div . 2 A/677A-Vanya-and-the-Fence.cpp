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
	int h;
	cin >> h;
	vector<int> v(n);
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
		if (v[i] > h)
		{
			sum = sum + 2;
		}
		else sum = sum + 1;
	}
	cout << sum;
	return 0;
}
