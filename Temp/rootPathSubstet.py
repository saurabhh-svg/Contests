MOD = 10**9 + 7

def count_subsets_with_sum(values, target_sum):
    dp = [0] * (target_sum + 1)
    dp[0] = 1  

    for value in values:
        for j in range(target_sum, value - 1, -1):
            dp[j] = (dp[j] + dp[j - value]) % MOD
    
    return dp[target_sum]

def dfs(node, parent, graph, values, K, path_values, total):
    path_values.append(values[node - 1])
    
    count = count_subsets_with_sum(path_values, K)
    total[0] = (total[0] + count) % MOD
    
    for neighbor in graph[node]:
        if neighbor != parent:
            dfs(neighbor, node, graph, values, K, path_values, total)
    
    path_values.pop()

def find_subsets_sum(N, M, K, values, edges):
    graph = [[] for _ in range(N + 1)]
    for u, v in edges:
        graph[u].append(v)
        graph[v].append(u)
    
    total = [0]  
    path_values = []
    
    dfs(1, -1, graph, values, K, path_values, total)
    
    return total[0]




# Example input
N = 2
M = 1
K = 4
values = [2, 2]
edges = [(1, 2)]

# Compute the result
result = find_subsets_sum(N, M, K, values, edges)
print(result)
