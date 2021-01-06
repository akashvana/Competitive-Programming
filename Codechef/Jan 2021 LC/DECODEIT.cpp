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

		int n;
		string str;
		cin>>n;
		cin>>str;

		map<string, char> m{{"0000", 'a'}, {"0001", 'b'},{"0010", 'c'},{"0011", 'd'},{"0100", 'e'},{"0101", 'f'},{"0110", 'g'},{"0111", 'h'},{"1000", 'i'},{"1001", 'j'},{"1010", 'k'},{"1011", 'l'},{"1100", 'm'},{"1101", 'n'},{"1110", 'o'},{"1111", 'p'}};	

		for(int i = 0; i < n; i = i + 4){
			string ss = "";
			for(int j = 0; j < 4; j++){
				char a = str[i+j];
				ss.pb(a);
			}
			cout<<m[ss];
		}
		cout<<endl;
	}

	return 0;
}
