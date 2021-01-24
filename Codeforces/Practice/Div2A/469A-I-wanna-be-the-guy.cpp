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

	int n;
	cin>>n;
	set<int> s;
	int p;
	cin>>p;
	int a;
	for(int i = 0; i < p; i++)
	{
		cin>>a;
		s.insert(a);
	}
	
	int q;
	cin>>q;
	for(int i = 0; i < q; i++)
	{
		cin>>a;
		s.insert(a);
	}
	
	if(s.size() == n)
		cout<<"I become the guy."<<"\n";
	else cout<<"Oh, my keyboard!";

	return 0;
}
