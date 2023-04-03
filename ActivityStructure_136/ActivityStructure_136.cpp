#include <iostream>
using namespace std;

struct mahasiswa
{
	string NIM;
	string nama;
	string alamat;
	int umur;
};
int main() {
	mahasiswa mhs1, mhs2;

	mhs1.NIM = "20220140136";
	mhs1.nama = "Novita Salsabila";
	mhs1.alamat = " yogyakarta";
	mhs1.umur = 18;

	cout << "Masukan NIM :";
	cin >> mhs2.NIM;
	cout << "Masukan Nama :";
	cin >> mhs2.nama;
	cout << "Masukan Alamat :";
	cin >> mhs2.alamat;
	cout << "Masukan Umur :";
	cin >> mhs2.umur;


}

