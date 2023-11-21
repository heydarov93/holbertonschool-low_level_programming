/**
 * print_name - prints name
 * @name: name to print (char *)
 * @f: callback function (pointer to the void func.)
 *
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
