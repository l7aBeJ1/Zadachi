#include <iostream>
#include <locale>
#include <Windows.h>
#include <cmath>
#include <cstring>
#include <stdio.h>
#include <Wincon.h>
#include <stdlib.h> // нужен для вызова функций rand(), srand()
#include <ctime>//нужен для включения функции time(0)
using namespace std;//команда позволяет не писать в переменных каждый раз std::

#pragma region "Имя,возраст,год,месяц,день"
//struct info //скелет структуры
//    //вписываем все обозначения,которые будем использовать для вывода в main
//{
//    string name;
//    int age;
//    int year;
//    int month;
//    int day;
//};
//
//int main()
//{
//    SetConsoleCP(1251);//Функция для вывода на экран
//    SetConsoleOutputCP(1251);//Функция для ввода в консоль
//    setlocale(LC_ALL, "Russian");// для поддержания русского языка
//    info user;//Заполняем вопросами и после всего ввода, нам выводит полный список информации
//    cout << "Введите имя: ";
//    cin >> user.name;
//    cout << "Введите возраст: ";
//    cin >> user.age;
//    cout << "Введите год рождения: ";
//    cin >> user.year;
//    cout << "Введите месяц рождения: ";
//    cin >> user.month;
//    cout << "Введите день рождения: ";
//    cin >> user.day;
//    cout << "Имя: " << user.name << "\nВведите возраст: " << user.age << "\nГод рождения: " << user.year << "\nМесяц рождения: " << user.month << "\nДень рождения: " << user.day << endl;
//    //задаём последовательность ввода и замыкаем список функцией endl не только вставляет символ перехода на новую строку, но еще и очищает буфер
//    cin.get();
//    return 0;
//}

#pragma region "S триугольника"
//int main()
//{
//    setlocale(LC_ALL, "Russian");
//    int A, Б;
//    cout << "Ведите длину катетов" << endl;//отдельная строчка без ввода
//    cout << "Катет A>";
//    cin >> A;
//    cout << "Катет Б>";
//    cin >> Б;
//    cout << "Площадь = " << (A * Б) / 2;
//}

#pragma region "яблоки"
////n школьников делят m яблок поровну, неделящийся остаток остаётся в корзинке.
////Сколько получит каждый школьник, сколько останется в корзине ?
//
//int main()
//{
//    setlocale(LC_ALL, "Russian");
//    int n, m;
//    cout << "Количество школьников: ";
//    cin >> n;
//    cout << "количество яблок: ";
//    cin >> m;
//    cout << "Количество яблок каждому школьнику: " << m / n << endl;
//    cout << "Остаток в корзине: " << m % n << endl;
//}

#pragma region "3-значная цифра"
//
//int main()
//{
//    setlocale(LC_ALL, "Russian");
//    int n;
//    cout << "Введите трехзначную цифру: ";
//    cin >> n;
//    cout << "1 цифра: " << n % 1000 / 100 << endl;
//    cout << "2 цифра: " << n % 100 / 10 << endl;
//    cout << "3 цифра: " << n % 10 << endl;
//    return 0;
//}

#pragma region 1)"Гепотинуза"
//int main()
//{
//    setlocale(LC_ALL, "Russian");
//    int a, b, c;
//    cout << "Ведите катет A: ";
//    cin >> a;
//    cout << "Ведиде катет B: ";
//    cin >> b;
//    cout << "Гепотинуза = " << (pow(a, 2) + pow(b, 2));//возводим в степень pow(цифра,степень)
//    cin >> c;
//
//}

#pragma region 2)"сколько парт"
//int main()
//{
//    setlocale(LC_ALL, "Russian");
//    int a, b, c;
//    cout << "Учеников в 1 классе: ";
//    cin >> a;
//    cout << "Парт требуется в 1 классе: " << int(double(a) / 2 + 0.5) << endl;
//    cout << "Учеников в 2 классе: ";
//    cin >> b;
//    cout << "Парт требуется в 2 классе: " << int(double(b) / 2 + 0.5) << endl;
//    cout << "Учеников в 3 классе: ";
//    cin >> c;
//    cout << "Парт требуется в 3 классе: " << int(double(c) / 2 + 0.5) << endl;
//    cout << "Всего учеников: " << a + b + c << endl;
//    cout << "Всего парт: " << (a + b + c) / 2 << endl;
//}

