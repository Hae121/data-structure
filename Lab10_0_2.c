typedef struct person {
	char name[20];
	int midterm;
	int final;
} person;
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	person* sp = (person*)malloc(sizeof(person));

	printf("Enter student name: ");
	scanf("%s", sp->name); //5)

	printf("Enter midterm and final score: ");
	scanf("%d %d", &sp->midterm, &sp->final); //6)

	printf("\n이름\t중간\t학기말\n");
	printf("%s\t%d\t%d\n", sp->name, sp->midterm, sp->final); //7)
	free(sp);
}