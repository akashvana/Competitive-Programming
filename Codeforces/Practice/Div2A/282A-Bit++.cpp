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
    string str;
    cin >> str;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (str[i] == str[i + 1])
            count++;
    }
    cout << count;
    return 0;
}
