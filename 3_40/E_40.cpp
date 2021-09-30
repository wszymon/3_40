#include <iostream>



int main()
{
    char* p = new char[11];
    std::cin >> p;
    int licznik = 0;
    for (int i = 0; i < 11; i++) {
        if (!isdigit(p[i]))
            licznik = i;
    }
    for (int i = 48; i < 58; i++) {
        int suma = 0;
        p[licznik] = i;
        //std::cout << p[licznik] << std::endl;
        suma = ((p[0]-48) * 1) + ((p[1] - 48) * 3) + ((p[2] - 48) * 7) + ((p[3] - 48) * 9) + ((p[4] - 48) * 1) + ((p[5] - 48) * 3) + ((p[6] - 48) * 7) + ((p[7] - 48) * 9) + ((p[8] - 48) * 1) + ((p[9] - 48) * 3);
        //std::cout << suma << std::endl;
        if (p[10] == (10 - (suma % 10)) % 10)
            break;
    }
    for (int i = 0; i < 11; i++) {
        std::cout << p[i];
    }
    return 0;
}

/*

Napisz program, który dla podanego niepe³nego numeru PESEL wypisze pierwszy leksykograficznie poprawny numer PESEL. Niepe³noœæ numeru PESEL polega na tym, ¿e dok³adnie jedna jego cyfra zosta³a zast¹piona przez znak '?'.

Na wejœciu znajduje siê pojedynczy numer PESEL, w którym jedna z cyfr zosta³a zast¹piona znakiem '?'. Na wyjœciu program powinien wydrukowaæ najmniejszy leksykograficznie numer PESEL pasuj¹cy do wczytanego wzorca.

Przyk³adowe wejœcie:
1031220012?
Przyk³adowe wyjœcie:
10312200124
Uwaga! Numer PESEL sk³ada siê z 11 cyfr. Pierwsze 10 cyfr to cyfry informacyjne. Ostatnia z nich to cyfra kontrolna.
Ka¿da z 10 cyfr ma przypisan¹ konkretn¹ wagê.
Numer PESEL:

   abcdefghijk
Cyfry numeru PESEL:
   a b c d e f g h i j k
Wagi kolejnych cyfr:
   1 3 7 9 1 3 7 9 1 3 x
Sprawdzenie poprawnoœci sprowadza siê do zsumowania pierwszych dziesiêciu cyfr pomno¿onych przez swoj¹ wagê:
   suma = a*1 + b*3 + c*7 + d*9 + e*1 + f*3 + g*7 + h*9 +i*1 + j*3
A nastêpnie trzeba dokonaæ porównanie:
   k == (10-suma%10)%10
Po porównaniu wiadomo, czy podany numer PESEL jest poprawny czy te¿ nie.
*/
