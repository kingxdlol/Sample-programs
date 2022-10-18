class Graph:
    def __init__(self,vertices):
        self.vertices=vertices
        self.graph=[[] for i in range(vertices)]

    def addEdge(self,u,v):
        self.graph[u].append(v)

    def dfs(self,s):
        visited=[False]*self.vertices
        self.dfsUtil(s,visited)

    def dfsUtil(self,s,visited):
        visited[s]=True
        print(s,end=" ")
        for i in self.graph[s]:
            if visited[i]==False:
                self.dfsUtil(i,visited)

if __name__=="__main__":
    g=Graph(4)
    g.addEdge(0,1)
    g.addEdge(0,2)
    g.addEdge(1,2)
    g.addEdge(2,0)
    g.addEdge(2,3)
    g.addEdge(3,3)
    g.dfs(2)

