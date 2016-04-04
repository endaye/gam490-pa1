// PA1 - Morse Data Code
// node.h
//
// Created by Yuancheng Zhang on 4/2/2016

#ifndef NODE_H
#define NODE_H

class Node 
{
public:
	Node(const char, const int);
	const char	GetLetter();
	const int	GetMorse();

	Node * next;
	Node * prev;
	//~Node();
private:
	Node();
	const char	letter_;
	const int	morse_;
};

#endif