#pragma region 3)"проверка на возраст"
//int main()
//{
//    setlocale(LC_ALL, "Russian");
//    int age;
//    cout << "Ваш возраст: ";
//    cin >> age;
//    if (age >= 18)
//    {
//        cout << "Вы совершеннолетний(яя), вход разрешен!";
//    }
//    else
//    {
//        cout << "Вы не совершеннолетний(яя), приходите через: " << ((18 - age) * 365) << "дней.\n";
//    }
//            cout << "Приятного вечера!\n";
//   return 0;
//}

#pragma region 4)"Сравнить цифры"
//int main(int argc, char* argv[])
//{
//    setlocale(LC_ALL, "Russian");
//    int a, b;
//    cout << "Введите первое число: ";
//    cin >> a;
//    cout << "Введите второе число: ";
//    cin >> b;
//    if (a >= b) // если a больше либо равно b, то
//    {
//        cout << a << " >= " << b << endl;
//    }
//    else  // иначе
//    {
//        cout << a << " <= " << b << endl;
//    }
//    system("pause");
//    return 0;
//}
//

#pragma region 5)"Космический корабль(дерево диалог)"
//int main()
//{
//    setlocale(LC_ALL, "Russian");
//    int number = 0;
//    cout << "Космический корабль\n" << "Вы проснулись на космическом корабле, нечего не понимаете, ваши действия?\n" << "1-Попытаться связаться с Землёй!\n" << "2-Осмотреть корабль!\n";
//    cin>>number;
//    if (number == 1)
//    {
//        cout << "Земля не отвечает,помехи и ругань.\n";
//        cout << "1) Веддите один, чтобы подать сигнал SOS.\n" << "2) Введие два, чтобы нажать большую красную кнопку..\n";
//        cin >> number;
//
//        if (number==1)
//        {
//            cout << "После долгого ожидания ваш сигнал был услышан, вас спасли\n";
//            return 0;
//        }
//        else if (number == 2)
//        {
//            cout << "После нажатия кнопки на Землю была сброшена бомба, родная планета уничтожена\n";
//            return 0;
//        }
//    }
//    else if (number == 2);
//    {
//        cout << "Все каюты пусты, вы один и не умеете управлять кораблём.\n" << "1) Введите один, чтобы попробвать автопилот.\n" << "2) Введите два, чтобы подать сигнал SOS. \n";
//        cin >> number;
//
//        if (number == 1)
//        {
//            cout << "Вы улетели в пустоту и вскоре умерли от голода.\n";
//            return 0;
//        }
//        if (number == 2)
//        {
//            cout << "После долгого ожидания ваш сигнал был услышан и вас спасли.\n";
//            return 0;
//
//        }
//
//    }    
//}

#pragma region 6)"Дни недели через if,else"*
//int main(int argc, char* argv[]) {
//    setlocale(LC_ALL, "Russian");
//    system("chcp 1251");
//    int daynum = 0;
//    int mas[7] = { 1, 2, 3, 4, 5, 6, 7 };
//    bool find;
//    while (true) {
//        find = false;
//        cout << endl << "Введите день недели (цифрой), 0 - для выхода:" << endl;
//        cin >> daynum;
//        if (cin.fail()) {
//            cin.clear();
//            cin.sync();
//            cout << " Некорректный ввод!" << endl;
//        }
//
//        else {
//            for (int i = 0; i < 7; i++) {
//                if (mas[i] == daynum)
//                    find = true;
//            }
//            if (!find && daynum != 0) {
//                cout << " Вы ввели неверную цифру" << endl;
//            }
//
//            else {
//                if (daynum == 0) {
//                    return EXIT_SUCCESS;
//                }
//                else {
//                    if (daynum == 1) {
//                        cout << " Доброе утро, хорошего понедельника!" << endl;
//                    }
//                    if (daynum == 2) {
//                        cout << " Доброе утро, хорошего вторника!" << endl;
//                    }
//                    if (daynum == 3) {
//                        cout << "Доброе утро, хорошей среды!" << endl;
//                    }
//                    if (daynum == 4) {
//                        cout << " Доброе утро, хорошего четверга!" << endl;
//                    }
//                    if (daynum == 5) {
//                        cout << " Доброе утро, хорошей пятницы!" << endl;
//                    }
//                    if (daynum == 6) {
//                        cout << " Доброе утро, хорошей субботы!" << endl;
//                    }
//                    if (daynum == 7) {
//                        cout << " Доброе утро, хорошего воскресенье!" << endl;
//                    }
//                }
//            }
//        }
//    }
//}

