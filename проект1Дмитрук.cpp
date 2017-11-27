// проект1Дмитрук.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "stdio.h"
#include "windows.h"

using namespace std;

int main()
{
    double A, P, S;
    
	printf("input A: "); //abc
	scanf_s("%lf", &A);
	S = A*A;
	P = A * 4;
	printf("S = %lf\n", S);
	printf("P = %lf\n", P);


	system ("pause");
    return 0;
}

