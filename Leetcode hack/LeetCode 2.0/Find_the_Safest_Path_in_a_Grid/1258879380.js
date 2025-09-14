/**
 * @param {number[][]} grid - The grid representing the terrain where 0 represents safe cell and 1 represents unsafe cell.
 * @return {number} - The maximum safeness factor, i.e., the minimum distance to the nearest unsafe cell from the bottom-right cell (n-1, n-1).
 */
var maximumSafenessFactor = function(grid) {
    const n = grid.length; // Dimension of the grid
    const directions = [[1, 0], [-1, 0], [0, 1], [0, -1]]; // Possible movements: down, up, right, left
    const isInBound = (r, c) => r >= 0 && r < n && c >= 0 && c < n; // Function to check if a cell is within the grid bounds

    // Initialize distances and queue for the first BFS
    const dist = Array.from({ length: n }, () => Array(n).fill(Infinity)); // Matrix to store distances from each cell to the nearest unsafe cell
    const queue = [];

    // Initialize maxDistance matrix and queue for the second BFS
    const maxDistance = Array.from({ length: n }, () => Array(n).fill(0)); // Matrix to store maximum safeness factor for each cell

    // Add all unsafe cells to the queue and set their distance to 0
    for (let r = 0; r < n; r++) {
        for (let c = 0; c < n; c++) {
            if (grid[r][c] === 1) {
                dist[r][c] = 0;
                queue.push([r, c]);
            }
        }
    }

    // First BFS to calculate minimum distance from each cell to the nearest unsafe cell
    for (let i = 0; i < queue.length; i++) {
        const [r, c] = queue[i];
        for (const [dr, dc] of directions) {
            const nr = r + dr;
            const nc = c + dc;
            if (isInBound(nr, nc) && dist[nr][nc] === Infinity) {
                dist[nr][nc] = dist[r][c] + 1;
                queue.push([nr, nc]);
            }
        }
    }

    // Set initial values for starting cell (0,0) for the second BFS
    maxDistance[0][0] = dist[0][0];
    queue.push([0, 0]);

    // Second BFS to calculate maximum safeness factor for each cell
    for (let i = 0; i < queue.length; i++) {
        const [r, c] = queue[i];
        for (const [dr, dc] of directions) {
            const nr = r + dr;
            const nc = c + dc;
            if (isInBound(nr, nc)) {
                const newDistance = Math.min(maxDistance[r][c], dist[nr][nc]);
                if (newDistance > maxDistance[nr][nc]) {
                    maxDistance[nr][nc] = newDistance;
                    queue.push([nr, nc]);
                }
            }
        }
    }

    return maxDistance[n - 1][n - 1]; // Return the maximum safeness factor for the bottom-right cell
};