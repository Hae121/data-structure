#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
typedef struct {
	int midterm;
	int final;
}Score;
void printScore(Score* p) //2)
{
	printf("�߰���� ������ %d\n", p->midterm);
	printf("�б⸻��� ������ %d\n", p->final);
}
Score* biggerScore(Score* p1, Score* p2) //3)
{
	Score* temp;
	temp = (Score*)malloc(sizeof(Score));
	if (p1->midterm >= p2->midterm)
		temp->midterm = p1->midterm;
	else
		temp->midterm = p2->midterm;
	if (p1->final >= p2->final)
		temp->final = p1->final;
	else
		temp->final = p2->final;
	return temp;
}
Score* totalScore(Score* p1, Score* p2) //4)
{
	Score* temp;
	temp = (Score*)malloc(sizeof(Score));
	temp->midterm = p1->midterm + p2->midterm;
	temp->final = p1->final + p2->final;
	return temp;
}
Score* createScore(int m, int f) //5)
{
	Score* temp;
	temp = (Score*)malloc(sizeof(Score));
	temp->midterm = m;
	temp->final = f;
	return temp;

}

int main(void) {
	Score s1, s2; // ������ p1, p2��ſ� ����ü���� s1,s2
	Score* p3;
	//1)p1, p2�� Score�� �����ϱ� ���� �޸𸮸��Ҵ��ϰ� ���� �����Ѵ�.����(50, 100), (70, 70)
	s1.midterm = 50;
	s1.final = 100;
	s2.midterm = 70;
	s2.final = 70;


	printScore(&s1);
	printScore(&s2);
	printf("-----------------------------\n");
	printf("���� ������ ���� ����:\n");
	printScore(biggerScore(&s1, &s2));
	printf("-----------------------------\n");
	printf("�� ������ �� ��:\n");
	printScore(totalScore(&s1, &s2));
	printf("-----------------------------\n");
	p3 = createScore(100, 100);
	printScore(p3);

	
}