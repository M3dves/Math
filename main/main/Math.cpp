#include  "Math.h"
#include <cstring>
int Math::Add(int x, int y)
{
	return x + y;
}
int Math::Add(int x, int y, int z)
{
	return x + y + z;
}
int Math::Add(double x, double y)
{
	return (double)(x + y);
}
int Math::Add(double x, double y, double z)
{
	return double(x + y + z);
}
int Math::Mul(int x, int y)
{
	return x * y;
}
int Math::Mul(int x, int y, int z)
{
	return x * y * z;
}
int Math::Mul(double x, double y)
{
	return x * y;
}
int Math::Mul(double x, double y, double z)
{
	return x * y * z;
}
int Math::Add(int count, ...)
{
	int s = 0;
	va_list n;
	va_start(n, count);
	for (int i = 0; i < count; i++)
	{
		int nr = va_arg(n, int);
		s += nr;
	}
		va_end(n);
	return s;

}
char* Math::Add(const char* s, const char* t)
{
	if (s == nullptr || t == nullptr) return nullptr;
	char* p = new char[1+strlen(s)+strlen(t)];
	if (p == nullptr) return nullptr;
	strcpy(p, s);
	strcat(p, t);

	return p;
}

