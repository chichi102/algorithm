
#ifndef __AB_STACK_H__
#define __AB_STACK_H__

#define TRUE 1
#define FALSE 0
#define STACK_LEN 100

typedef int Data;

typedef struct _arrayStack
{
	Data stackArr[STACK_LEN];
	int topIndex;
} ArrayStack;

typedef ArrayStack Stack;

void StackInit(Stack * pstack);	// ������ �ʱ�ȭ 
								// ���� ���� �� ���� ���� ȣ��Ǿ�� �ϴ� �Լ�

int SIsEmpty(Stack* pstack);	// ������ ������� Ȯ��
								// ������ �� ��� true(1), �׷��� ���� ��� false(2)

void SPush(Stack* pstack, Data data); // ������ push ����
									  // ������ �����͸� ����, �Ű����� Data�� ���޵� ���� �����Ѵ�. 

Data SPop(Stack* pstack);			  // ������ pop ����
									  // �������� ����� ��Ҹ� �����Ѵ�. ������ �����ʹ� ��ȯ�Ǹ� 
									// �� �Լ��� ȣ���� ���ؼ��� �����Ͱ� �ϳ��̻� �������� ����Ǿ�� �Ѵ�.

Data SPeek(Stack* pstack);			  //������ peek ����
										// ������ ��Ҹ� ��ȯ�ϵ� ������ ���� �ʴ´�.
										// �� �Լ��� ȣ���� ���ؼ��� �����Ͱ� �ϳ��̻� �������� ����Ǿ�� �Ѵ�.


#endif