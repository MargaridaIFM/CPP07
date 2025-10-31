#include "iter.hpp"
#include <cctype>

template<typename T>
void iter(T *array, int len_array, void (*func)(T &))
{
	if (array == NULL || func == NULL)
		return ;
	for (int i = 0; i < len_array; i++)
		func(array[i]);
}

template<typename T>
void printElem(T &element)
{
	std::cout << element << std::endl;
}

void ft_toUpper(std::string &s)
{
	for (size_t i = 0; i < s.size(); ++i)
		s[i] = static_cast<char>(std::toupper(static_cast<unsigned char>(s[i])));
}

void ft_toLower(std::string &s)
{
	for (size_t i = 0; i < s.size(); ++i)
		s[i] = static_cast<char>(std::tolower(static_cast<unsigned char>(s[i])));
}

int main()
{
	int len = 5;
	int arr_int[len] = {2, 4, 6, 8, 10};
	double arr_d[len] = {1.1, 2.2, 3.3, 4.4, 5.5};
	std::string arr_str[len] = {"a", "bb", "ccc", "dddd", "eeeee"};

	std::cout << "ints:\n";
	::iter(arr_int, len, printElem);

	std::cout << "\ndoubles:\n";
	::iter(arr_d, len, printElem);

	std::cout << "\nstrings original:\n";
	::iter(arr_str, len, printElem);

	::iter(arr_str, len, ft_toUpper);
	std::cout << "strings upper:\n";
	::iter(arr_str, len, printElem);

	::iter(arr_str, len, ft_toLower);
	std::cout << "strings lower:\n";
	::iter(arr_str, len, printElem);

	return 0;
}
