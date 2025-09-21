/**
 * @param {number} n
 * @param {number[][]} roads
 * @return {number}
 */
var maximumImportance = function(n, roads) {
    let degree = new Array(n).fill(0);

    for(const road of roads){
        degree[road[0]]++;
        degree[road[1]]++;
    }

    let cities = Array.from({length: n}, (_, i) => i);
    cities.sort((a,b) => degree[b] - degree[a]);

    let totalImportance = 0;
    for(let i = 0; i < n; i++){
        totalImportance += (n - i) * degree[cities[i]];
    }

    return totalImportance;

};