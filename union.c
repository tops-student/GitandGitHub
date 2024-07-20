#include<stdio.h>
union display
{
	int num;
	char ch;
};
int main()
{
	union display u1;
	u1.num = 65;
	printf("\nValue of num = %d",u1.num);
	printf("\nValue of ch = %c",u1.ch);
	return 0;
}