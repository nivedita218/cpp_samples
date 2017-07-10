#include<iostream>
#include<cassert>

#include "LinkedList.h"
LinkedList::LinkedList():size(0),head(NULL) {}

LinkedList::~LinkedList() {}

void LinkedList::insert_beg(int data)
{
   std::shared_ptr<Node> newnode = std::make_shared<Node>() ;

    if (head == NULL)
    {
        head = newnode;
        head->data = data;
        size++;
    }
    else
    {
        newnode->data = data;
        newnode->next = std::move(head);
        head = std::move(newnode);
        size++;
    }
}

void LinkedList::insert_end(int data)
{
    auto temp = head;
    std::shared_ptr<Node> newnode = std::make_shared<Node>();

    if (head == NULL) {
        head = newnode;
        head->data = data;
        head->next = NULL;
        size++;
    } else {
        while(temp->next != NULL) {
            temp = temp->next;
        }
        newnode->data = data;
        newnode->next = NULL;
        temp->next = newnode;
        size++;
    }
}

void LinkedList::insert_pos(int pos, int data)
{
    assert((pos >0 || pos<=size));
    auto temp = head;
    std::shared_ptr<Node> newnode = std::make_shared<Node>();

    if (head == NULL) {
        head = newnode;
        head->data = data;
        head->next = NULL;
        size++;
    } else {
        for(auto i=1;i<pos-1;i++) {
            temp = temp->next;
        }
        newnode->data = data;
        newnode->next = temp->next;
        temp->next = newnode;
        size++;
    }
}

int LinkedList::delete_beg()
{
    int data;
    assert(size != 0);
    data = head->data;
    auto temp = std::move(head);
    head = std::move(temp->next);
    size--;
    return data;
}

int LinkedList::delete_end()
{
    int data;
    assert(size != 0);
    auto temp = head;
    while(temp->next->next != NULL)
        temp = temp->next;
    data = temp->next->data;
    temp->next = NULL;
    size--;
    return data;
}

int LinkedList::delete_pos(int pos)
{
    int data;
    assert(pos >0 || pos<=size);
    assert(size != 0);
    auto temp = head;
    for(auto i=1;i<pos-1;i++) {
        temp = temp->next;
    }
    data = temp->next->data;
    temp->next = temp->next->next;
    size--;

    return data;
}

int LinkedList::get_element_at(int pos)
{
    int data;
    assert(pos >0 || pos<=size);
    assert(size != 0);
    auto temp = head;
    for(auto i=1;i<pos;i++) {
        temp = temp->next;
    }
    return temp->data;
}


void LinkedList::print_contents()
{
    auto temp = head;
    std::cout<<"Contents:"<<std::endl;
    for(auto i = 0;i<size;i++)
    {
        std::cout<<temp->data<<std::endl;
        temp = temp->next;
    }
}
unsigned int LinkedList::getSize()
{
    return size;
}