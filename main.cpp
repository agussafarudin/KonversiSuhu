#include <iostream>

using namespace std;

int main()
{
    float C,F,R,a=1.8,b=32,x=0.8;
    cout<< " ----Program Konversi Suhu---- \n \n";
    cout<< " Masukkan Nilai Suhu (Celsius)  =";
    cin>>C;
    cout<<" \n";
    F=a*C+b;
    R=x*C;
    cout<< " Nilai Fahrenheit adalah        =";
    cout<<F;
    cout<<"\n" ;
    cout<< " Nilai Reamur adalah            =";
    cout<<R;
    return 0;
}
