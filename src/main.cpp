#include "core.h"
#include "wikipedia.h"
#include "ui.h"
#include <memory>
#include <iostream>

int main(int argc, char* argv[]) {
    try {
        cliwiki::Kernel kernel;
        
        // Initialize modules
        auto search_module = std::make_unique<cliwiki::WikipediaSearchModule>();
        auto ui_module = std::make_unique<cliwiki::ConsoleUIModule>();
        
        kernel.setSearchModule(std::move(search_module));
        kernel.setUIModule(std::move(ui_module));
        
        kernel.initialize();
        
        return kernel.run(argc, argv);
    } catch (const std::exception& e) {
        std::cerr << "Fatal error: " << e.what() << std::endl;
        return 1;
    }
}