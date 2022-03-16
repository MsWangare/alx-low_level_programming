#include "main.h"

/**
 *  * print_alphabet_10 a function that prints 10 times the alphabet
 *   *
 *    * Return: x10 a-z
 *     */
void print_alphabet_x10(void)
{
	        int n, i;

		        i = 0;

			        while (i < 10)
					        {
							                for (n = 'a'; n <= 'z'; n++)
										                {
													                        _putchar(n);
																                }
									                i++;
											                _putchar(n);
													        }
}
