#ifndef NODE_H
#define NODE_H
#include <vector>
//That's the data structure for storing a single search node.
//You MUST store all the intermediate computations occuring during the search
//incapsulated to Nodes (so NO separate arrays of g-values etc.)

struct Node
{
    int     i, j; //grid cell coordinates
    double  f, g, h; //f-, g- and h-values of the search node
    Node    *parent; //backpointer to the predecessor node (e.g. the node which g-value was used to set the g-velue of the current node)
    Node (std::pair<int, int> &p);
    Node (int _i, int _j, int _g = 0, int _h = 0, int _f = 0, Node *_parent = nullptr);
    Node up();
    Node down();
    Node left();
    Node right();
    Node upleft();
    Node upright();
    Node downleft();
    Node downright();
};
#endif
