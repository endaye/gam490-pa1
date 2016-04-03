// PA1 - Morse Data Code
// test_3.cpp
//
// Created by Yuancheng Zhang on 4/3/2016

#include "link_list.h"
#include <stdio.h>

void test_3(LinkList * &link_list)
{
	printf("Test 3: Sort the data\n");
	link_list->SelectSort();
	link_list->PrintList();
}