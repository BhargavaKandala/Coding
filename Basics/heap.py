import heapq

class Solution:
    def minCost(self, m: int, n: int, waitCost: list[list[int]]) -> int:
        directions = [(0, 1), (1, 0)]
        INF = float('inf')
        
        dist = [[[INF, INF] for _ in range(n)] for _ in range(m)]
        
        start_cost = 1
        dist[0][0][1] = start_cost
        heap = [(start_cost, 0, 0, 1)]  

        while heap:
            cost, i, j, time = heapq.heappop(heap)
            parity = time % 2

            if dist[i][j][parity] < cost:
                continue

            if parity == 1:
                for dx, dy in directions:
                    ni, nj = i + dx, j + dy
                    if 0 <= ni < m and 0 <= nj < n:
                        move_cost = (ni + 1) * (nj + 1)
                        new_cost = cost + move_cost
                        if new_cost < dist[ni][nj][0]:
                            dist[ni][nj][0] = new_cost
                            heapq.heappush(heap, (new_cost, ni, nj, time + 1))
            else:
                wait = waitCost[i][j]
                new_cost = cost + wait
                if new_cost < dist[i][j][1]:
                    dist[i][j][1] = new_cost
                    heapq.heappush(heap, (new_cost, i, j, time + 1))

        return min(dist[m - 1][n - 1][0], dist[m - 1][n - 1][1])