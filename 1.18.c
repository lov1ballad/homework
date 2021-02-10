#define _CRT_SECURE_NO_WARNINGS 1
/*
����һ��ֻ���� '('��')'��'{'��'}'��'['��']'?���ַ��� s ���ж��ַ����Ƿ���Ч��

��Ч�ַ��������㣺

�����ű�������ͬ���͵������űպϡ�
�����ű�������ȷ��˳��պϡ�

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/valid-parentheses
����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע��������*/
#define StackElemType char

typedef struct LinkStackNode//����ڵ�
{
	StackElemType data;
	struct LinkStackNode* next;
}LinkStackNode;

typedef struct LinkStack
{
	LinkStackNode* head;
}LinkStack;

///////////////////////////////////////////
//��ջ��������

void LinkStackInit(LinkStack* pst);//��ʼ��
void LinkStackPush(LinkStack* pst, StackElemType x);//��ջ��ͷ�壩
void LinkStackShow(LinkStack* pst);//��ʾ��ջ
void LinkStackDestroy(LinkStack* pst);//����
void LinkStackPop(LinkStack* pst);//��ջ
StackElemType LinkStackTop(LinkStack* pst);//��ȡջ��Ԫ��

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