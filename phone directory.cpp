vector<vector<string>> displayContacts(int n, string contact[], string s)
    {
        int m=s.length();
        vector<vector<string>> ans;
        vector<string> temp;
        for(int i=0;i<n;i++){
            temp.push_back(contact[i]);
        }
        for(int i=0;i<m;i++){
            vector<string> temp2;
            for(auto str:temp){
                if(str.length()>i && str[i]==s[i]){
                    temp2.push_back(str);
                }
            }
            if(temp2.size()==0) temp2.push_back("0");
            if(i==0) sort(temp2.begin(),temp2.end());
            ans.push_back(temp2);
            temp.clear();
            for(auto it:temp2){
                temp.push_back(it);
            }
            temp2.clear();
        }
        
        return ans;
    }
