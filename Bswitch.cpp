#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int count;
	int month;
	cout << "Введите номер месяца (1-12) \n";
	
	cin >> month;
	
	switch (month)
	{
	case 1:
	{
		count = 31;
		break;
	}
	case 2:
	{
		count = 28;
		break;
	}
	case 3:
	{
		count = 31;
		break;
	}
	case 4:
	{
		count = 30;
		break;
	}
	case 5:
	{
		count = 31;
		break;
	}
	case 6:
	{
		count = 30;
		break;
	}
	case 7:
	{
		count = 31;
		break;
	}
	case 8:
	{
		count = 31;
		break;
	}
	case 9:
	{
		count = 30;
		break;
	}
	case 10:
	{
		count = 31;
		break;
	}
	case 11:
	{
		count = 30;
		break;
	}
	case 12:
	{
		count = 31;
		break;
	}
		default:
		{
			count = 0;
			break;
		}
	}

	cout << "Кол-во дней этом месяце: " << count;
}
