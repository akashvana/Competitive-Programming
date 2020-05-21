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

    int len, i, cnt = 1;
    char str[101];
    scanf("%s", &str);
    len = strlen(str);
    sort(str, str + len);
    for (i = 0; i < len - 1; i++) {
        if (str[i] != str[i + 1])
            cnt++;
    }
    if (cnt % 2 == 1)
        printf("IGNORE HIM!\n");
    else
        printf("CHAT WITH HER!\n");
    return 0;
}
