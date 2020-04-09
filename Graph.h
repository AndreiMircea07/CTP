//
// Created by Ciprian-PC on 5/24/2019.
//

#ifndef BILETECTP_GRAPH_H
#define BILETECTP_GRAPH_H

#include <iostream>
#include <algorithm>
#include <list>
#include <set>
#include <vector>

#define INF 0x3f3f3f3f


// This class represents a directed graph using
// adjacency list representation
class Graph
{
    int V;    // No. of vertices

    // In a weighted graph, we need to store vertex
    // and weight pair for every edge
    std::list< std::pair<int, int> > *adj;

public:
    explicit Graph(int V);  // Constructor

    // function to add an edge to graph
    void addEdge(int u, int v, int w);

    // prints shortest path from s
    std::vector<int> shortestPath(int s);
};


#endif //BILETECTP_GRAPH_H
