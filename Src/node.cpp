#include "node.h"


Node::Node(std::pair<int, int> &p){
    i = p.first;
    j = p.second;
    f = 0;
    g = 0;
    h = 0;
}


Node::Node(int _i, int _j, int _g = 0, int _h = 0, int _f = 0, Node *_parent = nullptr){
    i = _i;
    j = _j;
    f = _f;
    g = _g;
    h = _h;
    *parent = *_parent;
}

Node Node::up() {
    Node n
    return Node(i = i, j = j + 1, g = g + 1);
};
Node Node::down() {
    return Node( i =i, j = j-1, g = g+1);
};
Node Node::left() {
    return Node(i = i - 1, j = j, g = g+1);
};
Node Node::right() {
    return Node(i = i + 1, j = j, g = g+1);
};
Node Node::upleft() {
    return Node(i = i - 1, j = j+1, g = g+1);
};
Node Node::upright() {
    return Node(i = i + 1, j = j+1, g = g+1);
};
Node Node::downleft() {
    return Node(i = i - 1, j = j-1, g = g+1);
};
Node Node::downright() {
    return Node(i = i +1, j = j-1, g = g+1);
};