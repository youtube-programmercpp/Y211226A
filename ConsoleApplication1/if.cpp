bool f1()
{
	return false;
}
bool f2()
{
	return true;
}
bool f3()
{
	return true;
}

int main()
{
	if
	(  f1()
	&& f2()
	&& f3()
	) {
	}
}
