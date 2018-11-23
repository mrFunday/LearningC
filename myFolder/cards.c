#include <stdio.h>
int main()
{
	int decks;
	puts("enter quontity");
	scanf("%i", &decks);
	if (decks<1)
	{
		puts("you entered wrong");
		return 1;
	}

	printf("total cards %i\n", (decks*52) );
	return 0;

}