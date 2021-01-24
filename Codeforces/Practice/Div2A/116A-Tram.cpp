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
	int arr[n];
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		sum = sum + arr[i];
	}

	int count = 0;
	int total = 0;
	sort(arr, arr + n, greater<int>());
	for (int i = 0; i < n; i++)
	{
		total = total + arr[i];
		if (total > sum / 2)
		{
			break;
		}
		count++;
	}
	cout << total;
	return 0;
}
