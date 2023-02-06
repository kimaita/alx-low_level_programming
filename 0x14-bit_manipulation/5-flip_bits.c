/**
 * flip_bits - function that returns the number of bits you would need to flip
 * to get from one number to another
 * @n: initial number
 * @m: number to convert to
 *
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int a;
	unsigned int b = 0;

	a = n ^ m;
	while (a)
	{
		b++;
		a &= (a - 1);
	}
	return (b);
}
