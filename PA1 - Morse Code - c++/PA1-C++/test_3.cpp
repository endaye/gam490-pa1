// PA1 - Morse Data Code
// test_3.cpp
//
// Created by Yuancheng Zhang on 4/3/2016

#include "linked_list.h"
#include <stdio.h>

void test_3(LinkedList * &linked_list)
{
	printf("Test 3: Sort the data\n");
	linked_list->SelectSort();
	linked_list->printAllList();
}