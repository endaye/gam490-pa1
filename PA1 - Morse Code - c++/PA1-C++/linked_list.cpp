// PA1 - Morse Data Code
// linked_list.cpp
//
// Created by Yuancheng Zhang on 4/2/2016

#include <stdio.h>
#include "linked_list.h"
#include "node.h"

Node * LinkedList::head_ = 0;

LinkedList::LinkedList() {}

LinkedList::~LinkedList()
{
	head_ = 0;
}

void LinkedList::CreateLinkedList()
{
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

Node * LinkedList::GetListHead()
{
	return head_;
}

void LinkedList::InsertNode(Node * & node, const char key, const int morse)
{
	if (!node)
	{
		node = new Node(key, morse);
		head_ = node;
	}
	else
	{
		Node * new_node = new Node(key, morse);
		new_node->next = node->next;
		new_node->prev = node;
		node->next = new_node;
	}
}

void LinkedList::DeletNode(const char key)
{
	Node * node = GetListHead();
	while (node)
	{
		if (node->GetLetter() == key)
		{
			if (node->prev && node->next)
			{
				// not the first node
				// not the last node
				node->prev->next = node->next;
				node->next->prev = node->prev;
			}
			else if (!node->prev && node->next)
			{
				// first node
				node->next->prev = 0;
				head_ = node->next;
			}
			else if (node->prev && !node->next)
			{
				// last node
				node->prev->next = 0;
			}
			else
			{
				// only one node
				head_ = 0;
			}
			delete node;
			break;
		}
		node = node->next;
	}
}

void LinkedList::SelectSort()
{
	Node * curr_node = GetListHead();
	if (curr_node && curr_node->next)
	{
		Node * new_list_head = 0;
		Node * new_list_tail = 0;
		Node * min_morse_node = curr_node;
		while (curr_node)
		{
			if (curr_node->GetMorse() < min_morse_node->GetMorse())
			{
				min_morse_node = curr_node;
			}
			curr_node = curr_node->next;
		}

		if (min_morse_node->prev && min_morse_node->next)
		{
			// not the first node
			// not the last node
			min_morse_node->prev->next = min_morse_node->next;
			min_morse_node->next->prev = min_morse_node->prev;
		}
		else if (!min_morse_node->prev && min_morse_node->next)
		{
			// first node
			min_morse_node->next->prev = 0;
			head_ = min_morse_node->next;
		}
		else if (min_morse_node->prev && !min_morse_node->next)
		{
			// last node
			min_morse_node->prev->next = 0;
		}
		else
		{
			// only one node
			head_ = 0;
		}
		new_list_head = min_morse_node;
		new_list_tail = min_morse_node;
		min_morse_node = curr_node = GetListHead();
		while (min_morse_node)
		{
			
			while (curr_node)
			{
				if (curr_node->GetMorse() < min_morse_node->GetMorse())
				{
					min_morse_node = curr_node;
				}
				curr_node = curr_node->next;
			}

			if (min_morse_node->prev && min_morse_node->next)
			{
				// not the first node
				// not the last node
				min_morse_node->prev->next = min_morse_node->next;
				min_morse_node->next->prev = min_morse_node->prev;
			}
			else if (!min_morse_node->prev && min_morse_node->next)
			{
				// first node
				min_morse_node->next->prev = 0;
				head_ = min_morse_node->next;
			}
			else if (min_morse_node->prev && !min_morse_node->next)
			{
				// last node
				min_morse_node->prev->next = 0;
			}
			else
			{
				// only one node
				head_ = 0;
			}
			new_list_tail->next = min_morse_node;
			min_morse_node->prev = new_list_tail;
			new_list_tail = min_morse_node;
			min_morse_node = curr_node = GetListHead();
		}
		head_ = new_list_head;
	}
}

void LinkedList::printAllList()
{
	Node * node = GetListHead();
	int count = 1;
	while (node)
	{
		//printf("#%02d: %c, %d\n", count, node->GetLetter(), node->GetMorse());
		printf("%c ", node->GetLetter());
		node = node->next;
		count++;
	}
	printf("\n\n");
}