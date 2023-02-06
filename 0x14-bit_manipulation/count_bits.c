/**
 * count_bits - determines the number of bits in the binary form of an integer
 * @n: integer to get no. of bits in
 * 
 * Return: number of bits in n
*/
unsigned int count_bits(unsigned long int n)
{
        unsigned int count = 0;
        while (n)
        {
                count++;
                n >>= 1;
        }
        return (count);
}
