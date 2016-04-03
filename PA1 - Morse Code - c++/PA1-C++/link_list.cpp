// PA1 - Morse Data Code
// link_list.cpp
//
// Created by Yuancheng Zhang on 4/2/2016

#include <stdio.h>
#include "link_list.h"
#include "node.h"

Node * LinkList::head_ = 0;

LinkList::LinkList() {}

LinkList::~LinkList() {
	head_ = 0;
}

void LinkList::CreateLinkedList() {
	InsertNode(head_, 'A', 12);
	Node * node = head_;
	InsertNode(node, 'B', 2111); node = node->next;
	InsertNode(node, 'C', 2121); node = node->next;
	InsertNode(node, 'D', 211); node = node->next;
	InsertNode(node, 'E', 1); node = node->next;
	InsertNode(node, 'F', 1121); node = node->next;
	InsertNode(node, 'G', 221); node = node->next;
	InsertNode(node, 'H', 1111); node = node->next;
	InsertNode(node, 'I', 11); node = node->next;
	InsertNode(node, 'J', 1222); node = node->next;
	InsertNode(node, 'K', 212); node = node->next;
	InsertNode(node, 'L', 1211); node = node->next;
	InsertNode(node, 'M', 22); node = node->next;
	InsertNode(node, 'N', 21); node = node->next;
	InsertNode(node, 'O', 222); node = node->next;
	InsertNode(node, 'P', 1221); node = node->next;
	InsertNode(node, 'Q', 2212); node = node->next;
	InsertNode(node, 'R', 121); node = node->next;
	InsertNode(node, 'S', 111); node = node->next;
	InsertNode(node, 'T', 2); node = node->next; 
	InsertNode(node, 'U', 112); node = node->next;
	InsertNode(node, 'V', 1112); node = node->next;
	InsertNode(node, 'W', 122); node = node->next;
	InsertNode(node, 'X', 2112); node = node->next;
	InsertNode(node, 'Y', 2122); node = node->next;
	InsertNode(node, 'Z', 2211); node = node->next;
	
}

Node * & LinkList::GetListHead() {
	return head_;
}

void LinkList::InsertNode(Node * & node, const char key, const int morse) {
	if (!node) {
		node = new Node(key, morse);
		head_ = node;
	}
	else {
		Node * new_node = new Node(key, morse);
		new_node->next = node->next;
		new_node->prev = node;
		node->next = new_node;
	}
}

void LinkList::DeletNode() {

}

void LinkList::PrintList() {
	Node * node = GetListHead();
	while (node) {
		printf("%c, %d\n", node->GetKey(), node->GetMorse());
		node = node->next;
	}
}