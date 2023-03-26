#include "List.h"

void Random_List1(pNode& list, int t)
{
	list = new Node;

	list->data = -100 + rand() % 1000;
	list->next = 0;
	list->prev = 0;

	for (int i(0); i < t-1; ++i)
		Push_First1(list, -10 + rand() % 1000);
}

void Random_List2(pNode2& list, int t)
{
	list = new Node2;

	list->data2 = -10 + rand() % 1000;
	list->next2 = 0;
	list->prev2 = 0;

	for (int i(0); i < t-1; ++i)
		Push_First2(list, -100 + rand() % 1000);
}

void Push_First1(pNode& p, int elem)
{
	pNode q = new Node;
	q->data = elem;
	q->next = p;
	q->prev = 0;
	p->prev = q;
	p = q;
}

void Push_First2(pNode2& p, int elem)
{
	pNode2 q = new Node2;
	q->data2 = elem;
	q->next2 = p;
	q->prev2 = 0;
	p->prev2 = q;
	p = q;
}

pNode Search_Max(pNode head)
{
	pNode cur = head;
	pNode Max_pos = head;
	int Max = head->data;
	while (cur)
	{
		if (cur->data > Max)
		{
			Max = cur->data;
			Max_pos = cur;
		} cur = cur->next;
	} return Max_pos;
}

void print1(pNode p)
{
	while (p)
	{
		cout << p->data << " ";
		p = p->next;
	}
}

void Print_Lists(pNode p, pNode2 q)
{
	cout << "1-й список: ";
	while (p)
	{
		cout << p->data << " ";
		p = p->next;
	}
	cout << "\n\n2-й список: ";
	while (q)
	{
		cout << q->data2 << " ";
		q = q->next2;
	}
}

void Add_After_Max(pNode Max_pos, pNode list, pNode2 list2)
{
	pNode cur = Max_pos;
	while (list2)
	{
		Push(cur, list2->data2);
		cur = cur->next;
		list2 = list2->next2;
	}
}

void Push(pNode p, int elem)
{
	pNode q = new Node;
	q->data = elem;
	q->prev = p;
	q->next = p->next;
	p->next = q;
}

void Delete_List2(pNode2 list2)
{
	if (Empty2(list2))
	{
		pNode2 pn = list2->next2;
		pNode2 temp = 0;
		while (pn)
		{
			temp = pn;
			pn = pn->next2;
			delete temp;
		}
		list2 = 0;
	}
}

bool Empty1(pNode list)
{
	return list;
}

bool Empty2(pNode2 list2)
{
	return list2;
}