/**
 *swap_int - swaps two integers
 *@a: first integer's pointer
 *@b: second integer's pointer
 *
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