#pragma region 7)"Дни недели через switch"*
//int main()
//{
//    setlocale(0, "Russian");
//    int day;
//
//    cout << "Введите число->";
//    cin >> day;
//
//    switch (day)
//    {
//    case(1):
//        cout << "Пондельник" << endl;
//        break;
//
//    case(2):
//        cout << "Вторник" << endl;
//        break;
//
//    case(3):
//        cout << "Среда" << endl;
//        break;
//
//    case(4):
//        cout << "Четверг" << endl;
//        break;
//
//    case(5):
//        cout << "Пятница" << endl;
//        break;
//
//    case(6):
//        cout << "Суббота" << endl;
//        break;
//
//    case(7):
//        cout << "Воскресенье" << endl;
//        break;
//
//    default:
//        cout << "Ошибка!";
//        break;
//
//
//
//    }
//}

#pragma region 8)"считываем 1 имя"*
//int main()
//{
//    setlocale(LC_ALL, "Russian");
//    cout << "Ведите имя: \n";
//    string first_name;
//    cin >> first_name;
//    cout << "Привет, " << first_name << "!\n";
//    return 0;
//}

#pragma region 9)"через while(for) 15 повторений"*
//int main()
//{
//   int i = 0;
//   while (i++ < 15)  //for (int i = 0; i < 15; i++)
//      cout << "Hello!\n";
//}

#pragma region 10)"случйное число от 1 до 10"*
////rand()-отвечает за генерацию случайных цифр,слов или других обозначений.
////(time(NULL))-отвечает за сдвиг генерируемых случайных обозначений.
//int main()
//{
//	int UserNumber;//цифра пользователя
//	srand(time(NULL));//позволяет генерировать разные позиции в цифрах в условленом диапазоне.
//	int number = rand()%10+1;//цифра генерируемая в случайном порядке в заданном дипазоне 1-10.
//	setlocale(LC_ALL, "Russian");
//	do
//	{
//		cout << "Попробуйте угадать цифру от 1 до 10: \n";
//		cin >> UserNumber;
//		if (UserNumber < number)
//			cout << "Ваше число слишком мало, попробуйте еще раз\n";
//		else if (UserNumber > number)
//			cout << "Ваше число слишком велико, попробуйте еще раз!\n";
//		}
//	while (UserNumber != number);
//		cout << "Поздравляю,вы угадали!\n";
//		return 0;
//}

#pragma region 11)"имя и возраст"*
//int main()
//{
//	    setlocale(LC_ALL, "Russian");
//		cout << "Ведите ваше имя и возраст :\n";
//		int age;
//		string first_name;
//		cin >> first_name >> age;
//		cout << "Вас зовут " << first_name << "," << " вам " << age;
//}
//

#pragma region 12)"годы в месяц"*
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	cout << "Сколько тебе лет\n";
//	int age;
//	cin >> age;
//	int mounth = age * 12;
//	cout << "Мне " << age << " или " << mounth << " месяцев!\n";
//}

#pragma region 13)"имя и отчество"*
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	cout << "Ведите свое имя и отчество\n";
//	string first_name;
//	string first_name2;
//	cin >> first_name >> first_name2;
//	string name = first_name + " " + first_name2;
//	cout << "Привет " << name << "\n";

#pragma region 14)"while"*
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	int i = 0;
//	while (i++ <= 15)
//	{
//		if (i < 15)
//		{
//			cout << "у тебя всё получится!\n";
//		}
//	}
//}

#pragma region 15)"for number=повторений"*
//int main()
//{
//    	setlocale(LC_ALL, "Russian");
//    int n = 0;
//    cout << "количество повторений: " << endl;
//    cin >> n;
//    for (int i = 0; i < n; ++i)//for используется когда значения повторений известно циклу схож с while
//        cout << " Ты на правильном пути! " << endl;
//    return 0;
//}

#pragma region 16)"while number=повторений"*
//int main()
//{
//    setlocale(LC_ALL, "Russian");
//    int n = 0;
//    cout << "Enter: " << endl;
//    cin >> n;
//    int i = 0;
//    while (++i < n)//while используется когда значения повторений неизвестно, цикл схож с for
//        cout << " Ты молодец! " << endl;
//    return 0;
//}

#pragma region 17)"набрать любой символ,при букве "F" программа завершается"*
//int main()
//{
//    setlocale(LC_ALL, "Russian");
//    string str = "";
//    do
//    {
//        cout << "Ведите любой символ: \n";
//        cin >> str;
//    }
//        while (str != "f");//программа работает пока стройка не равна "Ф"
//    cout << "Программа завершена.\n";
//    return 0;
//}

