string colName (long long int num)
    {
        string ans;
        while(num>0){
            num--;
            char c=(num%26)+65;
            ans = c + ans;
            num/=26;
        }
        return ans;
    }
