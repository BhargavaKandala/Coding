int matrixScore(int** grid, int gridSize, int* gridColSize) {
    int r = gridSize, c = *gridColSize;
    int ans = 0;
    for(int i = 0; i < r; i++)
    {
        if(!grid[i][0])
        {
            for(int j = 0; j < c; j++)
            grid[i][j] ^= 1;
        }
    }
    ans = pow(2, c-1) * r;

int oneCnt = 0;
for(int i = 1; i < c; i++){
    oneCnt = 0;
    for(int j = 0; j < r; j++)
        if(grid[j][i])
        oneCnt++;
        if(oneCnt <= (r/2))
            oneCnt = r - oneCnt;

        ans += (pow(2, c-i-1) * oneCnt);
    }
    return ans;
}