#pragma region 18)"если квадрат числа делится на 3, программа закрывается"*
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	int m=0;
//	cout << "Укажите 1-го число: ";cin >> m; "\n";
//	int sqr = m * m;
//	cout << "Корень 1-го числа: " << sqr << endl;
//	int n=0;
//	cout << "Укажите 2-го число: "; cin >> n; "\n";
//	int sqr2 = n * n;
//	cout << "Корень 2-го числа: " << sqr2 << endl;
//	if (sqr % 3 != 0) {
//		cout << "Корень 1-го числа делиться на 3, завершение сеанса.\n";
//	}
//	else if (sqr2 % 3 != 0) {
//		cout << "Корень 2-го числа делиться на 3, завершение сеанса.\n";
//	}
//	else if (sqr % 3 != 0 && sqr2 % 3 != 0) {
//		cout << "Корень 1-го и 2-го числа делиться на 3, завершение сеанса.\n";
//	}
//}

#pragma region 19)"ввод 1 и 2 числа в диапазоне от 0-10 и умножение"*
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	while(true)//обьявляем что цикл бесконечный
//	{
//	int a;
//	cout << "Укажите первое число: \n";
//	cin >> a;
//	int b;
//	cout << "Укажите второе число: \n";
//	cin >> b;
//		if (a>10 || a<0 || b>10 || b < 0)
//		{
//			cout << "Оба числа должны быть в диапазоне от 0-10\n";
//		}
//		else
//		{
//			cout << "если 1 число умножить на 2 число: " << (a * b);
//			break;
//		}
//	}
//}

#pragma region 20)"FizzBuzz"*
//int main()
//    {
//        for (int i = 1; i < 101; i++)
//        {
//            if (i % 3 == 0) cout << "Fizz";
//            if (i % 5 == 0) cout << "Buzz";
//            if (i % 3 != 0 && i % 5 != 0) cout << i;
//            cout << endl;
//        }
//    }

#pragma region 21)"Массивы"*
//Свойство length-позволяет узнать длину массива, узнать количество элементов в нём.
// array.cpp: определяет точку входа для консольного приложения.
//int main()
//{
//    cout << "obrabotka massiva" << endl;
//    int array1[16] = { 5, -12, -12, 9, 10, 0, -9, -12, -1, 23, 65, 64, 11, 43, 39, -15 }; // объявление и инициализация одномерного массива
//    cout << "indeks" << "\t\t" << "element massiva" << endl; // печать заголовков
//    for (int counter = 0; counter < 16; counter++)  //начало цикла
//    {
//        вывод на экран индекса ячейки массива, а затем содержимого этой ячейки, в нашем случае - это целое число
//        cout << "array1[" << counter << "]" << "\t\t" << array1[counter] << endl;
//    }
//    system("pause");
//    return 0;
//}

#pragma region 22)"вывести значение на разные строчки"*
//int main()
//{
//    setlocale(LC_ALL, "RUS");
//    cout << "\t\t\tДеление числа на разряды\n\n";
//    int a;
//    cout << "Введите пятизначное число: ";
//    cin >> a;
//    cout << "\n";
//    if (a >= 0 && a <= 9999)
//    {
//        cout << "Вы ввели неверное число. Число должно быть пятизначным.\n\n";
//        
//    }
//    else {
//        if (a >= 100000)
//        {
//            cout << "Вы ввели неверное число. Число должно быть пятизначным.\n\n";
//        }
//        else {
//
//            cout << "1 цифра равна " << (a / 10000) << "\n";
//            cout << "2 цифра равна " << (a / 1000) % 10 << "\n";
//            cout << "3 цифра равна " << (a / 100) % 10 << "\n";
//            cout << "4 цифра равна " << (a / 10) % 10 << "\n";
//            cout << "5 цифра равна " << a % 10 << "\n";
//
//            cout << endl;
//            return 0;
//        }
//    }
//}

#pragma region 23)"Запрограммировать математическое выражение в С++"*
//int main()
//{
//    setlocale(LC_ALL, "RUS");
//    int a=0;
//    int b=0;
//    int f=0;
//    cout << "Введите цифры : a, b, f \n";
//    cout << "a="; cin >> a; "\n";
//    cout << "b="; cin >> b; "\n";
//    cout << "f="; cin >> f; "\n";
//    cout << "Вычисляем по формуле : x=(a+b-f/a)+f*a*a-(a+b)\n";
//    int x=(a+b-f/a)+f*a*a-(a+b);
//    cout << "x="<<x;
//}

