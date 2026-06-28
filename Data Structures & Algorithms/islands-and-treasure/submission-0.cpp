class Solution {
public:
    void islandsAndTreasure(vector<vector<int>>& grid) {
        int n=grid.size(),m=grid[0].size();
        queue<pair<int,int>> q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==0)q.push({i,j});
            }
        }
        
        vector<int> dx={-1,1,0,0};
        vector<int> dy={0,0,-1,1};

        while(!q.empty()){
           auto [x,y]=q.front();q.pop();

           for(int i=0;i<4;i++){
            int nx=x+dx[i];
            int ny=y+dy[i];
            
            if(nx<0||ny<0||nx>n-1||ny>m-1)continue;
            if(grid[nx][ny]!=INT_MAX)continue;

            grid[nx][ny]=grid[x][y]+1;
            q.push({nx,ny});
           }

        }

return;


    }
};
