#include <stdio.h>
#include<stdlib.h>
#include <algorithm>
#include <stdint.h>
#include <iostream> 
#include <inttypes.h>
#include<string.h>
#include<vector>

using namespace std;
 
long long LPS(vector<long long> a, vector<vector<long long> >&dp, vector<vector<long long> >&index, long long i, long long j, vector<long long> s)
{
    if (i == j) 
    {
        return s[i];
    }
    if (i > j)
    {
        return 0;
    }
    if (dp[i][j] != -1)
    {
        return dp[i][j];
    }
 
    // 左右兩端字元相等
    if (a[i] == a[j])
    {
        dp[i][j] = LPS(a, dp, index, i+1, j-1, s) + s[i] + s[j], index[i][j] = 0;
    }

    if(LPS(a, dp, index, i+1, j, s) > dp[i][j])
    {
        dp[i][j] = LPS(a, dp, index, i+1, j, s), index[i][j] = 1;
    }
    if(LPS(a, dp, index, i, j-1, s) > dp[i][j])
    {
        dp[i][j] = LPS(a, dp, index, i, j-1, s), index[i][j] = 2;
    }
 
    // 刪除左端字元
    // else if (LPS(a, dp, index, i+1, j, s) >= LPS(a, dp, index, i, j-1, s))
    // {
    //     dp[i][j] = LPS(a, dp, index, i+1, j, s), index[i][j] = 1;
    // }
 
    // 刪除右端字元
    // else if (LPS(a, dp, index, i+1, j, s) < LPS(a, dp, index, i, j-1, s))
    // {
    //     dp[i][j] = LPS(a, dp, index, i, j-1, s), index[i][j] = 2;
    // }
 
    // 都可。
    // else if
    // {
    //     dp[i][j] = LPS(a, dp, index, i+1, j, s), index[i][j] = 1;
    // }
 
    return dp[i][j];
}
 
void print(vector<vector<long long> > index, vector<long long>&ans, long long i, long long j)
{
    if (i > j)
    {
        return;
    }
    else if (i == j)
    {
        ans.push_back(i+1); 
    }
    // 兩端字母一樣。
    else if (index[i][j] == 0)
    {
        ans.push_back(i+1);
        ans.push_back(j+1);
        print(index, ans, i+1, j-1);
    }
 
    // 刪除左端字元。
    else if (index[i][j] == 1)
    {
        print(index, ans, i+1, j);
    }
 
    // 刪除右端字元。
    else if (index[i][j] == 2)
    {
        print(index, ans, i, j-1);
    }
    return;
}
 
int main()
{
    long long N;
    long long K;
    long long D;
    long long temp;
    long long S;


    cin >> N;
    cin >> K;
    cin >> D;

    vector<long long> a; 
    vector<long long> c; 
    vector<long long> s; 

    vector<vector<long long> > dp(N, vector<long long>(N, -1));
    vector<vector<long long> > index(N, vector<long long>(N));

    for(long long i = 0; i < N; i++)
    {
        cin >> temp;
        a.push_back(temp);
    }
    for(long long i = 0; i < N; i++)
    {
        cin >> temp;
        c.push_back(temp);
    }
    for(long long i = 0; i < N; i++)
    {
        cin >> temp;
        s.push_back(temp);
    }

    S = LPS(a, dp, index, 0, N-1, s);
    vector<long long> ans;

 
    printf("%lld\n", S);
    printf("%d\n", 0);

    print(index, ans, 0, N-1);

    printf("%lu\n", ans.size());

    sort(ans.begin(),ans.end());

    for(long long i = 0; i < ans.size(); i++)
    {
        printf("%lld ", ans[i]);
    }
}