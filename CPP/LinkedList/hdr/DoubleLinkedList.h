#ifndef __DOUBLELINKEDLIST_H__
#define __DOUBLELINKEDLIST_H__

#include "LinkedList.h"
using namespace sy::list;

class DoubleLinkedList : public LinkedList
{
public:
    DoubleLinkedList();
    ~DoubleLinkedList();
    void InsertNodeAtEnd(int data);
    void RemoveNode(int index);

    // 추후에는 위 메서드들을 private으로 옮기고
    // std::list의 insert(), erase()메서드를 구현해보고 
    //[]연산자 오버로딩까지 해보자
};

#endif