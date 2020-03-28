class Solution {
public:
    int n, m;
    bool vis[305][305];
    vector< vector< int > > lmao;

    int dx[4] = {-1, 0, 1, 0};
    int dy[4] = {0, 1, 0, -1};

    bool check( int x, int y ) {
        if( x >= 0 && x < n && y >= 0 && y < m )
            return 1;
        return 0;
    }

    bool connect( int A, int B, int dir ) {
        if( dir == 0 ) {
            if( ( A == 2 || A == 5 || A == 6 ) && ( B == 2 || B == 3  || B == 4 ) )
                return 1;
            else
                return 0;
        }
        else if( dir == 1 ) {
            if( ( A == 1 || A == 4 || A == 6 ) && ( B == 1 || B == 3  || B == 5 ) )
                return 1;
            else
                return 0;
        }
        else if( dir == 2 ) {
            if( ( A == 2 || A == 3 || A == 4 ) && ( B == 2 || B == 5  || B == 6 ) )
                return 1;
            else
                return 0;
        }
        else {
            if( ( A == 1 || A == 3 || A == 5 ) && ( B == 1 || B == 4  || B == 6 ) )
                return 1;
            else
                return 0;
        }
    }

    void dfs( int x, int y ) {
        vis[x][y] = 1;
        for(int i = 0; i < 4; i++) {
            int nx = x + dx[i], ny = y + dy[i];
            if( check( nx, ny ) && vis[nx][ny] == 0 ) {
                if( connect( lmao[x][y], lmao[nx][ny], i ) )
                    dfs( nx, ny );
            }
        }
    }

    bool hasValidPath(vector<vector<int>>& grid) {
        n = grid.size(), m = grid[0].size();
        lmao = grid;
        dfs( 0, 0 );
        if( vis[n - 1][m - 1] )
            return 1;
        else
            return 0;
    }
};
