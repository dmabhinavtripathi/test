#include <stdio.h>
int main()
{
	int a, b, sum, sub, c;
printf("Enter 1st Value to add: ");
scanf("%d", &a);

printf("Enter 2nd Value to add: ");
scanf("%d", &b);

sum= a+b;
printf("Sum of %d and %d is %d: \n ", a, b, sum);

printf("Enter value to subtract with %d: ", sum);
scanf("%d", &c);
sub=sum-c;

printf("Your Answer after subtracting %d with %d is %d: ", sum, c, sub);

return 0;

}
