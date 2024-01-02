#include <iostream>
#include <string>


int new_palindrom(std::string str)
{
	bool g;
	for (int i = 0; i < str.length() / 2; i++)
		if (str[i] != str[str.length() - i-1])
			g = false;
		else
				g = true;
				return g;
}

int new_func(std::string str)
{
	int m = 0;
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == ' ' || str[i] == '.' || str[i] == ',' || str[i] == '!' ||
			str[i] == '?')
		m++;
	}
	return m;
}
	

void new_function(std::string str, char g) {
	int index = str.rfind(g);
	if (index != -1) {
		std::string str1 = str.substr(index);
		std::cout << str1 << std::endl;
		}
		if (index == -1)
			std::cout << "_______" << std::endl;
}

int main()

{
	setlocale(LC_ALL, "Russian");

	std::cout << "Задание 1 \n";
	
	std:: string str = "Hello word!";
	char sym = 'l';
	std::string res;
	for (int i = 0; i < str.length(); i++)
		if (str[i] == sym)
			res += sym;
	std::string new_str = res;
	std::cout << new_str << std::endl;


	std::cout << "Задание 2 \n";

	std::string str1;
	std::cout << "Введите слово ->";
	std::getline(std::cin, str1);
	std::cout << new_palindrom(str1) << std::endl;

	std::cout << "Задание 3 \n";
	std::string str2;
	std::cout << "Введите строку ->";
	std::getline(std::cin, str2);
	std::cout << "Количество символов равно: " <<new_func(str2) << std::endl;
	

	std::cout << "Задание 4 \n";
	std::string str3;
	std::cout << "Введите строку ->";
	std::getline(std::cin, str3);
	char sym1;
	std::cout << "Введите символ ->";
	std::cin >> sym1;
	new_function (str3, sym1);

	return 0;
}