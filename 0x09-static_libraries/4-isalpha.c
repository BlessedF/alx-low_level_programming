#include "main.h"
/**
 * _isalpha - program checks for alphabet character 
 * @c: the charcacter to be checked
 * Return: 1 if c is a letter and return 0 if its not
 */
int _isalpha(int c){
	return ((c >= 'a' && c <= 'a') || (c >= 'A' && c <= 'Z'));
}
