#include "Math.h"

int main()
{
	Math m;
	std::cout << "Add(3,5)=" << m.Add(3, 5)<<'\n';
	std::cout << "Add(3,5,7)=" << m.Add(3,5,7) << '\n';
	std::cout << "Add(3.5,5.3)=" << m.Add(3.5,5.3) << '\n';
	std::cout << "Add(3.5,5.3,7.1)=" << m.Add(3.5, 5.3,7.1) << '\n';
	std::cout << "Mul(3,5)=" << m.Mul(3, 5) << '\n' ;
	std::cout << "Mul(3,5,7)=" << m.Mul(3, 5, 7) << '\n';
		std::cout << "Mul(3.5,5.3)=" << m.Mul(3.5 , 5.3) << '\n';
	std::cout << "Mul(3.5,5.3,7.1)=" << m.Mul(3.5,5.3,7.1) << '\n';
	std::cout << "Add(3,4,5,6)=" << m.Add(3, 4, 5, 6) << '\n';
	std::cout << "Add(5,4,5,6,7,8)=" << m.Add(5, 4, 5, 6,7,8) << '\n';
	std::cout << "Add(a,b)=" << m.Add("a", "b") << '\n';
}

