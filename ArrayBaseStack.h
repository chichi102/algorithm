
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

void StackInit(Stack * pstack);	// 스택의 초기화 
								// 스택 생성 후 제일 먼저 호출되어야 하는 함수

int SIsEmpty(Stack* pstack);	// 스택이 비었는지 확인
								// 스택이 빈 경우 true(1), 그렇지 않은 경우 false(2)

void SPush(Stack* pstack, Data data); // 스택의 push 연산
									  // 스택의 데이터를 저장, 매개변수 Data로 전달된 값을 저장한다. 

Data SPop(Stack* pstack);			  // 스택의 pop 연산
									  // 마지막에 저장된 요소를 삭제한다. 삭제된 데이터는 반환되며 
									// 본 함수를 호출을 위해서는 데이터가 하나이상 존재함이 보장되어야 한다.

Data SPeek(Stack* pstack);			  //스택의 peek 연산
										// 마지막 요소를 반환하되 삭제는 하지 않는다.
										// 본 함수를 호출을 위해서는 데이터가 하나이상 존재함이 보장되어야 한다.


#endif