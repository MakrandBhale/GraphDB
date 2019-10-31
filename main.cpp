#include <iostream>

using namespace std;
#include "Classes/Graph.hpp"
int main() {
    Graph<int> g;
    g.createNode("hello", 0);
    g.createNode("world", 1);
    g.connect((g.getNodeByKey("hello")),(g.getNodeByKey("world")));

    g.getAdjacencyList(g.getNodeByKey("hello"));
    return 0;
}