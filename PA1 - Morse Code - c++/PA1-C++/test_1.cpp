// PA1 - Morse Data Code
// test_1.cpp
//
// Created by Yuancheng Zhang on 4/2/2016

#include "linked_list.h"
#include <stdio.h>

void test_1(LinkedList * &linked_list)
{
	printf("Test 1: Insert data to a List\n");
	linked_list = new LinkedList();
	linked_list->CreateLinkedList();
	linked_list->printAllList();
}