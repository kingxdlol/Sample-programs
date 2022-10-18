
class Graph:
    def __init__(self):
        self.nodes = []
        self.edges = {}
        self.distances = {}

    def add_node(self, value):
        self.nodes.append(value)
        self.edges[value] = []

    def add_edge(self, from_node, to_node, distance):
        self.edges[from_node].append(to_node)
        self.edges[to_node].append(from_node)
        self.distances[(from_node, to_node)] = distance
        self.distances[(to_node, from_node)] = distance

def bfs(graph, initial):
    visited = {initial: 0}
    path = {}

    nodes = [initial]

    while nodes:
        current_node = nodes.pop(0)
        current_distance = visited[current_node]

        for neighbour in graph.edges[current_node]:
            if neighbour not in visited:
                visited[neighbour] = current_distance + graph.distances[(current_node, neighbour)]
                path[neighbour] = current_node
                nodes.append(neighbour)

    return visited, path

if __name__ == "__main__":
    g = Graph()
    g.add_node("a")
    g.add_node("b")
    g.add_node("c")
    g.add_node("d")
    g.add_node("e")
    g.add_node("f")
    g.add_node("g")
    g.add_node("h")
    g.add_node("i")
    g.add_node("j")
    g.add_edge("a", "b", 1)
    g.add_edge("a", "c", 1)
    g.add_edge("a", "d", 1)
    g.add_edge("b", "e", 1)
    g.add_edge("b", "f", 1)
    g.add_edge("c", "g", 1)
    g.add_edge("c", "h", 1)
    g.add_edge("d", "i", 1)
    g.add_edge("d", "j", 1)

    print(bfs(g, "a"))
