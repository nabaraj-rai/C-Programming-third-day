#include<stdio.h>
#include<conio.h>
main()
{
	int m1, c1, m2, c2, m, c;
	printf("Enter first distance in meter and centimeter: ");
	scanf("%d%d",&m1, &c1);
	printf("Enter second distance in meter and centimeter: ");
	scanf("%d%d",&m2, &c2);
	c=(c1+c2)%100;
	m=m1+m2+(c1+c2)/100;
	printf("Sum of the two distances is %d m and %d cm", m,c);
	getch();
}
