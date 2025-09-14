#pragma once

#include "core.h"

namespace cliwiki {

class ConsoleUIModule : public IUIModule {
private:
    bool colors_enabled_;
    
    void showWelcome();
    void showMenu(const std::string& language);
    void showLanguages();

public:
    void initialize(const Config& config) override;
    std::string getName() const override;
    void showHelp() override;
    void showVersion() override;
    void runInteractive(Config& config, SearchCallback searchFn = nullptr) override;
    void displayResult(const std::string& result) override;
    void displayError(const std::string& error) override;
};

}