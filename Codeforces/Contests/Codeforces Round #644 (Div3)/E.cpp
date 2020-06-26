/******* all required header files *******/
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>	
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

using namespace std;

/*****All definitions*******/
#define w(t) int t; cin>>t; while(t--)
#define vi vector<int>
#define vs vector<string>
#define vc vector<char>
#define mp make_pair
#define ll long long int
#define pb push_back
#define F first
#define S second
/***************************/

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	w(t){
		ll n;
		cin>>n;
		ll arr[n][n];
		ll cnt = 0;
		for(int i = 0; i < n; i++)
		{
			for(int  j= 0; j < n; j++)
			{
				cin>>arr[i][j];
				if(arr[i][j] == 1)
					cnt++;
			}
		}
		int tot = 0;
		for(int i = 0; i < n-2; i++)
		{
			for(int j = 0; j < n-2; j++)
			{
				if((arr[i][j] == 1 && arr[i][j+1]) || (arr[i][j] == 1 && arr[i+1][j] == 1))
				{
					tot++;
				}
			}
		}

		for(int i = 0; i < n; i++)
		{
			if(arr[i][n-1] == 1)
				tot++;
		}

		for(int j = 0; j < n; j++)
		{
			if(arr[n-1][j] == 1)
				tot++;
		}

		cout<<tot<<"\n";
	}


	return 0;
}
