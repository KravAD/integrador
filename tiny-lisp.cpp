#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void load_script (const char* filename, bool show_script = false) {

    ifstream file(filename);
    if (!file.is.open()) {
        cerr << "Error: No se pudo abrir el archivo " << filename << endl;
        return;
    }

}

string script_content((istreambuf_iterator<char>(file)), istreambuf_iterator<char>());
