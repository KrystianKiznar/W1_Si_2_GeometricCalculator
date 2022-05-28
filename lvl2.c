#include <stdio.h>
#include <math.h>

float calc_length_between_points(int x1, int y1, int x2, int y2)
{
	float AB;

	if (x1 - x2 == 0)
	{
		AB = abs(y1 - y2);
	}
	else if (y1 - y2 == 0)
	{
		AB = abs(x1 - x2);
	}
	else
	{
		AB = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
	}
	return AB;
}

int take_coordinate()
{
	int z;

	scanf_s("%d", &z);

	return z;
}

int circle() {
	float pi = 3.14, AB_length, field, perimeter;
	int x1, y1, x2, y2;

	printf("Input x coordinate of the first point:\n");
	x1 = take_coordinate();
	printf("Input y coordinate of the first point:\n");
	y1 = take_coordinate();
	printf("Input x coordinate of the second point:\n");
	x2 = take_coordinate();
	printf("Input y coordinate of the second point:\n");
	y2 = take_coordinate();

	AB_length = calc_length_between_points(x1, y1, x2, y2);


	field = pi * pow(AB_length, 2);
	perimeter = 2 * AB_length * pi;
	
	printf("Ab side has %.2f\n", AB_length);
	printf("The field has: %.2f\n", field);
	printf("The perimeter is: %.2f", perimeter);
	return 0;
}

int triangle() 
{
	float AB_length, BC_length, CA_length, field, perimeter;
	int Ax, Ay, Bx, By, Cx, Cy;

	printf("Input x coordinate of the first point:\n");
	Ax = take_coordinate();
	printf("Input y coordinate of the first point:\n");
	Ay = take_coordinate();
	printf("Input x coordinate of the second point:\n");
	Bx = take_coordinate();
	printf("Input y coordinate of the second point:\n");
	By = take_coordinate();
	printf("Input x coordinate of the third point:\n");
	Cx = take_coordinate();
	printf("Input y coordinate of the third point:\n");
	Cy = take_coordinate();

	AB_length = calc_length_between_points(Ax, Ay, Bx, By);
	BC_length = calc_length_between_points(Bx, By, Cx, Cy);
	CA_length = calc_length_between_points(Ax, Ay, Cx, Cx);

	perimeter = AB_length + BC_length + CA_length;
	field = abs((Ax * (By - Cy) + Bx * (Cy - Ay) + Cx * (Ay - By)) / 2);

	printf("The perimeter is: %.2f\n", perimeter);
	printf("The field has: %.2f\n", field);
	return 0;
}
int quadrangle()
{
	float AB_length, BC_length, CD_length, DA_length, field1, field2, field, perimeter;
	int Ax, Ay, Bx, By, Cx, Cy, Dx, Dy;

	printf("Input x coordinate of the first point:\n");
	Ax = take_coordinate();
	printf("Input y coordinate of the first point:\n");
	Ay = take_coordinate();
	printf("Input x coordinate of the second point:\n");
	Bx = take_coordinate();
	printf("Input y coordinate of the second point:\n");
	By = take_coordinate();
	printf("Input x coordinate of the third point:\n");
	Cx = take_coordinate();
	printf("Input y coordinate of the third point:\n");
	Cy = take_coordinate();
	printf("Input x coordinate of the fourth point:\n");
	Dx = take_coordinate();
	printf("Input y coordinate of the fourth point:\n");
	Dy = take_coordinate();

	AB_length = calc_length_between_points(Ax, Ay, Bx, By);
	BC_length = calc_length_between_points(Bx, By, Cx, Cy);
	CD_length = calc_length_between_points(Dx, Dy, Cx, Cx);
	DA_length = calc_length_between_points(Dx, Dy, Ax, Ax);


	perimeter = AB_length + BC_length + CD_length + DA_length;

	field1 = abs((Ax * (By - Cy) + Bx * (Cy - Ay) + Cx * (Ay - By)) / 2);
	field2 = abs((Ax * (Cy - Dy) + Cx * (Dy - Ay) + Dx * (Ay - Cy)) / 2);

	field = field1 + field2;
	printf("The perimeter is: %.2f\n", perimeter);
	printf("The field has: %.2f\n", field);
	return 0;
}

int main()
{
	char option;

	printf("Choose the figure\n1.circle\n2.triangle\n3.quadrangle\n");

	scanf_s("%c", &option, 20);
	
	switch (option)
	{
	case('1'):
	{
		circle();
	}
	break;
	case('2'):
	{
		triangle();
	}
	break;
	case('3'):
	{
		quadrangle();
	}
	break;
	default:
	{
		printf("Wrong choice!\n");
	}
	break;
	}

	
	return 0;
}
