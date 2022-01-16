string FirstNonRepeating(string A){
		    
		    int hash[26]={0};
		    queue<char> q;
		    q.push(A[0]);
		    char uniq=A[0];
		    string ans;
		    
		    for(int i=0;i<A.length();i++){
		        
		        hash[A[i]-97]++;
		        q.push(A[i]);
		        
		        while(!q.empty()){
		            if(hash[q.front()-97]>1){
		                q.pop();
		            }
		            else{
		                ans+=q.front();
		                break;
		            }
		        }
		        
		        if(q.empty()){
		            ans+='#';
		        }
		        
		    }
		    
		  return ans;
		        
		        
		}
