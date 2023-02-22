int _putchar(char c)
{
	return (write(1, &c, 1));
}
void print_alphabet(void);
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
	return;
}
