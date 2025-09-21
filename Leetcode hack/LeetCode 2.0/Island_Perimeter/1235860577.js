/**
 * @param {number[][]} grid
 * @return {number}
 */
var islandPerimeter = function(grid) {
    let sum = 0;
    for(let x = 0; x < grid.length; x++){
        for(let i = 0; i < grid[0].length; i++){
            if(grid[x][i] == 1) {
                sum += 4;
                if(0 <= x-1 && x-1 < grid.length && grid[x-1][i] == 1) sum--;
                if(0 <= x+1 && x+1 < grid.length && grid[x+1][i] == 1) sum--;
                if(0 <= i-1 && i-1 < grid[0].length && grid[x][i-1] == 1) sum--;
                if(0 <= i+1 && i+1 < grid[0].length && grid[x][i+1] == 1) sum--;
            }
        }
    }
    return sum;
};