int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        
        int i=0;
        int j=0;
        long long pro=1;
        int ans=0;
        while(i<n){
            pro*=a[i];
            if(pro>=k){
                while(pro>=k){
                    pro/=a[j];
                    j++;
                }
            }
            ans+=i-j+1;
            i++;
        }
        return ans;
    }
