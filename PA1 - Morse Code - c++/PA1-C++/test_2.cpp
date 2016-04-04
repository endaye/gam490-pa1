// PA1 - Morse Data Code
// test_2.cpp
//
// Created by Yuancheng Zhang on 4/3/2016

#include "linked_list.h"
#include <stdio.h>

void test_2(LinkedList * &linked_list)
{
	printf("Test 2: Find and delete nodes of a List\n");
	linked_list->DeletNode('F');
	linked_list->DeletNode('R');
	linked_list->DeletNode('B');
	linked_list->DeletNode('Z');
	linked_list->DeletNode('A');
	linked_list->DeletNode('M');
	linked_list->DeletNode('G');
	linked_list->DeletNode('R');
	linked_list->DeletNode('C');
	linked_list->DeletNode('Q');
	linked_list->DeletNode('Y');
	linked_list->DeletNode('C');
	linked_list->DeletNode('N');
	linked_list->printAllList();
}