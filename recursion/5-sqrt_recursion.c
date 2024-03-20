#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number.
 *
 * Return: integer
 */
/**
 * square_root_recursive - auxiliary function to find square root recursively.
 *
 * @n: integer
 * @start: integer
 * @end: integer
 *
 * Return: integer
 */
int square_root_recursive(int n, int start, int end)
{
	int mid = (start + end) / 2;
	int square = mid * mid;

	if (start > end)
		return (-1);

	if (square == n)
		return (mid);
	else if (square < n)
		return (square_root_recursive(n, mid + 1, end));
	else
		return (square_root_recursive(n, start, mid - 1));
/**
 * _sqrt_recursion - returns the natural square root of a number.
 *
 * @n: integer.
 *
 * Return: integer
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return -1;
	else if (n == 0 || n == 1)
		return (-1);
	else
		return (square_root_recursive(n, 1, n));
}
