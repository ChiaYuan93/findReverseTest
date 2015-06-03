#include <stdio.h>
#include "findReverseText.h"

/**
 *Reverse the text and find the word in the text and return position of
 *the letter.
 *Eg.,
 *	text = Alladin
 *	wordToFInd = lad
 *	The return value is 2
 *
 *Input:
 * 	text		contains a bunch of words
 * 	wordToFind		is the (partial) word to find in the text
 *Return:
 *	the position of the letter found in reverse text. If the word 
 *	cannot be found in the text, -2 is returned.
 */

int findReverseText(char *text, char *wordToFind){
	int i=0, j=0, k=0 ,p=0;

	
while(text[p] != 0){
		
  if(text[p] == wordToFind[0]){
			
	while(text[i] != 0){
		i++;
	}
	
	while(wordToFind[j] != 0){
		j++;;
	}
		j--;
	
	while(text[i] != wordToFind[j]) {
		while(text[i] != wordToFind[j]){
			i--;
		}
		if(j>0)
			j--;
	}
	
	return i;
  }
   p++;	
}
	
	return -2;
}