string encode(string src)
{     
   int cnt=1;
   string ans;
   int n=src.length();
   for(int i=0;i<n;i++){
       char c=src[i];
       while(i+1<n && c==src[i+1]){
           cnt++;
           i++;
       }
       ans+=c;
       ans+=to_string(cnt);
       cnt=1;
   }
   return ans;
}  
