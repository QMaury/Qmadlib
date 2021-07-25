#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    	char adjective[50];
	char adjective2[50];
    	char noun[50];
	char noun2[50];
    	char pluralNoun[50];
	char game[50];
	char pluralNoun2[50];
	char verbIng[50];
	char verbIng2[50];
	
	printf(" \n");
	printf("Enter adjective: ");
	fgets(adjective, 50, stdin);
	adjective[strlen(adjective)-1] = '\0';

	printf("Enter adjective: ");
	fgets(adjective2, 50, stdin);
	adjective2[strlen(adjective2)-1] = '\0';

	printf("Enter noun: ");
	fgets(noun, 50, stdin);
	noun[strlen(noun)-1] = '\0';

	printf("Enter noun: ");
	fgets(noun2, 50, stdin);
	noun2[strlen(noun2)-1] = '\0';

	printf("Enter plural noun: ");
	fgets(pluralNoun, 50, stdin);
	pluralNoun[strlen(pluralNoun)-1] = '\0';

	printf("Enter game: ");
	fgets(game, 50, stdin);
	game[strlen(game)-1] = '\0';

	printf("Enter plural noun: ");
	fgets(pluralNoun2, 50, stdin);
	pluralNoun2[strlen(pluralNoun2)-1] = '\0';

	printf("Enter verb ending in 'ing': ");
	fgets(verbIng, 50, stdin);
	verbIng[strlen(verbIng)-1] = '\0';

	printf("Enter verb ending in 'ing': ");
	fgets(verbIng2, 50, stdin);
	verbIng2[strlen(verbIng2)-1] = '\0';

	printf(" \n");
	printf("A vacation is when you take a trip to some %s place \n" , adjective);
	printf("with your %s family. Usually you go to some place \n" , adjective2);
	printf("that is near a/an %s or up on a/an %s. \n" , noun, noun2);
	printf("A good vacation place is one where you can ride %s \n" , pluralNoun);
	printf("or play %s or go hunting for %s. I like \n" , game, pluralNoun2);
	printf("to spend my time %s or %s. \n" , verbIng, verbIng2);
	printf(" \n");

	return 0;
}

