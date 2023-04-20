int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Returns the sum of two numbers
 * @a: First number to add
 * @b: Second number to add
 * Return: sum of @a and @b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Return the difference of two numbers
 * @a: First number to use
 * @b: Second number
 * Return: the difference between @a and @b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Return the product of two multiplied numbers
 * @a: First number to use
 * @b: Second number
 * Return: the product of @a and @b
 *
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - a function that returns the division of two numbers
 * @a: number to divide
 * @b: number to divide by
 * Return: product of division @a and @b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - A function that returns the remaindr of the division of two numbers
 * @a: First number
 * @b:second number
 * Return: the remainder of division of @a and @b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
