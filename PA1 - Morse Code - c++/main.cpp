//
// PA1 - Morse Data Code
// main.cpp
//
// Created by Yuancheng Zhang on 4/2/2016

#include <stdio.h>
#include "Node.h"
#include "LinkList.h"



void initList(LinkList *&);
void addNode(LinkList *&, const char, const int);
void removeNode();
void printNode(LinkList *);

void initList(LinkList * &head)
{
	LinkList *node = 0;
	addNode(node, 'A', 12); 
	head = node; 
	addNode(node, 'B', 2111); node = node->next;
	addNode(node, 'C', 2121); node = node->next;
	addNode(node, 'D', 211); node = node->next;
	addNode(node, 'E', 1); node = node->next;
	addNode(node, 'F', 1121); node = node->next;
	addNode(node, 'G', 221); node = node->next;
	addNode(node, 'H', 1111); node = node->next;
}

void addNode(LinkList * &prev, const char key, const int morse)
{
	LinkList *node;
	node = new LinkList;
	node->key = key;
	node->morse = morse;
	if (!prev)
	{
		node->next = 0;
		node->prev = 0;
		prev = node;
	}
	else
	{
		node->next = prev->next;
		node->prev = prev;
		prev->next = node;
	}
}

void removeNode()
{

}

void printNode(LinkList * head)
{
	LinkList *node = head;
	int cnt = 1;
	while (node)
	{
		printf("#%02d: %c, %d \n", cnt, node->key, node->morse);
		node = node->next;
		cnt++;
	}
}

int main()
{
	LinkList *headList = 0;
	initList(headList);
	printNode(headList);
	return 0;
}