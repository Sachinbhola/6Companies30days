int longestMountain(vector<int>& arr) {
        int n = arr.size();
        if(n==1) return 0;
         int ans=0;
        vector<int> up(n,0),down(n,0);
        
        for(int i=n-2;i>=0;i--){
            if(arr[i]>arr[i+1]) down[i]=down[i+1]+1;
        }
        for(int i=1;i<n;i++){
            if(arr[i]>arr[i-1]) up[i]=up[i-1]+1;
            if(up[i] && down[i]) ans=max(ans,up[i]+down[i]+1);
            cout<<up[i]<<" "<<down[i]<<"\n";
        }
        return ans;
    }
