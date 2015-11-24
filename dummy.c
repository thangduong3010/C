/*
* Program to play around
* for studying purpose only
*/
#include <stdio.h>	// hearder file


int main()
{
	int count = 0;
	char card_name[3];
	while (card_name[0] != 'X'){
		puts("Enter the card name: ");
		scanf("%2s", card_name);
		int val = 0;
		switch(card_name[0]){
			case 'K':
			case 'Q':
			case 'J':
				val = 10;
				break;
			case 'A':
				val = 11;
				break;
			case 'X':
				puts("Err");
				continue;
			default:
				val = atoi(card_name);
				if (val < 1 || val > 10){
					puts("Error!");
					continue;
				}
		}
		/* Check if the value is 3 to 6 */
		if (val > 2 && val < 7)
			count++;
		/* Otherwise check if the card was 10, J, Q, K */
		else if (val == 10)
			count--;
	printf("Current count: %i\n", count);
	}
	return 0;

}