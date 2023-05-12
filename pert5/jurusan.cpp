#include <iostream>

using namespace std;

main()
{
    char cKode;

    cout<<"Input kode Jurusan [A/B] : ";
    cin>>cKode;

    switch(cKode)
    {
        case 'A' :
        case 'a' :
            cout<<"\nTeknik Informatika";
            break;
        case 'B' :
        case 'b' :
            cout<<"\nSistem Informasi";
            break;
        default
            cout<<"\nAnda salah memasukan kode";
            break;
    }
}