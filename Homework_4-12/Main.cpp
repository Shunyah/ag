using namespace std;
//    dp[a][b] += (dp[a - 1][b- 2] + dp[a - 2][b - 1]);
int main()
{
    int n;
    int m;

    int dp[n][m];
    cin >> n >> m;
    if (n <= 1 || m <= 1)
        dp[n][m] = 0;

    dp[2][1] = 1;
    dp[1][2] = 1;

    int i = 2;
    int j = 2;

    for (i < n; i++;) {
        for (j < m; j++;) {
            dp[n][m] += (dp[n - 1][m - 2] + dp[m - 2][n - 1]);
        }
    }
    cout << dp[n][m] << endl;
    system("pause");
    return 0;

}
