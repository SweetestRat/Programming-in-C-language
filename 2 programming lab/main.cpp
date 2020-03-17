#include <iostream>
#include "tasks2.h"

int main()
{
    Textfluss textfluss = Textfluss();
    char Befehl;
    string text;
    int ganzeZahl;
    float reelleZahl;

    while(true)
    {
        cout << "\n~~~~~~~~~~MENÜ~~~~~~~~~~\n"
                "Verfügbare Befehle:\n"
                "1. Öffne die Datei\n"
                "2. Schließen Sie die Datei\n"
                "3. Holen Sie sich den Namen der Datei\n"
                "4. Ist die Datei geöffnet?\n"
                "5. Schreibe eine Zeile\n"
                "6. Schreibe eine ganze Zahl\n"
                "7. Schreibe eine reelle Zahl\n"
                "8. Ausfahrt\n"
                "Geben Sie die Nummer ein: ";
        cin >> Befehl;

        switch(Befehl)
        {
            case '1':
                cout << "Schreiben Sie die Name: ";
                cin >> text;
                if(textfluss.Öffne(text))
                    cout << "Die Datei ist geöffnet";
                else
                    cout << "Die Datei ist nicht geöffnet";
                break;
            case '2':
                if(textfluss.Schließen() != 0)
                    cout << "Datei ist nicht geschlossen" << "\n";
                else
                    cout << "Datei ist geschlossen" << "\n";
                break;
            case '3':
                cout << textfluss.NamenHolen() << '\n';
                break;
            case '4':
                cout << "Ist die Datei geöffnet? : " << (textfluss.IstGeöffnet()? "JA" : "NEIN") << '\n';
                break;
            case '5':
                if(textfluss.IstGeöffnet())
                {
                    cout << "Zeichenfolge hinzufügen:\n";
                    cin >> text;
                }
                if(textfluss.Schreiben(text))
                    cout << "Der Text wurde geschrieben";
                else
                    cout << "Der Text wurde nicht geschrieben";
                break;
            case '6':
                cout << "Ganzzahl hinzufügen:\n";
                cin >> ganzeZahl;
                if(textfluss.Schreiben(ganzeZahl))
                    cout << "Die ganze Zahl wurde geschrieben";
                else
                    cout << "Die ganze Zahl wurde nicht geschrieben";
                break;
            case '7':
                cout << "Reellezahl hinzufüngen:\n";
                cin >> reelleZahl;
                textfluss.Schreiben(reelleZahl);
                break;
            case '8':
                goto exit;
            default:
                break;
        }
    }
    exit:
    return 0;
}
