// PA1 - Morse Data Code
// node.cpp
//
// Created by Yuancheng Zhang on 4/2/2016


#include "node.h"

//Node::~Node() 
//{
//
//}

Node::Node(char key, int morse)
	:prev(0), next(0), key_(key), morse_(morse) 
{}

const char Node::GetKey() 
{
	return this->key_;
}

const int Node::GetMorse() 
{
	return this->morse_;
}
