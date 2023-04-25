#include<iostream>
#include<ctime>
#include<cstdlib>
#include<string>
#include<fstream>
#include"Function.h"

template<typename T>
void fill_arr(T arr[], const int length, int left, int right){
		srand(time(NULL));
		for (int i = 0; i < length; i++)
			arr[i] = rand() % (right - left) + left;
}
template<typename T>
void print_arr(T arr[], const int length) {
	std::cout << "[ ";
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ", ";
	std::cout << "\b\b ]\n";
}
int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;
	// Задача 1. Выделение памяти под двумерный массив.
	/*std::cout << "Задача 1.\nВведите количество рядов : ";
	std::cin >> n;
	std::cout << "Введите количество столбцов : ";
	std::cin >> m;
	int** mx;
	mx_memory(mx, n, m);
	std::cout << "Выведенный массив : \n";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++)
			std::cout << mx[i][j] << '\t';
		std::cout << '\n';
	}
	clear_mx_memory(mx, n);*/

	// Задача 2. Объединение массивов.
	/*std::cout << "Задача 2.\nМассив 1 : ";
	const int size2_1 = 5;
	int arr2_1[size2_1];
	fill_arr(arr2_1, size2_1, -10, 15);
	print_arr(arr2_1, size2_1);
	std::cout << "\nМассив 2 : ";
	const int size2_2 = 7;
	int arr2_2[size2_2];
	fill_arr(arr2_2, size2_2, -15, 10);
	print_arr(arr2_2, size2_2);
	std::cout << "\nИтоговый массив : ";
	int size2_3;
	int* arr2_3 = positiv_memory(arr2_1, size2_1, arr2_2, size2_2,size2_3);
	print_arr(arr2_3, size2_3);
	delete[] arr2_3;
	std::cout << "\n\n";*/

	//  Задача 3. Названия числа.
	std::cout << "Задача 3.\nВведите двузначное число : ";
	std::cin >> n;
	if(number_name(n,"number.txt"))
		std::cout<<"Число записано в файл.\n";
	else
		std::cout<<"Ошибка выполнения функции.\n";
	
	//fghftghf
	//fguhfcg
	//
	std::cout << "Ошибка выполнения функции.\n";
		std::cout << "Ошибка выполнения функции.\n";
	std::cout << "Ошибка выполнения функции.\n";
	return 0;
}