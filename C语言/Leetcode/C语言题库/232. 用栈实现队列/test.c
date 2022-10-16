#define _CRT_SECURE_NO_WARNINGS 1 

// 请你仅使用两个栈实现先入先出队列。队列应当支持一般队列支持的所有操作（push、pop、peek、empty）：

typedef int STDataType;

typedef struct Stack
{
	STDataType* a;
	int top;
	int capacity;
}ST;

void StackInit(ST* ps);
void StackDestroy(ST* ps);
void StackPush(ST* ps, STDataType x);
void StackPop(ST* ps);
STDataType StackTop(ST* ps);
int StackSize(ST* ps);
bool StackEmpty(ST* ps);

void StackInit(ST* ps)
{
	assert(ps);
	ps->a = NULL;
	ps->top = 0;
	ps->capacity = 0;
}

void StackDestroy(ST* ps)
{
	assert(ps);
	free(ps->a);
	ps->a = NULL;
	ps->capacity = 0;
	ps->top = 0;
}

void StackPush(ST* ps, STDataType x)
{
	assert(ps);
	if (ps->top == ps->capacity)
	{
		int newcapacity = (ps->capacity == 0 ? 4 : ps->capacity * 2);
		STDataType* tmp = (STDataType*)realloc(ps->a, sizeof(STDataType) * newcapacity);
		if (tmp == NULL)
		{
			printf("realloc fail\n");
			exit(-1);
		}
		else
		{
			ps->a = tmp;
			ps->capacity = newcapacity;
		}
	}
	ps->a[ps->top] = x;
	ps->top++;
}

void StackPop(ST* ps)
{
	assert(ps);
	assert(!StackEmpty(ps));
	ps->top--;
}

STDataType StackTop(ST* ps)
{
	assert(ps);
	assert(!StackEmpty(ps));
	return ps->a[ps->top - 1];
}

int StackSize(ST* ps)
{
	assert(ps);
	return ps->top;
}

bool StackEmpty(ST* ps)
{
	assert(ps);
	return ps->top == 0;
}

typedef struct
{
	ST PushST;
	ST PopST;
} MyQueue;

MyQueue* myQueueCreate()
{
	MyQueue* q = (MyQueue*)malloc(sizeof(MyQueue));
	StackInit(&q->PushST);
	StackInit(&q->PopST);

	return q;
}

void myQueuePush(MyQueue* obj, int x)
{
	StackPush(&obj->PushST, x);
}

int myQueuePop(MyQueue* obj)
{
	// 如果PopST中没有数据，将PushST的数据导过去
	// popST中的数据就符合先进先出的顺序了
	if (StackEmpty(&obj->PopST))
	{
		while (!StackEmpty(&obj->PushST))
		{
			StackPush(&obj->PopST, StackTop(&obj->PushST));
			StackPop(&obj->PushST);
		}
	}

	// 有数据则直接从PopST中出数据
	int front = StackTop(&obj->PopST);
	StackPop(&obj->PopST);
	return front;
}

int myQueuePeek(MyQueue* obj)
{
	if (StackEmpty(&obj->PopST))
	{
		while (!StackEmpty(&obj->PushST))
		{
			StackPush(&obj->PopST, StackTop(&obj->PushST));
			StackPop(&obj->PushST);
		}
	}

	return StackTop(&obj->PopST);
}

bool myQueueEmpty(MyQueue* obj)
{
	return StackEmpty(&obj->PushST) && StackEmpty(&obj->PopST);
}

void myQueueFree(MyQueue* obj)
{
	StackDestroy(&obj->PushST);
	StackDestroy(&obj->PopST);

	free(obj);
}

/**
 * Your MyQueue struct will be instantiated and called as such:
 * MyQueue* obj = myQueueCreate();
 * myQueuePush(obj, x);

 * int param_2 = myQueuePop(obj);

 * int param_3 = myQueuePeek(obj);

 * bool param_4 = myQueueEmpty(obj);

 * myQueueFree(obj);
*/