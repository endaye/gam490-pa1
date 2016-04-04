// PA1 - Morse Data Code
// linked_list.h
//
// Created by Yuancheng Zhang on 4/2/2016


#ifndef LINKED_LIST_H
#define LINKED_LIST_H

// forward declaration - always try to do this before including a header, in a header (Keenan)
class Node;

class LinkedList 
{
public:
	LinkedList();
	~LinkedList();

	static void CreateLinkedList();
	static Node * GetListHead();
	static void InsertNode(Node * &, const char, const int);
	static void DeletNode(const char);
	static void SelectSort();
	static void printAllList();
	
private:
	static Node * head_;
};

#endif