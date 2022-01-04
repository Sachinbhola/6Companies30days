    vector<vector<string> > Anagrams(vector<string>& list) {
        vector<vector<string>> ans;
        
        unordered_map<string,vector<string>> m;
        
        for(auto it : list){
            string s=it;
            sort(s.begin(),s.end());
            m[s].push_back(it);
        }
        for(auto it : m){
            ans.push_back(it.second);
        }
        return ans;
    }
