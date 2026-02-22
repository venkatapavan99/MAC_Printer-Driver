// PrinterDriver.cpp
#include <iostream>
#include <string>

class PrinterDriver {
public:
    bool connect(const std::string& printerName) {
        std::cout << "Connecting to printer: " << printerName << std::endl;
        // Simulate connection success
        return true;
    }

    bool print(const std::string& document) {
        if (document.empty()) {
            std::cerr << "Error: Document is empty!" << std::endl;
            return false;
        }
        std::cout << "Printing document: " << document << std::endl;
        // Simulate print success
        return true;
    }

    void disconnect() {
        std::cout << "Disconnecting printer..." << std::endl;
    }
};

int main() {
    PrinterDriver driver;
    if (driver.connect("PavanPrinter-1000")) {
        driver.print("SampleInvoice.pdf");
        driver.disconnect();
    }
    return 0;
}

