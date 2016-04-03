// PA1 - Morse Data Code
// link_list.h
//
// Created by Yuancheng Zhang on 4/2/2016


#ifndef LINK_LIST_H
#define LINK_LIST_H

// forward declaration - always try to do this before including a header, in a header (Keenan)
class Node;

class LinkList 
{
public:
	LinkList();
	~LinkList();

	static void CreateLinkedList();
	static Node * GetListHead();
	static void InsertNode(Node * &, const char, const int);
	static void DeletNode(const char);
	static void SelectSort();
	static void PrintList();
	
private:
	static Node * head_;
};

#endif