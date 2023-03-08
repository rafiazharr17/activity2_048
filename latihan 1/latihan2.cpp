#include <iostream>         //File yang disetakan line 1-2
using namespace std;        //program utama line 4-20

int main(){//Begin

   //numeric Luas, P, L
   double Luas, P, L;
   //display, "Masukkan Panjangnya : "
   cout << "Masukkan Panjangnya : ";
   //accept P
   cin >> P;
   //display "Masukkan Lebarnya : "
   cout << "Masukkan Lebarnya : ";
   //accept L
   cin >> L;
   //compute Luas = P*L
   Luas = P*L;
   //display "Luasnya : " + Luas
   cout << "Luasnya : " << Luas;
}//End