#pragma region 24)"Перевод в верхний регистр"*
//int main()
//{
//	char chLetter('a');
//	setlocale(LC_ALL, "Russian");
//	cout << "Введите букву нижнего регистра:\n\n";
//	cin >> chLetter;
//	chLetter = chLetter - 32;
//	cout << "\nТа же буква в верхнем регистре: " << chLetter << ".\n\n";
//	return 0;
//}

#pragma region 25)"Калькулятор по финансам"*
//int main()
//{
//    setlocale(LC_ALL, "Russian");
//	int age_0 = 0;
//	int age=0;
//	int money=0;
//	int nalog=0;
//	int pensiya = 0;
//	int fix_nalog = 0;
//	int reserv = 0;
//	cout << "Введите данные, для подсчётов финансов :"<<endl;
//	cout << "Введите до какого желаемого возраста :"; cin >> age_0;
//	cout << "Введите сколько вам лет :"; cin >> age;
//	cout << "Какой процент подоходного налога? : "; cin >> nalog;
//	cout << "Какой процент пенсионого налога? : "; cin >> pensiya;
//	cout << "Введите сумму фиксированного налога? : "; cin >> fix_nalog;
//	cout << "Сколько вы зарабатываете в месяц грязными? : ";cin >> money;
//	cout << "Вы зарабатываете в месяц чистыми : " << money-(money / 100 * (nalog + pensiya)+fix_nalog) << endl;
//	cout << "Вы зарабатываете за год грязными : " << money * 12 << endl;
//	cout << "Вы зарабатываете за год чистыми : " << money*12 - (money*12 / 100 * (nalog + pensiya)+fix_nalog) << endl;
//	cout << "Вам осталось работать до пенсии :" << age_0-age<<" года(лет)\n";
//	int age_2 = age_0 - age;
//	cout << "За " << age_2 << " года(лет) вы заработаете: " << money * 12 * age_2 << " рублей, грязными\n";
//	int money_2 = money * 12 * age_2;
//	int money_3 = money_2 - (money_2 / 100 * (nalog + pensiya)+fix_nalog);
//	cout << "За " << age_2 << " года(лет) вы заработаете: " <<money_3<< " рублей, чистыми\n";
//	cout << "Укажите сколько процентов вы хотите откладывать каждый месяц от суммы :";cin>>reserv;
//	cout << "Ваш депозитный счёт за месяц :" << (money_3 / age_2 / 12) / 100 * reserv << endl;
//	cout << "Ваш депозитный счёт за год :" << (money_3 / age_2) / 100 * reserv << endl;
//	cout << "Ваш депозитный счёт за "<<age_2<<" года(лет): " << (money_3 / 100 * reserv) << endl;
//	cout << "Прекрасного вам дня(утра или вечера)!\n";
//	cout << "Желаю вам дожить до этого прекрасного момента!:)";
//	return 0;
//}

#pragma region 26)"перевод метры в километры"*
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	double a = 0.0;
//	cout << "                  Перевод длинны в заданные значения." << endl;
//	cout << "Введите количество метров: "; cin >> a;
//	cout << "Из " << a << " метров, получается " << a / 1000 << " километров." << endl;
//	return 0;
//}

#pragma region 27)"домик"*
//int main()
//      /*\r	возврат каретки в начало строки
//      \n	новая строка
//      \t	горизонтальная табуляция
//      \v	вертикальная табуляция
//      \»	двойные кавычки
//      \’	апостроф
//      \\	обратный слеш
//      \0	нулевой символ
//      \ ? знак вопроса
//      \a	сигнал бипера(спикера) компьютера*/
//{
//	setlocale(LC_ALL, "Russian");
//	cout << "            Домик:" << endl;
//	cout << "              /\\ "<< endl;
//	cout << "             /  \\ " << endl;
//	cout << "            /    \\ " << endl;
//	cout << "           /      \\ " << endl;
//	cout << "          /--------\\ " << endl;
//	cout << "         / |      | \\ " << endl;
//	cout << "        /  |      |  \\ " << endl;
//	cout << "           |      | " << endl;
//	cout << "           |______| " << endl;
//	return 0;
//}

#pragma region 28)"покупка и сдача"*
//int main()
//{
//    setlocale(LC_ALL, "Russian");
//	double a = 0.0;
//	double b = 0.0;
//	cout << "сколько стоит товар?: "; cin >> a;
//	cout << "сколько денег вы даёте?: "; cin >> b;
//	cout << "Ваша сдача составит: " << b - a;
//	return 0;
//}
