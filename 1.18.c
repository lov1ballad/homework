#define _CRT_SECURE_NO_WARNINGS 1
/*
给定一个只包括 '('，')'，'{'，'}'，'['，']'?的字符串 s ，判断字符串是否有效。

有效字符串需满足：

左括号必须用相同类型的右括号闭合。
左括号必须以正确的顺序闭合。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/valid-parentheses
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。*/
#define StackElemType char

typedef struct LinkStackNode//定义节点
{
	StackElemType data;
	struct LinkStackNode* next;
}LinkStackNode;

typedef struct LinkStack
{
	LinkStackNode* head;
}LinkStack;

///////////////////////////////////////////
//链栈函数声明

void LinkStackInit(LinkStack* pst);//初始化
void LinkStackPush(LinkStack* pst, StackElemType x);//入栈（头插）
void LinkStackShow(LinkStack* pst);//显示链栈
void LinkStackDestroy(LinkStack* pst);//销毁
void LinkStackPop(LinkStack* pst);//出栈
StackElemType LinkStackTop(LinkStack* pst);//获取栈顶元素

bool LinkStackIsEmpty(LinkStack* pst)
{
	return pst->head == NULL;
}

void LinkStackInit(LinkStack* pst)
{
	pst->head = NULL;
}

void LinkStackPush(LinkStack* pst, StackElemType x)
{
	assert(pst);
	LinkStackNode* s = (LinkStackNode*)malloc(sizeof(LinkStackNode));
	s->data = x;
	s->next = pst->head;
	pst->head = s;
}

void LinkStackPop(LinkStack* pst)
{
	assert(pst);
	if (pst->head != NULL)
	{
		LinkStackNode* p = pst->head;
		pst->head = p->next;
		free(p);
	}
}

void LinkStackDestroy(LinkStack* pst)
{
	assert(pst);
	while (pst->head != NULL)
	{
		LinkStackNode* p = pst->head;
		pst->head = p->next;
		free(p);
	}
}

StackElemType LinkStackTop(LinkStack* pst)
{
	assert(pst && pst->head != NULL);
	return pst->head->data;
}

bool isValid(char * s)
{
	if (s == NULL || *s == '\0')
		return true;
	LinkStack st;
	LinkStackInit(&st);

	while (*s != '\0')
	{
		if (*s == '(' || *s == '[' || *s == '{')
		{
			LinkStackPush(&st, *s);
		}
		else
		{
			if (LinkStackIsEmpty(&st))
				return false;
			char top_val = LinkStackTop(&st);
			if ((*s == ')' &&top_val != '(')
				|| (*s == ']' && top_val != '[')
				|| (*s == '}' && top_val != '{'))
				return false;
			LinkStackPop(&st);
		}
		s++;
	}
	if (LinkStackIsEmpty(&st))
		return true;
	return false;
}