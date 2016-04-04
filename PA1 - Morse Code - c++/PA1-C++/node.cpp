// PA1 - Morse Data Code
// node.cpp
//
// Created by Yuancheng Zhang on 4/2/2016


#include "node.h"

//Node::~Node() 
//{
//
//}

Node::Node(char letter, int morse)
	:prev(0), next(0), letter_(letter), morse_(morse)
{}

const char Node::GetLetter() 
{
	return this->letter_;
}

const int Node::GetMorse() 
{
	return this->morse_;
}
