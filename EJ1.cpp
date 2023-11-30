#include <iostream>
#include <string>
#include <fstream>

void load_script(const char* filename, bool show_script = false) {
    std::ifstream file(filename);

    if (!file) {
        std::cerr << "No se pudo abrir el archivo " << filename << std::endl;
        return;
    }

    std::string line;
    while (std::getline(file, line)) {
        if (show_script) {
            std::cout << line << std::endl;
        }
    }

    file.close();
}
void load_script() {
    std::string filename;
    std::cout << "Introduce el nombre del archivo: ";
    std::cin >> filename;

    load_script(filename.c_str(), true);
}

int main() {
    load_script();
    return 0;
}

