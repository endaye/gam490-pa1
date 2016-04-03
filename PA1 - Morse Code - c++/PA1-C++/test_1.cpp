// PA1 - Morse Data Code
// test_1.cpp
//
// Created by Yuancheng Zhang on 4/2/2016

#include "link_list.h"
#include <stdio.h>

void test_1(LinkList * &link_list) 
{
	printf("Test 1: Insert data to a List\n");
	link_list = new LinkList();
	link_list->CreateLinkedList();
	link_list->PrintList();
}