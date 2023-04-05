#include <iostream>
#include <string>
using namespace std;

class YerlesimBirimi {
    string isim;
    int nufus, dogumSayisi, olumSayisi;

public:
    void isimAta(string _isim) { isim = _isim; }
    void nufusAta(int _nufus) { nufus = _nufus; }
    void dogumAta(int _dogumSayisi) { dogumSayisi = _dogumSayisi; }
    void olumAta(int _olumSayisi) { olumSayisi = _olumSayisi; }

    float dogumOrani() { return (float)dogumSayisi / nufus; }
    float olumOrani() { return (float)olumSayisi / nufus; }
};

int main() {
    YerlesimBirimi Ankara, Turkiye;
    string isim;
    int dogumSayisi, olumSayisi, nufus;

    cout << "Ankara icin Verileri Giriniz: " << endl;

    cout << "Yerlesim Birimi Ismi: ";
    cin >> isim;
    Ankara.isimAta(isim);

    cout << "Nufusu Giriniz: ";
    cin >> nufus;
    Ankara.nufusAta(nufus);

    cout << "Dogum Sayisini Giriniz: ";
    cin >> dogumSayisi;
    Ankara.dogumAta(dogumSayisi);

    cout << "Olum Sayisini Giriniz: ";
    cin >> olumSayisi;
    Ankara.olumAta(olumSayisi);

    cout << "Dogum Orani: " << Ankara.dogumOrani() << endl;
    cout << "Olum Orani: " << Ankara.olumOrani() << endl<<"\n\n\n";

    cout << "Turkiye icin Verileri Giriniz: " << endl;

    cout << "Yerlesim Birimi Ismi: ";

    cin>>isim;
    Turkiye.isimAta(isim);

    cout << "Nufusu Giriniz: ";
    cin >> nufus;
    Turkiye.nufusAta(nufus);

    cout << "Dogum Sayisini Giriniz: ";
    cin >> dogumSayisi;
    Turkiye.dogumAta(dogumSayisi);

    cout << "Olum Sayisini Giriniz: ";
    cin >> olumSayisi;
    Turkiye.olumAta(olumSayisi);

    cout << "Dogum Orani: " << Turkiye.dogumOrani() << endl;
    cout << "Olum Orani: " << Turkiye.olumOrani() << endl;;

    return 0;
}
