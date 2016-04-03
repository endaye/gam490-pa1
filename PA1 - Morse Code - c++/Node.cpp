//
// PA1 - Morse Data Code
// Node.cpp
//
// Created by Yuancheng Zhang on 4/2/2016


#include "Node.h"

Node::Node(const char key, const int morse)
	:key_(key), morse_(morse)
{

}

const char Node::GetKey()
{
	return this->key_;
}

const int Node::GetMorse()
{
	return this->morse_;
}
