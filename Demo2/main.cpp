#include <iostream>
#include <cassert>
#include "LinkedList.h"

void test_insert_beg()
{
    std::cout<<"Testing insert beginning.."<<std::endl;
    LinkedList ll;
    int size = ll.getSize();
    ll.insert_beg(1);
    assert((size+1 == ll.getSize()));
    assert((ll.get_element_at(1)) == 1);
    ll.print_contents();
}

void test_insert_end()
{
    std::cout<<"Testing insert end.."<<std::endl;
    LinkedList ll;
    int size = ll.getSize();
    ll.insert_end(2);
    assert((size+1 == ll.getSize()));
    assert((ll.get_element_at(ll.getSize())) == 2);
    ll.print_contents();
}

void test_insert_pos()
{
    std::cout<<"Testing insert position.."<<std::endl;
    LinkedList ll;
    ll.insert_beg(1);
    ll.insert_end(3);
    int size = ll.getSize();
    ll.insert_pos(2,2);
    assert((size+1 == ll.getSize()));
    assert((ll.get_element_at(2)) == 2);
    ll.print_contents();
}

void test_delete_beg()
{
    std::cout<<"Testing delete beginning.."<<std::endl;
    LinkedList ll;
    int data;
    ll.insert_beg(1);
    ll.insert_end(2);
    int size = ll.getSize();
    data = ll.get_element_at(1);
    assert(ll.delete_beg()==data);
    assert(ll.getSize() ==size-1);
    ll.print_contents();
}

void test_delete_end()
{
    std::cout<<"Testing delete end.."<<std::endl;
    LinkedList ll;
    int data;
    ll.insert_beg(1);
    ll.insert_end(2);
    int size = ll.getSize();
    data = ll.get_element_at(ll.getSize());
    assert(ll.delete_end() == data);
    assert(ll.getSize() == (size-1));
    ll.print_contents();
}

void test_delete_pos()
{
    std::cout<<"Testing delete position.."<<std::endl;
    LinkedList ll;
    int data;
    ll.insert_beg(1);
    ll.insert_end(3);
    ll.insert_pos(2,2);
    int size = ll.getSize();
    data = ll.get_element_at(2);
    assert(ll.delete_pos(2) == data);
    assert(ll.getSize() == (size-1));
    ll.print_contents();
}

int main()
{
    LinkedList ll;
    test_insert_beg();
    test_insert_end();
    test_insert_pos();
    test_delete_beg();
    test_delete_end();
    test_delete_pos();
}


