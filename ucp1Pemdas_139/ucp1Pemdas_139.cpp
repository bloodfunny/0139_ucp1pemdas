
// 1. bilangan dideklarasikan dengan tipe data int, nama dideklarasikan dengan tipe data string, dan nilai MTK dideklarasikan dengan tipe data float
// 2. prosedur jika diberikan nilai tugasnya hanya melewatkan nilai tersebut bukan mengembalikan nilai dan fungsi tugasnya mengembalikan nilai jika diberikan sebuah nilai. 
// 3. diberikan sebuah kalimat, kalimat tersebut ingin dimunculkan sebanyak 7x pada monitor. pada awal menayangangkan kalimat tersebut ber nilai 0 karena belum ditampilkan, setelah penayangan kalimat bernilai n + 1. jika n kurang dari 7 kalimat itu akan tetap ditayangkan hingga berjumlah 7 
// 4. siswa dinyatakan lulus jika nilai praktikumnya diatas 8 atau nilai teori diatas 7. jika nilai praktik siswa 9 dan nilai teori 6 siswa lulus berdasar nilai praktik, jika nilai praktik 7 dan nilai teori 7 maka siswa lulus berdasar nilai teori. misal ada siswa nilai semuanya 5 maka siswa dinyatakan tidak lulus
// 5. struct berfungsi untuk menyimpan data. contoh untuk menyimpan data warga, data warga sendiri terdari nama,alamat,NIK.RT/RW,dan pekerjaan. data tersebut nantinya disimpan di struct

#include <iostream>
using namespace std;

int main() {
	int nSensor1, nSensor2, nSensor3, rerata;
	string status;

	cout << "Memasukan nilai sensor1 ";
	cin >> nSensor1;
	cout << "Memasukan nilai sensor2 ";
	cin >> nSensor2;
	cout << "Memasukan nilai sensor3 ";
	cin >> nSensor3;

	rerata = (nSensor1 + nSensor2 + nSensor3) / 3;

	if (rerata <= 75) {
		status = "Udara tidak sehat ";
	}
	else if (nSensor1 <= 45) {
		status = "Udara tidak sehat ";
	}
	else if (nSensor2 <= 45) {
		status = "Udara tidak sehat ";
	}
	else if (nSensor3 <= 45) {
		status = "Udara tidak sehat ";
	}
	else {
		status = "Udara sehat";
	}

	cout << "Kualitas dinyatakan =" << status << endl;

}

struct Udara {
	string kota;
	string status;
};

int main () {
	Udara udr;
	cout << "Nama kota : ";
	cin >> udr.kota;
	cout << "status : ";
	cin >> udr.status;

	cout << endl;
	cout << "\n Nama kota : " << udr.kota;
	cout << "\n status : " << udr.status;
}
