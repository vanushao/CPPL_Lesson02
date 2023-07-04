#include <iostream>


void print(int n){
/*Симантическая ошибка*/
	switch (n)
	{
	case 1:
		std::cout << "You entered one" << std::endl;
	case 2:
		std::cout << "You entered two" << std::endl;
	case 3:
		std::cout << "You entered three" << std::endl;
	default:
		std::cout << "I don't undestund, what you entered" << std::endl;
	}
	// Для решения после выполнения каждого условия необходимо добавить "break;", как ниже.
	// switch (n)
	// {
	// case 1:
	// 	std::cout << "You entered one" << std::endl;
	// 	break;
	// case 2:
	// 	std::cout << "You entered two" << std::endl;
	// 	break;
	// case 3:
	// 	std::cout << "You entered three" << std::endl;
	// 	break;
	// default:
	// 	std::cout << "I don't undestund, what you entered" << std::endl;
	// 	break;
	// }

}

int main()
{
	int n;
	cout << "Please enter number (1-3): "; //Синтактическая ошибка, не указано пространство имён, решаем либо через using namespace std; либо std::cout <<
	int n; //Ошибка линковки. Ранее n уже был объявлен. Решаем через удаление одного из объявлений.
	std::cin >> n;
	print(n);
}
