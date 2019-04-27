// PhuongTrinh.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

int main()
{
	int n, s, m;
	const char vc = 236;
	int x=NULL;
	int a = NULL, b = NULL, c = NULL, d = NULL, e = NULL;
	printf("\n1: y = ax + b");
	printf("\n2: y = ax^2 + bx + c");
	printf("\n3: y = ax^3 + bx^2 + cx + d");
	printf("\n4: y = ax^4 + bx^2 + c");
	printf("\n5: y = (ax + b)/(cx + d)");
	printf("\n6: y = (ax^2 + bx + c)/(dx + e)");
	printf("\nChon dang pt can tinh: ");
	scanf_s("%d", &n);
	switch (n)
	{
	case 1:
		printf("\nNhap a: ");
		scanf_s("%d", &a);
		printf("\nNhap b: ");
		scanf_s("%d", &b);
		printf("\n1: x->-%c\n2: x->%c\n3: x-> so co dinh: ", vc, vc);
		scanf_s("%d", &m);
		switch (m)
		{
		case 1:
			if (a < 0)
			{
				printf("\nLim cua pt la: %c", vc);
			}
			else if (a > 0)
			{
				printf("\nLim cua pt la: -%c", vc);
			}
			else
			{
				s = b;
				printf("\nLim cua pt la: %d", s);
			}
			break;
		case 2:
			if (a < 0)
			{
				printf("\nLim cua pt la: -%c", vc);
			}
			else if (a > 0)
			{
				printf("\nLim cua pt la: %c", vc);
			}
			else
			{
				s = b;
				printf("\nLim cua pt la: %d", s);
			}
			break;
		case 3:
			printf("\nNhap x: ");
			scanf_s("%d", &x);
			s = a * x + b;
			printf("\nLim cua pt la: %d", s);
			break;
		}
		break;
	case 2:
		printf("\nNhap a: ");
		scanf_s("%d", &a);
		printf("\nNhap b: ");
		scanf_s("%d", &b);
		printf("\nNhap c: ");
		scanf_s("%d", &c);
		printf("\n1: x->-%c\n2: x->%c\n3: x-> so co dinh: ", vc, vc);
		scanf_s("%d", &m);
		switch (m)
		{
		case 1:
			if (a < 0)
			{
				printf("\nLim cua pt la: -%c", vc);
			}
			else if (a > 0)
			{
				printf("\nLim cua pt la: %c", vc);
			}
			else if(a==0&&b<0)
			{
				printf("\nLim cua pt la: %c", vc);
			}
			else if (a == 0 && b > 0)
			{
				printf("\nLim cua pt la: -%c", vc);
			}
			else
			{
				s = c;
				printf("\nLim cua pt la: %d", s);
			}
			break;
		case 2:
			if (a < 0)
			{
				printf("\nLim cua pt la: -%c", vc);
			}
			else if (a > 0)
			{
				printf("\nLim cua pt la: %c", vc);
			}
			else if (a == 0 && b < 0)
			{
				printf("\nLim cua pt la: -%c", vc);
			}
			else if (a == 0 && b > 0)
			{
				printf("\nLim cua pt la: %c", vc);
			}
			else
			{
				s = c;
				printf("\nLim cua pt la: %d", s);
			}
			break;
		case 3:
			printf("\nNhap x: ");
			scanf_s("%d", &x);
			s = a * x*x + b * x + c;
			printf("\nLim cua pt la: %d", s);
			break;
		}
		break;
	case 3:
		printf("\nNhap a: ");
		scanf_s("%d", &a);
		printf("\nNhap b: ");
		scanf_s("%d", &b);
		printf("\nNhap c: ");
		scanf_s("%d", &c);
		printf("\nNhap d: ");
		scanf_s("%d", &d);
		printf("\n1: x->-%c\n2: x->%c\n3: x-> so co dinh: ", vc, vc);
		scanf_s("%d", &m);
		switch (m)
		{
		case 1:
			if ((a < 0)|| (a == 0 && b == 0 && c < 0))
			{
				printf("\nLim cua pt la: %c", vc);
			}
			else if ((a > 0)|| a == 0 && b == 0 && c > 0)
			{
				printf("\nLim cua pt la: -%c", vc);
			}
			else if (a == 0 && b < 0)
			{
				printf("\nLim cua pt la: -%c", vc);
			}
			else if (a == 0 && b > 0)
			{
				printf("\nLim cua pt la: %c", vc);
			}
			else
			{
				s = d;
				printf("\nLim cua pt la: %d", s);
			}
			break;
		case 2:
			if ((a < 0) || (a == 0 && b == 0 && c < 0))
			{
				printf("\nLim cua pt la: -%c", vc);
			}
			else if ((a > 0) || a == 0 && b == 0 && c > 0)
			{
				printf("\nLim cua pt la: %c", vc);
			}
			else if (a == 0 && b < 0)
			{
				printf("\nLim cua pt la: %c", vc);
			}
			else if (a == 0 && b > 0)
			{
				printf("\nLim cua pt la: -%c", vc);
			}
			else
			{
				s = d;
				printf("\nLim cua pt la: %d", s);
			}
			break;
		case 3:
			printf("\nNhap x: ");
			scanf_s("%d", &x);
			s = a * x*x*x + b * x*x + c * x + d;
			printf("\nLim cua pt la: %d", s);
			break;
		}
		break;
	case 4:
		printf("\nNhap a: ");
		scanf_s("%d", &a);
		printf("\nNhap b: ");
		scanf_s("%d", &b);
		printf("\nNhap c: ");
		scanf_s("%d", &c);
		printf("\n1: x->-%c\n2: x->%c\n3: x-> so co dinh: ", vc, vc);
		scanf_s("%d", &m);
		switch (m)
		{
		case 1:
			if (a < 0)
			{
				printf("\nLim cua pt la: -%c", vc);
			}
			else if (a > 0)
			{
				printf("\nLim cua pt la: %c", vc);
			}
			else if (a == 0 && b < 0)
			{
				printf("\nLim cua pt la: -%c", vc);
			}
			else if (a == 0 && b > 0)
			{
				printf("\nLim cua pt la: %c", vc);
			}
			else
			{
				s = c;
				printf("\nLim cua pt la: %d", s);
			}
			break;
		case 2:
			if (a < 0)
			{
				printf("\nLim cua pt la: -%c", vc);
			}
			else if (a > 0)
			{
				printf("\nLim cua pt la: %c", vc);
			}
			else if (a == 0 && b < 0)
			{
				printf("\nLim cua pt la: -%c", vc);
			}
			else if (a == 0 && b > 0)
			{
				printf("\nLim cua pt la: %c", vc);
			}
			else
			{
				s = c;
				printf("\nLim cua pt la: %d", s);
			}
			break;
		case 3:
			printf("\nNhap x: ");
			scanf_s("%d", &x);
			s = a * x*x*x*x + b * x*x + c;
			printf("\nLim cua pt la: %d", s);
			break;
		}
		break;
	case 5:
		printf("\nNhap a: ");
		scanf_s("%d", &a);
		printf("\nNhap b: ");
		scanf_s("%d", &b);
		printf("\nNhap c: ");
		scanf_s("%d", &c);
		printf("\nNhap d: ");
		scanf_s("%d", &d);
		printf("\n1: x->-%c\n2: x->%c\n3: x-> so co dinh: ", vc, vc);
		scanf_s("%d", &m);
		switch (m)
		{
		case 1:
			printf("\nLim cua pt la: %d/%d=%d", a, c, a / c);
			break;
		case 2:
			printf("\nLim cua pt la: %d/%d=%d", a, c, a / c);
			break;
		case 3:
			printf("\nNhap x: ");
			scanf_s("%d", &x);
			if (c*x + d == 0)
			{
				printf("\nKhong the xac dinh lim");
			}
			else
			{
				printf("\nLim cua pt la: (%d*%d+%d)/(%d*%d+%d)=%d", a, x, b, c, x, d, (a*x + b) / (c*x + d));
			}
			break;
		}
		break;
	case 6:
		printf("\nNhap a: ");
		scanf_s("%d", &a);
		printf("\nNhap b: ");
		scanf_s("%d", &b);
		printf("\nNhap c: ");
		scanf_s("%d", &c);
		printf("\nNhap d: ");
		scanf_s("%d", &d);
		printf("\nNhap e: ");
		scanf_s("%d", &e);
		int u = a * d;
		printf("\n1: x->-%c\n2: x->%c\n3: x-> so co dinh: ", vc, vc);
		scanf_s("%d", &m);
		switch (m)
		{
		case 1:
			if (u > 0)
			{
				printf("\nLim cua pt la -%c", vc);
			}
			else
			{
				printf("\nLim cua pt la %c", vc);
			}
			break;
		case 2:
			if (u > 0)
			{
				printf("\nLim cua pt la %c", vc);
			}
			else
			{
				printf("\nLim cua pt la -%c", vc);
			}
			break;
		case 3:
			printf("\nNhap x: ");
			scanf_s("%d", &x);
			if (d*x + e == 0)
			{
				int v = d * x + e;
				if (a*v*v + b * v + c != 0)
				{
					printf("\nKhong the xac dinh lim");
				}
				else
				{
					int delta = b * b - 4 * a*c;
					if (delta > 0)
					{
						int x1 = (-b + sqrt(delta)) / 2 * a;
						int x2 = (-b - sqrt(delta)) / 2 * a;
						if (x1 == v)
						{
							printf("\nLim cua pt la: %d", 2 * a*x + b + sqrt(delta));
						}
						else
						{
							printf("\nLim cua pt la: %d", 2 * a*x + b - sqrt(delta));
						}
					}
					else
					{
						printf("\nLim cua pt la: %d", 2 * a*x + b);
					}
				}
			}
			else
			{
				printf("\nLim cua pt la: %d", (a*x*x + b * x + c) / (d*x + e));
			}
			break;
		}
		break;
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
