#include <stdio.h>
#define MAX_STACK_SIZE 100 // 배열을 이용한 스택은 사이즈의 제한이 있다

// 스택을 위한 타입 정의

typedef struct {
	int num;
	char numString[100];
} element;
typedef struct {
	element data[MAX_STACK_SIZE];
	int top;
} StackType;
//스택 출력 함수
stack_print(StackType* s) {
	for (int i = s->top; i >= 0; i--) {
		printf("%d", s->data[i]);

		if (i == s->top) {
			printf("   top -> %d\n", s->top);
		}
		else {
			printf("\n");
		}
	}
}
// 스택 초기화 함수
void init(StackType* s)
{
	s->top = -1;
}
// 공백 상태 검출 함수
int is_empty(StackType* s)
{
	return (s->top == -1);
}
// 포화 상태 검출 함수
int is_full(StackType* s)
{
	return (s->top == (MAX_STACK_SIZE - 1));
}
// 삽입함수
void push(StackType* s, element item)
{
	if (is_full(s)) {
		fprintf(stderr, "스택 포화 에러\n");
		return;
	}
	else
		s->data[++(s->top)] = item;
}
// 삭제함수
element pop(StackType* s)
{
	if (is_empty(s)) {
		fprintf(stderr, "스택 공백 에러\n");
		exit(1);
	}
	else
		return s->data[(s->top)--];
}
// 피크함수
element peek(StackType* s)
{
	if (is_empty(s)) {
		fprintf(stderr, "스택 공백 에러\n");
		exit(1);
	}
	else
		return s->data[s->top];
}
// 주함수
void main()
{
	StackType s;
	init(&s);
	stack_print(&s);
	//10, "ten" 삽입
	push(&s, );
	//20, "tewnty" 삽입
	//30, "thirty" 삽입
	//40, "forty" 삽입
	//삭제
	//50, fifty 삽입
	//삭제
	//삭제
	//삭제
	printf("%d\n", is_empty(&s));
}