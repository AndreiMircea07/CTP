//
// Created by Ciprian-PC on 5/27/2019.
//

#include "Graph.h"

// Allocates memory for adjacency list
Graph::Graph(int V)
{
    this->V = V;
    this->adj = new std::list< std::pair<int, int> >[V];
}

void Graph::addEdge(int u, int v, int w)
{
    this->adj[u].emplace_back(std::make_pair(v, w));
    this->adj[v].emplace_back(std::make_pair(u, w));
}

// Prints shortest paths from src to all other vertices
std::vector<int> Graph::shortestPath(int src) {
    // Create a set to store vertices that are being
    // prerocessed
    std::set < std::pair<int, int>> setds;

    // Create a vector for distances and initialize all
    // distances as infinite (INF)
    std::vector<int> dist(V, INF);

    // Insert source itself in Set and initialize its
    // distance as 0.
    setds.insert(std::make_pair(0, src));
    dist[src] = 0;

    /* Looping till all shortest distance are finalized
       then setds will become empty */
    while (!setds.empty()) {
        // The first vertex in Set is the minimum distance
        // vertex, extract it from set.
        std::pair<int, int> tmp = *(setds.begin());
        setds.erase(setds.begin());

        // vertex label is stored in second of pair (it
        // has to be done this way to keep the vertices
        // sorted distance (distance must be first item
        // in pair)
        int u = tmp.second;

        // 'i' is used to get all adjacent vertices of a vertex
        std::list < std::pair < int, int > > ::iterator
                i;
        for (i = adj[u].begin(); i != adj[u].end(); ++i) {
            // Get vertex label and weight of current adjacent
            // of u.
            int v = (*i).first;
            int weight = (*i).second;

            //  If there is shorter path to v through u.
            if (dist[v] > dist[u] + weight) {
                /*  If distance of v is not INF then it must be in
                    our set, so removing it and inserting again
                    with updated less distance.
                    Note : We extract only those vertices from Set
                    for which distance is finalized. So for them,
                    we would never reach here.  */
                if (dist[v] != INF)
                    setds.erase(setds.find(std::make_pair(dist[v], v)));

                // Updating distance of v
                dist[v] = dist[u] + weight;
                setds.insert(std::make_pair(dist[v], v));
            }
        }
    }
    return dist;
}