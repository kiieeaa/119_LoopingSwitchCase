#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
int n;
int perulanganWhile = 0;
int perulanganDo = 0;
cout << "perulangan for pecacah naik" << endl;
for (n = 0; n < 5; n++)
{
cout << "Nilai n =" << n << " selamat datang" << endl;
}
cout << "Nilai n terakhir = " << n << endl;
cout << endl;

cout << "Perulangan for pecacah turun" << endl;

for (n = 5; n > 0; n--)
{
    cout << "Nilai n = " << n << "selamat datang" << endl;

}
cout << "Nilai n terakhir = " << n;
cout << endl;

cout << "perulangan while" << endl;

srand(time(0));
n = rand () % 10;

cout << "Nilai awal n = " << n << endl;
while (n < 7)
{
    cout << "Nilai n = " << n << endl;
    n = rand() % 10;
    perulanganWhile++;
}
cout << "Jumlah perulangan = " << perulanganWhile << endl;
cout << "Nilai n terakhir = " << n << endl;

cout << "perulangan do while" << endl;

