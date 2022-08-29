# include <stdio.h>
void main()
{
	printf("The number 555.55 in various forms :\n");
	printf("In float for without modifiers :\n");
	printf("[%f]\n",555.55);
	printf("In exponential form without any modifier: \n");
	printf("[%e]\n",555.55);
	printf("In float for without - modifiers :\n");
	printf("[%-f]\n",555.55);
	printf("In float for with digit string 10.3 as modifiers :\n");
	printf("[%10.3f]\n",555.55);
	printf("In float for with 0 as modifiers :\n");
	printf("[%0f]\n",555.55);
	printf("In float for with 0 and digit string 10.3 :\n");
	printf("as modifiers :\n");
	printf("[%010.3f]\n",555.55);
	printf("In float form with -,0 :\n");
	printf("In exponential form with 0 :\n");
	printf("and digit string 10.3 as modifiers :\n");
	printf("[%010.3e]\n",555.55);
	printf("In exponential form with -, 0 :\n");
	printf("and digit string 10.3 as modifiers :\n");
	printf("[%-010.3e]\n",555.55);
}
