#define _CRT_SECURE_NO_WARNINGS 1 

/*

给定一个只包括 '('，')'，'{'，'}'，'['，']' 的字符串 s ，判断字符串是否有效。

有效字符串需满足：

左括号必须用相同类型的右括号闭合。
左括号必须以正确的顺序闭合。
每个右括号都有一个对应的相同类型的左括号。
 
示例 1：

输入：s = "()"
输出：true
示例 2：

输入：s = "()[]{}"
输出：true
示例 3：

输入：s = "(]"
输出：false

*/

typedef char STDataType;

typedef struct Stack
{
	STDataType* a;
	int top;
	int capacity;
}ST;

// 初始化
void StackInit(ST* ps);

// 销毁栈
void StackDestroy(ST* ps);

// 入栈
void StackPush(ST* ps, STDataType x);

// 出栈
void StackPop(ST* ps);

// 取栈顶的数据
STDataType StackTop(ST* ps);

// 计算栈的大小
int StackSize(ST* ps);

// 判断栈中是否有元素
bool StackEmpty(ST* ps);

// 初始化
void StackInit(ST* ps)
{
	assert(ps);
	ps->a = NULL;
	ps->top = 0;// ps->top = -1;
	// top为0，代表指向栈顶的下一个元素
	// top为1，代表指向栈顶
	ps->capacity = 0;
}

// 销毁栈
void StackDestroy(ST* ps)
{
	assert(ps);
	free(ps->a);
	ps->a = NULL;
	ps->capacity = 0;
	ps->top = 0;
}

// 入栈
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

// 出栈
void StackPop(ST* ps)
{
	assert(ps);

	assert(!StackEmpty(ps));
	ps->top--;
}

// 取栈顶的数据
STDataType StackTop(ST* ps)
{
	assert(ps);
	assert(!StackEmpty(ps));

	return ps->a[ps->top - 1];
}

// 计算栈的大小
int StackSize(ST* ps)
{
	assert(ps);

	return ps->top;
}

// 判断栈中是否有元素
bool StackEmpty(ST* ps)
{
	assert(ps);

	return ps->top == 0;
	// 栈中无元素
	// 返回真，！StackEmpty为假
	// 栈中有元素
	// 返回假，! StackEmpty为真
}

bool isValid(char* s)
{
	ST st;
	StackInit(&st);

	while (*s)
	{
		if ((*s == '(') || (*s == '[') || (*s == '{'))
		{
			StackPush(&st, *s);
			s++;
		}
		else
		{
			// 栈中无元素，说明没有左括号与有括号匹配
			if (StackEmpty(&st))
			{
				StackDestroy(&st);
				return false;
			}

			STDataType top = StackTop(&st);
			StackPop(&st);

			if ((*s == ')' && top != '(')
				|| (*s == ']' && top != '[')
				|| (*s == '}' && top != '{'))
			{
				StackDestroy(&st);
				return false;
			}
			else
			{
				s++;
			}
		}
	}
	// 栈中有元素，说明左括号未完全匹配
	// 返回假
	bool ans = StackEmpty(&st);
	StackDestroy(&st);
	return ans;
}