int Bit1Count(unsigned int n)
{
	unsigned int tmp;

	tmp = n
		- ((n >> 1) & 033333333333)
		- ((n >> 2) & 011111111111);

	tmp = (tmp + (tmp >> 3)) & 030707070707;

	return (tmp % 63);
}
