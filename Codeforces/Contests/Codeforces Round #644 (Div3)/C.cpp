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
#include <assert.h>
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
		vector<int> v(n);
		set<int> s;
		vector<int> even;
		vector<int> odd;
		vector<int> final;
		for(int i = 0; i < n; i++)
		{
			cin>>v[i];
		}
		int cntodd = 0;
		int cnteven = 0;

		for(int i = 0; i < n; i++)
		{
			if(v[i] % 2 == 0){
				int a = v[i];
				even.pb(a);
			}
			else {
				int a = v[i];
				odd.pb(a);
			}
				
		}
		sort(v.begin(), v.end());
		for(int i = 0; i < n-1; i++)
		{
			if(v[i+1] - v[i] == 1)
			{
				int a = v[i];
				int b = v[i+1];
				s.insert(a);
				s.insert(b);
			}
		}

	return 0;
}
