#include "Naudotojasv02.h"
#include <algorithm> // Reikalinga funkcijai std::transform
using namespace std;

void toLowercase(string& str) {
    transform(str.begin(), str.end(), str.begin(), ::tolower);
}

void naudotojas(string& inputMethod, string& choice, string& header1, string& header2) {
    do {
        cout << "Pasirinkite ar naudosite duomenis is failo, rasyti ,,Duomenys'' ar naudosite rankiniu budu ivedamus duomenis, rasyti ,,Ranka'':  ar naudosite autogeneruojamus failus ,,AUTO'' ";
        cin >> inputMethod;
        toLowercase(inputMethod); // Konvertuojame �vest� � ma��sias raides
        if (inputMethod != "duomenys" && inputMethod != "ranka" && inputMethod != "auto") {
            cout << "Neteisingai parasete! Bandykite dar karta." << endl;
        }
    } while (inputMethod != "duomenys" && inputMethod != "ranka" && inputMethod != "auto");

    if (inputMethod == "auto") {
       

        do {
            cout << "Prasome pasirinkti ka norite skaiciuoti vidurki ar mediana. Parasykite('vidurkis') arba ('mediana') arba ('abu')-tik AUTO REZIME:";
            cin >> choice;
            toLowercase(choice);

            if (choice == "vidurkis") {
                header1 = "Galutinis(vid.)";
                header2 = ""; // Ataskaitoje rodoma tik viena antra�t�
            }
            else if (choice == "mediana") {
                header1 = "Galutinis(med.)";
                header2 = ""; // Ataskaitoje rodoma tik viena antra�t�
            }
            else {
                cout << "Neteisinga pasirinkimas! Bandykite dar karta. GALIMA TIK VIDURKIS arba MEDIANA" << endl;
            }
        } while (choice != "vidurkis" && choice != "mediana");

        // J�s� papildomi veiksmai AUTO re�ime
    }
    else {
        do {
            cout << "Prasome pasirinkti ka norite skaiciuoti vidurki ar mediana. Parasykite('vidurkis') arba ('mediana') arba ('abu')-tik AUTO REZIME:";
            cin >> choice;
            toLowercase(choice);

            if (choice == "vidurkis") {
                header1 = "Galutinis(vid.)";
            }
            else if (choice == "mediana") {
                header1 = "Galutinis(med.)";
            }
            else if (choice == "abu") {
                header1 = "Galutinis(vid.)";
                header2 = "Galutinis(med.)";
            }
            else {
                cout << "Neteisinga pasirinkimas! Bandykite dar karta." << endl;
            }
        } while (choice != "vidurkis" && choice != "mediana" && choice != "abu");
    }
    cin.ignore(); // leis per nauj ivesti 
}
