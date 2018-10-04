// Lesson 7 - References.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

void swap(int x, int y) {
	int temp = x;
	x = y;
	y = temp;
}

void swap(int* x, int* y) {
	int temp = *x;
	*x = *y;
	*y = temp;
}

void swap_ref(int& x, int& y) {
	int temp = x;
	x = y;
	y = temp;
}

void swap_char(char& a, char& b) {
	char temp = a;
	a = b;
	b = temp;
}

int main() {

	int a;
	char c = 'c';
	char d = 'd';

	cout << "c = " << c << "    d = " << d << "\n";
	swap_char(c, d);
	cout << "After swap\n" << "c = " << c << "    d = " << d << "\n";

	int nums[10] = { 7,3,5,2,1,4,6,9,10,8 };

	int swaps = 10;

	while (swaps > 0) {
		swaps = 0;
		for (int i = 0; i < 9; i++)
		{
			if (nums[i] > nums[i + 1]) {
				swap_ref(nums[i], nums[i + 1]);
				swaps++;
			}
		}
	}
	for (int i = 0; i < 10; i++)
	{
		cout << nums[i] << "\n";
	}

	/*int a, b;

	cout << "Please type in a number" << "\n";
	cin >> a;
	cout << "Please type in another number" << "\n";
	cin >> b;

	cout << "before swap, a = " << a << " and b = " << b << "\n";
	swap(a, b);
	cout << "after swap (by value), a = " << a << " and b = " << b << "\n";
	swap(&a, &b);
	cout << "after swap by pointer reference, a = " << a << " and b = " << b << "\n";

	swap_ref(a, b);
	cout << "after swap using references, a = " << a << " and b = " << b << "\n";

	int& a_ref = a;*/

	cin >> a;

	return 0;
}