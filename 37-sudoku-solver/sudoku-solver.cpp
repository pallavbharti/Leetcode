class Solution {
public:

bool isSafe(vector<vector<char>>& board,int r , int c,int num){
    // row check:
    for(int i=0;i<9;i++){
        if(board[r][i]-'0'==num) return false;
    }
    // column check:
    for(int i=0;i<9;i++){
        if(board[i][c]-'0'==num) return false;
    }
    // big cell check :
    int x =(r/3)*3;
    int y =(c/3)*3;
    for(int i =x ; i< x+3; i++){
        for(int j =y ; j< y+3; j++){
            if(board[i][j]-'0'==num) return false;
        }
    }
    return true;
}

bool f(vector<vector<char>>& board,int r , int c){
    if(r==9)return true;                 
    if(c==9) return f(board,r+1,0);     

    // agar filled cell hai toh next column me jao
    if(board[r][c]!='.') return f(board,r,c+1);

    
    for(int num=1;num<=9;num++){
        if(isSafe(board,r,c,num)){       
            board[r][c]='0'+num;          // fill
            bool retval = f(board,r,c+1); // aage solve karo
            if(retval) return true;       // solution mil gaya
            board[r][c]='.';              // backtracking
        }
    }
    return false;
}

void solveSudoku(vector<vector<char>>& board) {
    f(board,0,0);
}
};
