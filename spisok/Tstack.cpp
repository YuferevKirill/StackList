#include "stdafx.h"
#include "Tstack.h"


Tstack::Tstack(void):Tspisok()
{
}


Tstack::~Tstack(void)
{
}

void Tstack::push(int n)
{
	add(n);
}

int Tstack::pop(void)
{
	return get();
}

int Tstack::peek(void)
{
	return Tspisok::peek();
}

bool Tstack::IsEmpty()
{
	return Tspisok::IsEmpty();
}