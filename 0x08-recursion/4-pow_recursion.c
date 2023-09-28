#include "main.h"

/**
 * _pow_recursion - A function that returns the value of x raised to the power of y
 * @x: the numbr to be evaluated
 * @y: the power to be raised to
 * Return: 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x *  _pow_recursion(x, y - 1));
}
