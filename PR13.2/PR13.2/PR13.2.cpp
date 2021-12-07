#include <stdio.h>
#include <conio.h>
#define Z 3

#define SQR(x) (x)*(x)
#define SQR1(y, z) (y + z)*(y + z)

#define MAX(y,z) ((y)>(z))?(y):(z)
#define MIN(y,z) ((y)<(z))?(y):(z)

#define PRINTI(w) puts("control output"); \
 printf(#w"=%d\n",w)

#define PRINTR(w) puts ("rezult :"); \
 printf (#w"=%f\n",(float)w)

void main()
{
	int x, y, z, max, min, first_arg, second_arg;
	char ch;
	do
	{
#if (0 < Z && Z < 5) 
		puts("Input 3 integer numbers");
		char s[5];
		scanf_s("%d", &x, sizeof(s));
		PRINTI(x);
		scanf_s("%d", &y, sizeof(s));
		PRINTI(y);
		scanf_s("%d", &z, sizeof(s));
		PRINTI(z);
		first_arg = SQR(x) + y + z;
		second_arg = x * y * z;
		max = MAX(first_arg, second_arg);
		PRINTR(max);
#else
		{
			puts("Input 3 integer numbers");
			scanf_s("%d", &x, sizeof(s));
			PRINTI(x);
			scanf_s("%d", &y, sizeof(s));
			PRINTI(y);
			scanf_s("%d", &z, sizeof(s));
			PRINTI(z);
			first_arg = SQR(x) + SQR1(y, z);
			second_arg = x * y;
			min = MIN(first_arg, second_arg);
			PRINTR(min);
		}
#endif
		puts("Repeat? y /n "); ch = _getch();
	} while (ch == 'y');
}
