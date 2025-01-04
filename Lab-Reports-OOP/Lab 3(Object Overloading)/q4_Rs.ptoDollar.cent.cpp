/*Write a program to convert an object of class Dollar to an object of class Rupees. The attributes
of Dollar is dol and cent. The attributes of class Rupees is rs, and paisa. Conversion in source
class.*/
#include <iostream>
using namespace std;

class Dollar {
public:
    int dol;
    int cent;
    Dollar(int d, int c) {
    dol = d;
    cent = c;
    }
};

class Rupees {
public:
    int rs;
    int paisa;
    Rupees(int r, int p) {
    rs = r;
    paisa = p;
    }
};

Rupees convert(Dollar d) {
    float rate = 132.83;
    float total_dol = d.dol + d.cent / 100.0;
    float total_rs = total_dol * rate;
    int rs = (int)total_rs;
    int paisa = (int)((total_rs - rs) * 100);
    return Rupees(rs, paisa);
}

int main() {
    cout << "Enter the dollar amount: ";
    int d, c;
    cin >> d >> c;
    Dollar dol(d, c);
    Rupees rupee = convert(dol);
    cout << "The equivalent rupees amount is: " << rupee.rs << " rupees and " << rupee.paisa << " paisa\n";
return 0;
}
