#include <iostream>

using namespace std;

class MyClass {
public:
    void banner(string banner) {
        cout << "===== Selamat Datang di Bank Uang SKADI =====" << endl;
        cout << "======= Silahkan Login terlebih Dahulu ======" << endl;
    }
};
void buat_akun() {
    string jawaban, rek, akun, pass, konfirmasi, jawaban2;
    int ngisiduid;
    cout << "anda belum terdaftar di Bank SKADI" << endl;
    cout << "=========apakah anda ingin mendaftarkan diri di Bank SKADI?========" << endl;
    cout << "=====ketik iya untuk mendaftar dan tidak untuk tidak mendaftar=====" << endl;
    cin >> jawaban;
    if (jawaban == "iya") {
        cout << "==silahkan buat username==" << endl;
        cin >> akun;
        cout << "==silahkan buat password baru==" << endl;
        cin >> pass;
        cout << "komfirmasi pembuatan akun dengan mengketik iya" << endl;
        cin >> konfirmasi;
        if (konfirmasi == "iya") {
            cout << "====selamat akun anda telah terbuat====" << endl;
            cout << "silahkan buat rekening anda dan isi dengan uang yang anda miliki dan tolong ketik nominalnya" << endl;
            cout << "======Buat Rekening======" << endl;
            cin >> rek;
            cout << "===Isi rekening dengan uang cash===" << endl;
            cin >> ngisiduid;
            cout << "Username anda adalah : " << akun << endl;
            cout << "Password anda adalah : " << pass << endl;
            cout << "Anda memiliki 1 rekening dengan nama " << rek << " dan berisi " << ngisiduid << " rupiah" << endl;
            cout << "====Apakah anda tertarik dengan tawaran kami? ketik iya untuk melihat====" << endl;
            cin >> jawaban2;
            if (jawaban2 == "iya") {
                for (int i = 1; i <= 5; i++) {
                    cout << "Tawaran BANK SKADI " << i << endl;
                }
            }
            else {
                cout << "Silahkan Jelajahi Fitur-Fitur Kami Yang Lain" << endl;
            }
        }
        else {
            cout << "silahkan coba lagi" << endl;
        }
    }
    else {
        cout << "Silahkan keluar daru ruang ATM" << endl;
    }
}
void masuk_akun1() {
    string akun, rek, pass;

    int duid[5];
    duid[1] = 21500000;
    duid[2] = 17200000;
    duid[3] = 12350000;
    duid[4] = 8660000;
    duid[5] = 5210000;

    login_akun:
    cout << "Account : ";
    cin >> akun;
    cout << "Password : ";
    cin >> pass;

    if (akun == "doctor123ler") {
        if (pass == "4yaka5kadi") {
            cout << "Ketik rekening yang ingin anda lihat : " << endl;
            cin >> rek;
            if (rek == "1") {
                cout << "rekening 1 : " << duid[0] << endl;
            }
            else if (rek == "2") {
                cout << "rekening 2 : " << duid[1] << endl;
            }
            else if (rek == "3") {
                cout << "rekening 3 : " << duid[2] << endl;
            }
            else if (rek == "4") {
                cout << "rekening 4 : " << duid[3] << endl;
            }
            else if (rek == "5") {
                cout << "rekening 5 : " << duid[4] << endl;
            }
            else if (rek == "semua") {
                cout << "Total Tabungan Anda" << endl;
                int i = 1;
                while (i <= 5) {
                    cout << "rekening " << i << " : " << duid[i] << endl;
                    i++;
                }      
            }
        }
        else {
            cout << "Password rekening anda salah, coba lagi!" << endl;
            goto login_akun;
        }
    }
    else {
        buat_akun();
    }
}
void login() {
    string pass, akun;
    MyClass myObj;
    myObj.banner("banner");
    masuk_akun1();
}
void atm() {
    login();
}

int main()
{
    atm();
}
