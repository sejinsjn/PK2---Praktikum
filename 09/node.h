#ifndef NODE
#define NODE

template<typename T> struct node{
    const T *thing;
    node *next;
    node(T content) : thing{content}, next{nullptr} {};
    ~node() { delete next; };
};

#endif