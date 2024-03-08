#include <iostream>
#include <string>
using namespace std;

int arr[20]; //Deklarasi variabel global array a dengan ukuran 20
int n; //Deklarasi variabel global n untuk menyimpan banyak elemen array

void input() { //procedur untuk input
	while (true) {
		cout << "Masukan banyaknya elemen array = "; // output ke layar
		cin >> n; //input dari pengguna
		if (n <= 20) //jika n kurang dari atau sama dengan 20
			break; // keluar dari loop
		else { //Jika n lebih dari 20
			cout << "\nArray dapat mempunyai maksimal 20 elemen. \n"; // output ke layar
		}
	}
	cout << endl;
	cout << "====================" << endl;
	cout << "Masukan Elemen Array" << endl;
	cout << "====================" << endl;

	for (int i = 0; i < n; i++) { //Looping dengan i dimulai dari 0 hingga n-1
		cout << "Data ke-" << (i + 1) << " : "; // Output ke layar
		cin >> arr[i];
	}
}
void bubbleSortArray() {
	int pass = 1;

	do {
		for (int j = 0; j <= n - 1 - pass; j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j = 1];
				arr[j + 1] = temp;

			}
		}
		pass = pass + 1;

		cout << endl;
	} while (pass <= n - 1);

}

