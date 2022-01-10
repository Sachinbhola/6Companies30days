int dir[5]={-1,0,1,0,-1};
    int orangesRotting(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        
        queue<pair<int,int>> q;
        int fresh=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==2) q.push({i,j});
                if(grid[i][j]==1) fresh++;
            }
        }
        int ans=-1;
        while(!q.empty()){
            int sz=q.size();
            while(sz--){
                pair<int,int> p=q.front();
                q.pop();
                for(int i=0;i<4;i++){
                    int r=p.first;
                    int c=p.second;
                    r+=dir[i];
                    c+=dir[i+1];
                    
                    if(r>=0 && c>=0 && c<m && r<n && grid[r][c]==1){
                        grid[r][c]=2;
                        q.push({r,c});
                        fresh--;
                    }
                }
            }
            ans++;
        }
        if(fresh) return -1;
        return (ans==-1)?0:ans;
    }
