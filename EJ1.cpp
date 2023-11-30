#include <iostream>
#include <string>
#include <fstream>

void load_script(const char* filename, bool show_script = false) {
    std::ifstream file(filename);
    if (!file) {
        std::cerr << "No se pudo abrir el archivo " << filename << std::endl;
        return 0;
    }



