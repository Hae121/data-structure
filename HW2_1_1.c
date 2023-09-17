#include <stdio.h>
#define MAX_STACK_SIZE 100 // �迭�� �̿��� ������ �������� ������ �ִ�
// ������ ���� Ÿ�� ����
typedef int element;
typedef struct {
	element data[MAX_STACK_SIZE];
	int top;
} StackType;
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
// ���� �ʱ�ȭ �Լ�
void init(StackType* s)
{
	s->top = -1;
}
// ���� ���� ���� �Լ�
int is_empty(StackType* s)
{
	return (s->top == -1);
}
// ��ȭ ���� ���� �Լ�
int is_full(StackType* s)
{
	return (s->top == (MAX_STACK_SIZE - 1));
}
// �����Լ�
void push(StackType* s, element item)
{
	if (is_full(s)) {
		fprintf(stderr, "���� ��ȭ ����\n");
		return;
	}
	else
		s->data[++(s->top)] = item;
}
// �����Լ�
element pop(StackType* s)
{
	if (is_empty(s)) {
		fprintf(stderr, "���� ���� ����\n");
		exit(1);
	}
	else
		return s->data[(s->top)--];
}
// ��ũ�Լ�
element peek(StackType* s)
{
	if (is_empty(s)) {
		fprintf(stderr, "���� ���� ����\n");
		exit(1);
	}
	else
		return s->data[s->top];
}
// ���Լ�
void main()
{
	StackType s;
	init(&s);
	push(&s, 1);
	push(&s, 2);
	push(&s, 3);
	printf("--------------\n");
	stack_print(&s);
	printf("--------------\n");

}