#include<stdio.h>
#include<windows.h>
#pragma execution_character_set("utf-8")
int main()
{
	SetConsoleOutputCP(65001);
	int age = 18;
	float height = 160;
	double pi=3.1415926;
	char blood ='AB';
	printf("年龄:%d\n",age);
	printf("身高:%2f\n",height);
	printf("圆周率:%2f\n",pi);
	printf("血型:%c\n",blood);
	return 0;


}