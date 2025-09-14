#include "ui.h"
#include "colors.h"
#include <iostream>
#include <json/json.h>
#include <thread>

namespace cliwiki {

void ConsoleUIModule::initialize(const Config& config) {
    colors_enabled_ = config.colors_enabled;
}

std::string ConsoleUIModule::getName() const {
    return "Console UI Module";
}

void ConsoleUIModule::showWelcome() {
    if (colors_enabled_) {
        std::cout << colors::BOLD << colors::CYAN;
    }
    std::cout << "================================================================\n";
    std::cout << "                    Welcome to cliwiki!                        \n";
    std::cout << "================================================================\n";
    if (colors_enabled_) {
        std::cout << colors::RESET;
    }
}

void ConsoleUIModule::showMenu(const std::string& language) {
    std::cout << "\n";
    if (colors_enabled_) {
        std::cout << colors::BG_BLUE << colors::WHITE;
    }
    std::cout << " Language: " << language << " ";
    if (colors_enabled_) {
        std::cout << colors::RESET;
    }
    std::cout << "\n\n";
    
    if (colors_enabled_) {
        std::cout << colors::GREEN;
    }
    std::cout << "Available commands:";
    if (colors_enabled_) {
        std::cout << colors::RESET;
    }
    std::cout << "\n";
    
    if (colors_enabled_) {
        std::cout << "  " << colors::CYAN;
    }
    std::cout << "[search term]";
    if (colors_enabled_) {
        std::cout << colors::RESET;
    }
    std::cout << "     Search Wikipedia\n";
    
    if (colors_enabled_) {
        std::cout << "  " << colors::CYAN;
    }
    std::cout << ":lang [code]";
    if (colors_enabled_) {
        std::cout << colors::RESET;
    }
    std::cout << "       Change language (e.g. :lang en)\n";
    
    if (colors_enabled_) {
        std::cout << "  " << colors::CYAN;
    }
    std::cout << ":langs";
    if (colors_enabled_) {
        std::cout << colors::RESET;
    }
    std::cout << "            Show all supported languages\n";
    
    if (colors_enabled_) {
        std::cout << "  " << colors::CYAN;
    }
    std::cout << ":help";
    if (colors_enabled_) {
        std::cout << colors::RESET;
    }
    std::cout << "             Show this menu\n";
    
    if (colors_enabled_) {
        std::cout << "  " << colors::CYAN;
    }
    std::cout << ":quit";
    if (colors_enabled_) {
        std::cout << colors::RESET;
    }
    std::cout << "             Exit program\n";
}

void ConsoleUIModule::showLanguages() {
    std::cout << "\n";
    if (colors_enabled_) {
        std::cout << colors::GREEN;
    }
    std::cout << "Supported languages:";
    if (colors_enabled_) {
        std::cout << colors::RESET;
    }
    std::cout << "\n\n";
    
    if (colors_enabled_) {
        std::cout << colors::YELLOW;
    }
    std::cout << "Code │ Language";
    if (colors_enabled_) {
        std::cout << colors::RESET;
    }
    std::cout << "\n";
    std::cout << "─────┼─────────────────\n";
    std::cout << " ru  │ Russian\n";
    std::cout << " en  │ English\n";
    std::cout << " de  │ German\n";
    std::cout << " fr  │ French\n";
    std::cout << " es  │ Spanish\n";
    std::cout << " it  │ Italian\n";
    std::cout << " pt  │ Portuguese\n";
    std::cout << " ja  │ Japanese\n";
    std::cout << " zh  │ Chinese\n";
    std::cout << " ko  │ Korean\n";
    std::cout << " ar  │ Arabic\n";
    std::cout << " pl  │ Polish\n";
    std::cout << " nl  │ Dutch\n";
    std::cout << " sv  │ Swedish\n";
    std::cout << " no  │ Norwegian\n";
    std::cout << " da  │ Danish\n";
    std::cout << " fi  │ Finnish\n";
    std::cout << " tr  │ Turkish\n";
    std::cout << " he  │ Hebrew\n";
    std::cout << " uk  │ Ukrainian\n";
}

void ConsoleUIModule::showHelp() {
    if (colors_enabled_) {
        std::cout << colors::BOLD << colors::BLUE;
    }
    std::cout << "cliwiki";
    if (colors_enabled_) {
        std::cout << colors::RESET << colors::CYAN;
    }
    std::cout << " - Command-line Wikipedia search tool";
    if (colors_enabled_) {
        std::cout << colors::RESET;
    }
    std::cout << "\n\n";
    
    if (colors_enabled_) {
        std::cout << colors::YELLOW;
    }
    std::cout << "Usage:";
    if (colors_enabled_) {
        std::cout << colors::RESET;
    }
    std::cout << " cliwiki ";
    if (colors_enabled_) {
        std::cout << colors::DIM;
    }
    std::cout << "[OPTIONS] [QUERY]";
    if (colors_enabled_) {
        std::cout << colors::RESET;
    }
    std::cout << "\n\n";
    
    if (colors_enabled_) {
        std::cout << colors::GREEN;
    }
    std::cout << "Options:";
    if (colors_enabled_) {
        std::cout << colors::RESET;
    }
    std::cout << "\n";
    
    if (colors_enabled_) {
        std::cout << "  " << colors::CYAN;
    }
    std::cout << "--help, -h";
    if (colors_enabled_) {
        std::cout << colors::RESET;
    }
    std::cout << "         Show this help message\n";
    
    if (colors_enabled_) {
        std::cout << "  " << colors::CYAN;
    }
    std::cout << "--version, -v";
    if (colors_enabled_) {
        std::cout << colors::RESET;
    }
    std::cout << "      Show version and author information\n";
    
    if (colors_enabled_) {
        std::cout << "  " << colors::CYAN;
    }
    std::cout << "--tui";
    if (colors_enabled_) {
        std::cout << colors::RESET;
    }
    std::cout << "              Start in interactive TUI mode\n";
    
    if (colors_enabled_) {
        std::cout << "  " << colors::CYAN;
    }
    std::cout << "--lang LANG, -l";
    if (colors_enabled_) {
        std::cout << colors::RESET;
    }
    std::cout << "    Set Wikipedia language ";
    if (colors_enabled_) {
        std::cout << colors::DIM;
    }
    std::cout << "(default: ru)";
    if (colors_enabled_) {
        std::cout << colors::RESET;
    }
    std::cout << "\n\n";
    
    if (colors_enabled_) {
        std::cout << colors::GREEN;
    }
    std::cout << "Supported languages:";
    if (colors_enabled_) {
        std::cout << colors::RESET;
    }
    std::cout << "\n";
    if (colors_enabled_) {
        std::cout << "  " << colors::WHITE;
    }
    std::cout << "ru, en, de, fr, es, it, pt, ja, zh, ko, ar, pl, nl, sv, no, da, fi, tr, he, uk";
    if (colors_enabled_) {
        std::cout << colors::RESET;
    }
    std::cout << "\n\n";
    
    if (colors_enabled_) {
        std::cout << colors::GREEN;
    }
    std::cout << "Examples:";
    if (colors_enabled_) {
        std::cout << colors::RESET;
    }
    std::cout << "\n";
    
    if (colors_enabled_) {
        std::cout << "  " << colors::BOLD;
    }
    std::cout << "cliwiki \"Linux\"";
    if (colors_enabled_) {
        std::cout << colors::RESET;
    }
    std::cout << "               ";
    if (colors_enabled_) {
        std::cout << colors::DIM;
    }
    std::cout << "# Search for Linux article in Russian";
    if (colors_enabled_) {
        std::cout << colors::RESET;
    }
    std::cout << "\n";
    
    if (colors_enabled_) {
        std::cout << "  " << colors::BOLD;
    }
    std::cout << "cliwiki --lang en \"Linux\"";
    if (colors_enabled_) {
        std::cout << colors::RESET;
    }
    std::cout << "      ";
    if (colors_enabled_) {
        std::cout << colors::DIM;
    }
    std::cout << "# Search in English Wikipedia";
    if (colors_enabled_) {
        std::cout << colors::RESET;
    }
    std::cout << "\n";
    
    if (colors_enabled_) {
        std::cout << "  " << colors::BOLD;
    }
    std::cout << "cliwiki -l de \"Computer\"";
    if (colors_enabled_) {
        std::cout << colors::RESET;
    }
    std::cout << "       ";
    if (colors_enabled_) {
        std::cout << colors::DIM;
    }
    std::cout << "# Search in German Wikipedia";
    if (colors_enabled_) {
        std::cout << colors::RESET;
    }
    std::cout << "\n";
    
    if (colors_enabled_) {
        std::cout << "  " << colors::BOLD;
    }
    std::cout << "cliwiki --tui";
    if (colors_enabled_) {
        std::cout << colors::RESET;
    }
    std::cout << "                 ";
    if (colors_enabled_) {
        std::cout << colors::DIM;
    }
    std::cout << "# Start interactive mode";
    if (colors_enabled_) {
        std::cout << colors::RESET;
    }
    std::cout << "\n";
    
    if (colors_enabled_) {
        std::cout << "  " << colors::BOLD;
    }
    std::cout << "cliwiki --help";
    if (colors_enabled_) {
        std::cout << colors::RESET;
    }
    std::cout << "                ";
    if (colors_enabled_) {
        std::cout << colors::DIM;
    }
    std::cout << "# Show this help";
    if (colors_enabled_) {
        std::cout << colors::RESET;
    }
    std::cout << "\n\n";
    
    if (colors_enabled_) {
        std::cout << colors::CYAN;
    }
    std::cout << "Tip:";
    if (colors_enabled_) {
        std::cout << colors::RESET;
    }
    std::cout << " If no query is provided, the program will start in interactive mode.\n";
}

void ConsoleUIModule::showVersion() {
    if (colors_enabled_) {
        std::cout << colors::BOLD << colors::BLUE;
    }
    std::cout << "cliwiki";
    if (colors_enabled_) {
        std::cout << colors::RESET;
    }
    std::cout << " ";
    if (colors_enabled_) {
        std::cout << colors::GREEN;
    }
    std::cout << "v1.0.0";
    if (colors_enabled_) {
        std::cout << colors::RESET;
    }
    std::cout << "\n\n";
    
    if (colors_enabled_) {
        std::cout << colors::YELLOW;
    }
    std::cout << "Author:";
    if (colors_enabled_) {
        std::cout << colors::RESET;
    }
    std::cout << " ";
    if (colors_enabled_) {
        std::cout << colors::CYAN;
    }
    std::cout << "AnmiTaliDev";
    if (colors_enabled_) {
        std::cout << colors::RESET;
    }
    std::cout << "\n";
    
    if (colors_enabled_) {
        std::cout << colors::YELLOW;
    }
    std::cout << "Original idea and some code:";
    if (colors_enabled_) {
        std::cout << colors::RESET;
    }
    std::cout << " ";
    if (colors_enabled_) {
        std::cout << colors::CYAN;
    }
    std::cout << "holos (@wholos)";
    if (colors_enabled_) {
        std::cout << colors::RESET;
    }
    std::cout << "\n\n";
    
    if (colors_enabled_) {
        std::cout << colors::WHITE;
    }
    std::cout << "A colorful command-line tool for searching Wikipedia articles.";
    if (colors_enabled_) {
        std::cout << colors::RESET;
    }
    std::cout << "\n";
    
    if (colors_enabled_) {
        std::cout << colors::DIM;
    }
    std::cout << "Built with C++, libcurl, and jsoncpp";
    if (colors_enabled_) {
        std::cout << colors::RESET;
    }
    std::cout << "\n";
}

void ConsoleUIModule::runInteractive(Config& config, SearchCallback searchFn) {
    std::string input;
    
    colors::clearScreen();
    showWelcome();
    showMenu(config.language);
    
    while (true) {
        std::cout << "\n";
        if (colors_enabled_) {
            std::cout << colors::BOLD << colors::MAGENTA;
        }
        std::cout << "cliwiki";
        if (colors_enabled_) {
            std::cout << colors::RESET << colors::DIM;
        }
        std::cout << " (" << config.language << ")";
        if (colors_enabled_) {
            std::cout << colors::RESET;
        }
        std::cout << " > ";
        
        if (!std::getline(std::cin, input)) break;
        
        if (input.empty()) continue;
        
        if (input == ":quit" || input == ":q" || input == ":exit") {
            if (colors_enabled_) {
                std::cout << colors::GREEN;
            }
            std::cout << "Goodbye! Thanks for using cliwiki!";
            if (colors_enabled_) {
                std::cout << colors::RESET;
            }
            std::cout << "\n";
            break;
        } else if (input == ":help" || input == ":h") {
            showMenu(config.language);
        } else if (input == ":langs") {
            showLanguages();
        } else if (input.substr(0, 5) == ":lang") {
            if (input.length() > 6) {
                std::string newLang = input.substr(6);
                if (config.isLanguageSupported(newLang)) {
                    config.language = newLang;
                    if (colors_enabled_) {
                        std::cout << colors::GREEN;
                    }
                    std::cout << "Language changed to: " << newLang;
                    if (colors_enabled_) {
                        std::cout << colors::RESET;
                    }
                    std::cout << "\n";
                } else {
                    if (colors_enabled_) {
                        std::cout << colors::RED;
                    }
                    std::cout << "Unsupported language: " << newLang;
                    if (colors_enabled_) {
                        std::cout << colors::RESET;
                    }
                    std::cout << "\n";
                    if (colors_enabled_) {
                        std::cout << colors::YELLOW;
                    }
                    std::cout << "Use ':langs' to see all supported languages.";
                    if (colors_enabled_) {
                        std::cout << colors::RESET;
                    }
                    std::cout << "\n";
                }
            } else {
                if (colors_enabled_) {
                    std::cout << colors::YELLOW;
                }
                std::cout << "Usage: :lang [code] (e.g. :lang en)";
                if (colors_enabled_) {
                    std::cout << colors::RESET;
                }
                std::cout << "\n";
            }
        } else if (input[0] == ':') {
            if (colors_enabled_) {
                std::cout << colors::RED;
            }
            std::cout << "Unknown command: " << input;
            if (colors_enabled_) {
                std::cout << colors::RESET;
            }
            std::cout << "\n";
            if (colors_enabled_) {
                std::cout << colors::YELLOW;
            }
            std::cout << "Use ':help' to see available commands.";
            if (colors_enabled_) {
                std::cout << colors::RESET;
            }
            std::cout << "\n";
        } else {
            if (searchFn) {
                std::thread spinner([&input, &config]() {
                    colors::showSpinner("Searching Wikipedia (" + config.language + ") for: " + input);
                });
                
                std::string result = searchFn(input, config.language);
                
                spinner.join();
                
                displayResult(result);
            } else {
                displayError("Search function not available");
            }
        }
    }
}

void ConsoleUIModule::displayResult(const std::string& result) {
    Json::Reader reader;
    Json::Value root;

    if (!reader.parse(result, root)) {
        if (colors_enabled_) {
            std::cout << colors::RED;
        }
        std::cout << "Error parsing response from Wikipedia";
        if (colors_enabled_) {
            std::cout << colors::RESET;
        }
        std::cout << "\n";
        return;
    }

    if (root.isMember("type") && root["type"].asString() == "disambiguation") {
        if (colors_enabled_) {
            std::cout << colors::YELLOW;
        }
        std::cout << "This is a disambiguation page. Try a more specific search term.";
        if (colors_enabled_) {
            std::cout << colors::RESET;
        }
        std::cout << "\n\n";
    }

    if (root.isMember("title")) {
        std::cout << "\n";
        if (colors_enabled_) {
            std::cout << colors::BOLD << colors::BLUE;
        }
        std::cout << root["title"].asString();
        if (colors_enabled_) {
            std::cout << colors::RESET;
        }
        std::cout << "\n";
        std::cout << std::string(root["title"].asString().length(), '=') << "\n\n";
    }

    if (root.isMember("extract")) {
        std::string extract = root["extract"].asString();
        if (!extract.empty()) {
            if (colors_enabled_) {
                std::cout << colors::WHITE;
            }
            std::cout << extract;
            if (colors_enabled_) {
                std::cout << colors::RESET;
            }
            std::cout << "\n\n";
        } else {
            if (colors_enabled_) {
                std::cout << colors::YELLOW;
            }
            std::cout << "No summary available for this article.";
            if (colors_enabled_) {
                std::cout << colors::RESET;
            }
            std::cout << "\n\n";
        }
    }

    if (root.isMember("content_urls") && root["content_urls"].isMember("desktop")) {
        if (colors_enabled_) {
            std::cout << colors::CYAN;
        }
        std::cout << "Full article: ";
        if (colors_enabled_) {
            std::cout << colors::UNDERLINE;
        }
        std::cout << root["content_urls"]["desktop"]["page"].asString();
        if (colors_enabled_) {
            std::cout << colors::RESET;
        }
        std::cout << "\n";
    }
}

void ConsoleUIModule::displayError(const std::string& error) {
    if (colors_enabled_) {
        std::cout << colors::RED;
    }
    std::cout << "Error: " << error;
    if (colors_enabled_) {
        std::cout << colors::RESET;
    }
    std::cout << "\n";
}

}