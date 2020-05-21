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
	int a;
	cin >> a;
	for (int i = 0; i < a; i++)
	{
		if (i % 2 == 0) {
			cout << "I hate ";
		} else {
			cout << "I love ";
		}
		if (i != a - 1) {
			cout << "that ";
		} else {
			cout << "it ";
		}
	}
	return 0;
}
