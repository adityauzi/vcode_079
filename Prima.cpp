#include <iostream>
using namespace std;
int num = 0;
int countPrima = 0;
int inPrima(int number) {
	if (number <= 1) {
		return false
	}
	for (int i = 2; i <= number / 2; i++) {
		if (number % i == 0) {
		}
	}
}

int main({


	cout << "Bilangan prima antara 1 sampai 50 adalah:" << endl;
	for (int i = 2; i <= 50; i++) {
		if (inPrima(i)) {
			countPrima++;
			cout << i << " ";
			num += i;
		}
	}

	cout << "\njumlah bilangan prima antara 1 sampai 50 adalah:" << num << endl;
	
	return 0;

