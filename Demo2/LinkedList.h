#ifndef _LINKEDLIST_NODE_H
#define _LINKEDLIST_NODE_H

#include <memory>

//template <class T>
struct Node
{
    std::shared_ptr<Node> next;
    int data;
};
class LinkedList
{
private:
    std::shared_ptr<Node> head;
    unsigned int size;
public:
    LinkedList();
    ~LinkedList();
    void insert_beg(int data);
    void insert_pos(int pos,int data);
    void insert_end(int data);
    int delete_beg();
    int delete_end();
    int delete_pos(int pos);
    int get_element_at(int pos);
    void print_contents();
    unsigned int getSize();
};
#endif