#pragma once

#include <iostream>
#include <Windows.h>

struct Node
{
	int data;
	Node* next;
	Node* prev;
};

struct Node2
{
	int data2;
	Node2* next2;
	Node2* prev2;
};

using pNode = Node*;
using pNode2 = Node2*;

using std::cin;
using std::cout;

void Random_List1(pNode& list, int t);
void Random_List2(pNode2& list, int t);
void Push(pNode p, int elem);
void Push_First1(pNode& p, int elem);
void Push_First2(pNode2& p, int elem);
pNode Search_Max(pNode head);
void Print_Lists(pNode p, pNode2 q);
void print1(pNode p);
void Add_After_Max(pNode Max_pos, pNode list, pNode2 list2);
void Delete_List2(pNode2 list2);
bool Empty1(pNode list);
bool Empty2(pNode2 list2);