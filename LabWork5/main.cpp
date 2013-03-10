#include <iostream>
#include <string.h>
#include <time.h>
using namespace std;

struct Stack
{
	enum {EMPTY = -1, FULL = 10};
	char st[FULL + 1];
	int top;

	Stack();

	void Push(char c); 
	char Pop();        
	void Clear();    
	bool IsEmpty();    
	bool IsFull();     
	int GetCount();    
};


Stack::Stack()
{
	// Изначально стек пуст
	top = EMPTY;
}

void Stack::Clear()
{
	top = EMPTY;
}

bool Stack::IsEmpty()
{
	return top == EMPTY;
}

bool Stack::IsFull()
{
	return top == FULL;
}

int Stack::GetCount()
{
	return top + 1;
}

void Stack::Push(char c)
{
	if(!IsFull())
		st[++top] = c;
}

char Stack::Pop()
{
	if(!IsEmpty())
		return st[top--];
	else
		return 0;
}

void main()
{
	srand(time(0));
	Stack ST;
	char c;
	// пока стек не заполнится
	while(!ST.IsFull()){
        c=rand()%4+2;
		ST.Push(c);
	}
	// пока стек не освободится
	while(c=ST.Pop()){
       		cout<<c<<" ";
	}
	cout<<"\n\n";
}

