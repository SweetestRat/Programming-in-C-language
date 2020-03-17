#include "tasks2.h"

using namespace std;

Textfluss::Textfluss() {
    Name = "";
    istgeöffnet = false;
    file = nullptr;
}

Textfluss::Textfluss(const string &name) {
    Öffne(name);
}

int Textfluss::Öffne(const string & NewName) {
    Name = NewName;
    if(!(file = fopen(NewName.c_str(), "w")))
        return 1;
    else
        istgeöffnet = true;
    return istgeöffnet;
}

int Textfluss::Schließen() {
    fclose(file);
    file = nullptr;
    Name = "";
    istgeöffnet = false;
    return 0;
}

string Textfluss::NamenHolen() {
    Name;
    return Name;
}

bool Textfluss::IstGeöffnet() {
    return istgeöffnet;
}

int Textfluss::Schreiben(const string &text) {
    if(!(IstGeöffnet()))
        return 0;
    for (char i = 0; i < text.size(); ++i)
        putc(text[i], file);
    return 1;
}

int Textfluss::Schreiben(int ganzeZahl) {
    if(!IstGeöffnet())
        return 0;
    //  char *text = new char[100];
    //  itoa(ganzeZahl, text, 10);
    char* text = new char[100];
    sprintf(text, "%d", ganzeZahl);
    int res = Schreiben(text);
    // putc(ganzeZahl, file);
    return res;
}

int Textfluss::Schreiben(float reelleZahl) {
    if (!IstGeöffnet())
        return 0;
    char* text = new char[100];
    sprintf(text, "%f", reelleZahl);
    int res = Schreiben(text);
    return res;
}

Textfluss::~Textfluss() {
    Schließen();
}


