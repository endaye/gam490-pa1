// PA1 - Morse Data Code
// node.h
//
// Created by Yuancheng Zhang on 4/2/2016

#ifndef NODE_H
#define NODE_H

class Node {
public:
	Node(const char, const int);
	Node * GetNext();
	Node * GetPrev();
	const char	GetKey();
	const int	GetMorse();

	Node * next;
	Node * prev;
private:
	Node();
	~Node();
	const char	key_;
	const int	morse_;

};

#endif