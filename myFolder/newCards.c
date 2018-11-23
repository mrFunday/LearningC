#include <stdio.h>
#include <stdlib.h>
int main()
{
	char card_name[3];

	int val = 0;
	char exit_istruction[3];

	
	puts("enter the card name:");
	scanf("%2s", card_name);

	

	if (card_name[0] == "K")
	{
		val = 10;
	}else if (card_name[0] == "Q")
	{
		val = 10;
	}else if (card_name[0] == "J")
	{
		val = 10;
	}else if (card_name[0] == "A")
	{
		val = 11;
	}else
	{
		val = atoi(card_name);
	}
	 
	printf("%i\n", val );
	printf("%i\n", card_name );
	puts("enter Qu");
	scanf("%1s", exit_istruction);
	if (exit_istruction[0] == "Qu")
	{
		return 0;
	}else{
		return 1;
	}	


}