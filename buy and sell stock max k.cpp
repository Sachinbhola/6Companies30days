int maxProfit(int k, int n, int price[]) {
        if(n<2) return 0;
        int dp[k+1][n];
 
        for(int i=0;i<=k;i++) dp[i][0]=0;
        for(int i=0;i<n;i++) dp[0][i]=0;
        
        for(int i=1;i<=k;i++){
            for(int j=1;j<n;j++){
                dp[i][j]=dp[i][j-1];
                for(int k=0;k<j;k++){
                    dp[i][j]=max(dp[i][j],dp[i-1][k]+(price[j]-price[k]));
                }
            }
        }
        return dp[k][n-1];
    }
