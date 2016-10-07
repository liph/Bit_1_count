int Bit1Count2(int n)
{
	int count = 0;
	int tmp = n;
	while (tmp)
	{
		++count;
		tmp = (tmp - 1) & tmp;
	}
	return count;
}