// / Use of Comma

#include <stdio.h> 
#include <conio.h>

int  main() 
{
	int num, sq, cube;
	 
	num = 2;

	sq = (num * num), cube = (num * num * num);
	printf( "\n The square of %d is : %d", num, sq );
	printf( "\n The cube of %d is   : %d", num, cube );

	getch();
	return 0;
}
