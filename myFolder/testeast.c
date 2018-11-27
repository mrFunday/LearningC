#include <stdio.h>



int main()
{

	char str[13] = "helloWorld";
	char exit_istruction[3];


	printf("%s\n", str);
		

	puts("enter Qu");
	scanf("%1s", exit_istruction);
	if (exit_istruction[0] == "Qu")
	{
		return 0;
	}else{
		return 1;
	}	
		

}