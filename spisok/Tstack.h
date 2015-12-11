#pragma once
#include "Tspisok.h"

class Tstack:public Tspisok
{
public:
	Tstack(void);
	~Tstack(void);
	void push(int);
	int pop(void);
	int peek(void);
	bool IsEmpty();
};

