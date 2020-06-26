/* Programming Exercise 6-3 */

// Use nested loops to produce the following pattern:

// F
// FE
// FED
// FEDC
// FEDCB
// FEDCBA

// Note: If your system doesn't use ASCII or some other code that encodes letters in
// numeric order, you can use the following to initialize a character array to the letters of the alphabet:

// char lets[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

// Then you can use the array index to select inividual letters; for example, lets[0] is
// 'A', and so on.


#include <stdio.h>
#define ROWS 6

int main(void)
{
	int row;
	char letter;
	
	for (row = 0; row < ROWS; row++)
	{
		for (letter = 'F'; letter >= 'F' - row; letter--)
			printf("%c", letter);
		printf("\n");
	}
	
	return 0;
}