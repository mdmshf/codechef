def iterative_dfs(graph, start, path=[]):
  q=[start]
  while q:
    print("q=",q)
    v=q.pop(0)
    print("\tpath+",path)
    if v not in path:
      path=path+[v]
      q=graph[v]+q
  return path
graph = {1:[2,5],2:[1,3,4],3:[2],4:[2],5:[1]}
print ('iterative dfs ', iterative_dfs(graph,3))
