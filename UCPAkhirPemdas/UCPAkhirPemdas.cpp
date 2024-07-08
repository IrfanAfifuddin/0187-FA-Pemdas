#include <iostream>
using namespace std;

class MasukUniversitas {
	int uangPendaftaran;

public:
	MasukUniversitas() {
		uangPendaftaran = 0;
		{
			cout << "Masukkan uang pendaftaran";
		}
	}
	virtual void namaJalurMasuk() { return; }
	
	void setUangPendaftaran(int nilai) {
		this->uangPendaftaran = nilai;
	}

	float getUangPendaftaran() {
		return uangPendaftaran;
	}
};

class SNBT : public MasukUniversitas {
public:

	SNBT(int pNIlai) :
		SNBP(pNilai)
	{
		cout << "pekerja dibuat\n" << endl;
	}
};
class SNBP : public MasukUniversitas {
public:

	SNBP(int pNIlai) :
		SNBT(pNilai)
	{
		cout << "pekerja dibuat\n" << endl;
	}
};

int main() {

	 while (true) {
		try {
			cout << "\nPilih Jalur Masuk :" << endl;
			cout << "1. SNBT" << endl;
			cout << "2. SNBP" << endl;
			cout << "3. Exit" << endl;
			cout << "Enter your choise (1-4): ";
			cin >> ch;
			cout << endl;

			switch (ch) {
			case '1': {
				insert();
				break;
			}

			case '2': {
				insert();
				break;
			}

			case '3': {
				return 0;
			}

			default: {
				cout << "Invalid option!!" << endl;
				break;
			}
			}
		}
		catch (exception& e) {
			cout << "Check for the values entered." << endl;
		}
	}
}