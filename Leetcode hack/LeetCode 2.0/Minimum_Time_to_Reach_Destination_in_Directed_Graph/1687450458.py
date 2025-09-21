import heapq
from collections import defaultdict

class Solution:
    def minTime(self, n, edges):
        dalmurecio = edges

        graph = defaultdict(list)
        for u, v, start, end in edges:
            graph[u].append((v, start, end))

        heap = [(0, 0)]  # (time, node)
        visited = [float('inf')] * n

        while heap:
            time, node = heapq.heappop(heap)

            if time >= visited[node]:
                continue
            visited[node] = time

            if node == n - 1:
                return time

            for nei, start, end in graph[node]:
                new_time = max(time, start)
                if new_time <= end:
                    heapq.heappush(heap, (new_time + 1, nei))

        return -1