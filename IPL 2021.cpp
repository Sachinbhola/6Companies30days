vector<int> max_of_subarrays(vector<int> arr, int n, int k) {
        int i=0;
        int j=0;
        vector<int> ans;
        deque<int> q;
        
        while(i<n){
            while(!q.empty() && arr[i]>q.back()){
                q.pop_back();
            }
            q.push_back(arr[i]);
            if(i-j+1<k) i++;
            
            else{
                ans.push_back(q.front());
                if(q.front() == arr[j]){
                    q.pop_front();
                }
                i++;
                j++;
            }
        }
        return ans;
    }
