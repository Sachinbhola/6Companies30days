bool canPair(vector<int> nums, int k) {
    
        unordered_map<int,int> m;
        if(nums.size()%2!=0) return false;
        for(auto it:nums){
            m[it%k]++;
        }
        for(auto it:nums){
            int a=it%k;
            if(a==0){
                if(m[a]%2!=0) return false;
            }
            else{
                int b=k-a;
                if(a==b && m[a]%2!=0) return false;
                if(m.find(b)==m.end()) return false;    
                if(m[a]!=m[b]) return false;
            }
        }
        return true;
    }
