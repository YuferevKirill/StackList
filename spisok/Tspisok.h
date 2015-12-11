#pragma once
struct elem
{
	int num;
	elem* next;
	 
	elem(int n)
	{
		num=n;
		next=0;
	}
};

class Tspisok
{
	elem* first;
public:
	Tspisok(void);
	~Tspisok(void);
	void add(int);
	void print(void);
	int get(void);
	int peek();
	bool IsEmpty();
};



