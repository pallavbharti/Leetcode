class Solution {
public:
    int ans;
    int ei, ej;   // end coordinates

    bool CanWeGo(vector<vector<int>>& grid , int n ,int m,int i, int j){
        return i>=0 && j>=0 && i<n && j<m && grid[i][j]!=-1 && grid[i][j]!=3;
    }

    void f(vector<vector<int>>& grid , int n ,int m,int i, int j, int remain){

        if(i == ei && j == ej){
            if(remain == 0) 
                ans += 1;
            return;
        }

        int temp = grid[i][j];
        grid[i][j] = 3;   // visited

        // left
        if(CanWeGo(grid,n,m,i,j-1)){
            f(grid,n,m,i,j-1,remain-1);
        }
        // up
        if(CanWeGo(grid,n,m,i-1,j)){
            f(grid,n,m,i-1,j,remain-1);
        }
        // right
        if(CanWeGo(grid,n,m,i,j+1)){
            f(grid,n,m,i,j+1,remain-1);
        }
        // down
        if(CanWeGo(grid,n,m,i+1,j)){
            f(grid,n,m,i+1,j,remain-1);
        }

        grid[i][j] = temp;   // backtracking
    }

    int uniquePathsIII(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        ans = 0;
        int count = 0;
        int si = -1, sj = -1;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==0) count++;
                if(grid[i][j]==1){
                     si = i;
                     sj = j;
                }
                if(grid[i][j]==2){
                     ei = i;
                     ej = j;
                }
            }
        }
        int total = count + 1;   // zeros + start
        f(grid, n, m, si, sj, total);
        return ans;
    }
};
