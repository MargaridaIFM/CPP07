#include "whatever.hpp"

template <typename T>
void swap(T &a, T &b)
{
	T temp = a;
	a = b;
	b = temp; 
}

template <typename T>
T min(T a, T b)
{
	return( (a < b) ? a : b);
}

template <typename T>
T max(T a, T b)
{
	return((a > b) ? a : b);
}

int main()
{
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	// std:: cout << "Ops with numbers:" << std::endl;
	// int a = 10;
	// int b = 15;
	// std::cout << "a: " << a << std::endl;
	// std::cout << "b: " << b << std::endl;
	// swap(a,b);
	// std::cout << "SWAP" << std::endl;
	// std::cout << "a: " << a << std::endl;
	// std::cout << "b: " << b << std::endl;
	// std::cout << "min: " << ::min(a, b) << std::endl;
	// std::cout << "max: " << ::max(a, b) << std::endl;


	// std:: cout << "Ops with strings:" << std::endl;
	// std::string c = "Love";
	// std::string d = "Lovely";

	// std::cout << "c: " << c << std::endl;
	// std::cout << "d: " << d << std::endl;
	// swap(c,d);
	// std::cout << "SWAP" << std::endl;
	// std::cout << "c: " << c << std::endl;
	// std::cout << "d: " << d << std::endl;
	// std::cout << "min: " << ::min(c, d) << std::endl;
	// std::cout << "max: " << ::max(c, d) << std::endl;

	return 0;
}
