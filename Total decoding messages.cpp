const int MOD=1e9+7;
		int CountWays(string s){
		    if(s[0]=='0') return 0;
		    int n=s.length();
		    vector<int> dp(n+1,0);
		    
		    dp[0]=1;
		    dp[1]=1;
		    for(int i=2;i<=n;i++){
		        if(s[i-1]=='0'){
		            if(s[i-2]=='1' || s[i-2]=='2') dp[i]=dp[i-2];
		            else return 0;
		        }
		        else{
		            string str;
		            str = str + s[i-2]+s[i-1];
		            int num = stoi(str);
		            if(num<=26 && num>=10){
		                dp[i]=(dp[i-1]%MOD+dp[i-2]%MOD)%MOD;
		            }
		            else dp[i]=dp[i-1];
		        }
		    }
		    return dp[n];
		}
