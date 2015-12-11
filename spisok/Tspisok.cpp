#include "stdafx.h"
#include "Tspisok.h"
#include<iostream>

using namespace std;


Tspisok::Tspisok(void)
{
	first=0; // pflftv gecnjq cgbcjr
}


Tspisok::~Tspisok(void)
{
	elem* p=first;
	while (p!=0)
	{
		elem* del=p;
		p=p->next;
		delete del;
	}
}

void Tspisok::add(int n)
{
	if (first==0)
		first=new elem(n);
	else
	{
		elem* p=new elem(n);
		p->next=first;
		first = p;
	}
}

void Tspisok::print(void)
{
	for (elem*i=first;i!=0;i=i->next)//тот, кто был следующим становится текущим
	{
		cout<<i->num<<endl;
	}
}

int Tspisok::get(void)

{
	if (first==0)
		throw "empty";
	elem* p=first->next;
	int x=first->num;
	delete first;
	first = p;
	return x;
}

int Tspisok::peek()
{
	return first->num;
}

bool Tspisok::IsEmpty()
{
	return first==0;
}