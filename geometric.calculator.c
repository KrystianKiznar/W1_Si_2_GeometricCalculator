#include <stdio.h>
#include <math.h>

float circle_perimeter()
{
	float pi = 3.14;
	float r;
	
	printf("Input the radius of the circle:\n");

	scanf_s("%f", &r);
	
	return 2 * r * pi;

}

float rectangle_perimeter()
{
	float a, b;

	printf("Input the a value of the rectangle:\n");
	scanf_s("%f", &a);

	printf("Input the b value of the rectangle:\n");
	scanf_s("%f", &b);

	return 2 * a + 2 * b;
}

float triangle_perimeter()
{
	float a, b, c;

	printf("Input the a value of the triangle:\n");
	scanf_s("%f", &a);				 
									 
	printf("Input the b value of the triangle:\n");
	scanf_s("%f", &b);				 
									 
	printf("Input the c value of the triangle:\n");
	scanf_s("%f", &c);

	return a + b + c;
}

float trapeze_perimeter()
{
	float a, b, c, d;

	printf("Input the a value of the trapeze:\n");
	scanf_s("%f", &a);				 
									 
	printf("Input the b value of the trapeze:\n");
	scanf_s("%f", &b);				 
									 
	printf("Input the c value of the trapeze:\n");
	scanf_s("%f", &c);				 
									 
	printf("Input the d value of the trapeze:\n");
	scanf_s("%f", &d);

	return a + b + c + d;
}


float circle_field()
{
	float pi = 3.14;
	float r;

	printf("Input the radius of the circle:\n");

	scanf_s("%f", &r);

	return pi * pow(r,2);

}

float rectangle_field()
{
	float a, b;

	printf("Input the a value of the rectangle:\n");
	scanf_s("%f", &a);

	printf("Input the b value of the rectangle:\n");
	scanf_s("%f", &b);

	return a * b;
}

float triangle_field()
{
	float a, b, h;

	printf("Input the a value of the triangle:\n");
	scanf_s("%f", &a);

	printf("Input the b value of the triangle:\n");
	scanf_s("%f", &b);

	printf("Input the h value of the triangle:\n");
	scanf_s("%f", &h);

	return (a * h)/2;
}

float trapeze_field()
{
	float a, b, h;

	printf("Input the a value of the trapeze:\n");
	scanf_s("%f", &a);

	printf("Input the b value of the trapeze:\n");
	scanf_s("%f", &b);

	printf("Input the h value of the trapeze:\n");
	scanf_s("%f", &h);

	return ((a + b) * h) / 2;

}


int main()
{
	char option;
	printf("What do you wan to calculate? \n");
	printf("Choose:\nA - circle field,\nB - rectangle field,\nC - triangle field,\nD - trapeze field. \n");
	printf("E - circle perimeters,\nF - rectangle perimeters,\nG - triangle perimeters,\nH - trapeze perimeters. \n");
	scanf_s("%c", &option, 20);

	switch (option)
	{
	case 'A':
	{
		float circle = circle_field();
		printf("The field of the circle is %.2f\n", circle);
	}
	break;
	case 'B':
	{
		float rectangle = rectangle_field();
		printf("The field of the rectangle is %.2f\n", rectangle);
	}
	break;
	case 'C':
	{
		float triangle = triangle_field();
		printf("The field of the rectangle is %.2f\n", triangle);
	}
	break;
	case 'D':
	{
		float trapeze = trapeze_field();
		printf("The field of the rectangle is %.2f\n", trapeze);
	}
	break;

	case 'E':
	{
		float circle = circle_perimeter();
		printf("The perimiter of the circle is %.2f\n", circle);
	}
	break;
	case 'F':
	{
		float rectangle = rectangle_perimeter();
		printf("The perimiter of the rectangle is %.2f\n", rectangle);
	}
	break;
	case 'G':
	{
		float triangle = triangle_perimeter();
		printf("The perimiter of the rectangle is %.2f\n", triangle);
	}
	break;
	case 'H':
	{
		float trapeze = trapeze_perimeter();
		printf("The perimiter of the rectangle is %.2f\n", trapeze);
	}
	break;
	default:
	{
		printf("Please enter a valid letter!\n");
	}
	break;
	}

	return 0;
}
