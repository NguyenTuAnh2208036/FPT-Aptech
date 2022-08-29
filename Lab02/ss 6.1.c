# include <stdio.h>
void main()
{
	printf("The number 555 in various forms:\n");
	printf("Without ant modifier: \n");
	printf("[%d]\n",555);
	printf("With - modifier :\n");
	printf("[%d]\n",555);
	printf("With difit string 10 as modifier :\n");
	printf("[%10d]\n",555);
	printf("With 0 as modifier :\n");
	printf("[%0d]\n",555);
	printf("With 0 and difit string 10 as modifiers :\n");
	printf("[%010d]\n",555);
	printf("With - , 0 and difit string 10 as modifiers :\n");
	printf("[%-010d]\n",555);
}
