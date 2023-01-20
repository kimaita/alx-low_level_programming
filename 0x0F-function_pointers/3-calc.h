#ifndef _3_CALC_H_
#define _3_CALC_H_

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

/**
 * op_add - function that sums a and b
 * @a: first integer to add
 * @b: second integer to add
 *
 * Return: sum of a and b
 */
int op_add(int a, int b);

/**
 * op_sub - function that calculates the difference of a and b
 * @a: integer to subtract from
 * @b: integer to subtract
 *
 * Return: difference of a and b
 */
int op_sub(int a, int b);

/**
 * op_mul - function that calculates the product of a and b
 * @a: first number
 * @b: second number
 *
 * Return: product of a and b
 */
int op_mul(int a, int b);

/**
 * op_div - function that performs the division of a by b
 * @a: dividend
 * @b: divisor
 *
 * Return: quotient of a divided by b
 */
int op_div(int a, int b);

/**
 * op_mod - function that returns the remainder of the division of a by b
 * @a: dividend
 * @b: divisor
 *
 * Return: a modulo b
 */
int op_mod(int a, int b);

/**
 * get_op_func - function that selects the correct function to
 *		perform an operation as per an operator
 *
 * Description: operator is one of the following:
 *	+: addition
 *	-: subtraction
 *	*: multiplication
 *	/: division
 *	%: modulo
 *
 * Return: pointer to the function corresponding to the operator, or
 *	   NULL if s is not one of the defined operators
 */
int (*get_op_func(char *s))(int, int);
#endif /* _3_CALC_H_ */
