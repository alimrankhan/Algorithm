def bfs(li,at):
	if(not(visited[at])):
		visited[at]= True
		ans.append(at)
		for x in li[at]:
			if(not(visited[x])):
				bfs(li, x)
	return ans
ans=[]
V= 4
visited= [False]*V
adj= [[]for x in range(V)]
adj[0].append(1)
adj[0].append(2)
adj[1].append(3)

print(bfs(adj,0))
