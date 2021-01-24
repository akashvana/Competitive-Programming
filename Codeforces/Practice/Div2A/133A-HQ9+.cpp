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

	string str;
	bool check = true;
	cin >> str;
	for (int i = 1; i < str.size(); i++)
	{
		if ('a' <= str[i] && str[i] <= 'z')
			check = false;
	}
	if (check) {
		for (int i = 0; i < str.size(); i++)
			str[i] = str[i] ^ 32;
	}
	cout << str << endl;
}
