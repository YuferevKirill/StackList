// spisok.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>

#include "Tstack.h"
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	Tstack stack;
	stack.push(1);
	stack.push(2);
	stack.push(3);
	//stack.print();
	int x=stack.peek();//берем первый элемент
	cout<<"x="<<x<<endl;

	while (!stack.IsEmpty())
	{
		cout<<stack.pop()<<endl;
	}

	return 0;
}

