// PA1 - Morse Data Code
// test_2.cpp
//
// Created by Yuancheng Zhang on 4/3/2016

#include "link_list.h"
#include <stdio.h>

void test_2(LinkList * &link_list)
{
	printf("Test 2: Find and delete nodes of a List\n");
	link_list->DeletNode('F');
	link_list->DeletNode('R');
	link_list->DeletNode('B');
	link_list->DeletNode('Z');
	link_list->DeletNode('A');
	link_list->DeletNode('M');
	link_list->DeletNode('G');
	link_list->DeletNode('R');
	link_list->DeletNode('C');
	link_list->DeletNode('Q');
	link_list->DeletNode('Y');
	link_list->DeletNode('C');
	link_list->DeletNode('N');
	link_list->PrintList();
}