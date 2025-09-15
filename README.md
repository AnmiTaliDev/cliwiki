# cliwiki

A colorful command-line tool for searching Wikipedia articles in multiple languages.

![License](https://img.shields.io/badge/license-GPL%20v3-blue.svg)
![Language](https://img.shields.io/badge/language-C%2B%2B17-orange.svg)
![Build System](https://img.shields.io/badge/build-Meson-green.svg)

## Features

- 🌍 **Multi-language support** - Search in 20+ Wikipedia languages
- 🎨 **Colorful output** - Beautiful terminal interface with colors
- ⚡ **Fast searches** - Direct API calls to Wikipedia
- 🔄 **Interactive mode** - TUI for continuous searching
- 📱 **One-shot queries** - Direct command-line searches
- 🎯 **Smart parsing** - Clean article summaries with links

## Supported Languages

| Code | Language   | Code | Language   | Code | Language   |
|------|------------|------|------------|------|------------|
| `ru` | Russian    | `en` | English    | `de` | German     |
| `fr` | French     | `es` | Spanish    | `it` | Italian    |
| `pt` | Portuguese | `ja` | Japanese   | `zh` | Chinese    |
| `ko` | Korean     | `ar` | Arabic     | `pl` | Polish     |
| `nl` | Dutch      | `sv` | Swedish    | `no` | Norwegian  |
| `da` | Danish     | `fi` | Finnish    | `tr` | Turkish    |
| `he` | Hebrew     | `uk` | Ukrainian  |      |            |

## Installation

### Prerequisites

- **C++17** compatible compiler (GCC 7+, Clang 5+)
- **Meson** build system
- **libcurl** development headers
- **jsoncpp** development library

#### Ubuntu/Debian
```bash
sudo apt update
sudo apt install build-essential meson libcurl4-openssl-dev libjsoncpp-dev
```

#### Fedora/CentOS/RHEL
```bash
sudo dnf install gcc-c++ meson libcurl-devel jsoncpp-devel
# or for older versions:
sudo yum install gcc-c++ meson libcurl-devel jsoncpp-devel
```

#### Arch Linux
```bash
sudo pacman -S base-devel meson curl jsoncpp
```

#### macOS
```bash
brew install meson curl jsoncpp
```

### Building from Source

1. **Clone the repository:**
   ```bash
   git clone https://github.com/your-username/cliwiki.git
   cd cliwiki
   ```

2. **Configure the build:**
   ```bash
   meson setup builddir
   ```

3. **Compile:**
   ```bash
   meson compile -C builddir
   ```

4. **Install (optional):**
   ```bash
   sudo meson install -C builddir
   ```

## Usage

### Interactive Mode

Start the interactive TUI mode:
```bash
cliwiki --tui
# or simply
cliwiki 
```

In interactive mode, you can use these commands:
- `[search term]` - Search Wikipedia
- `:lang [code]` - Change language (e.g., `:lang en`)
- `:langs` - Show all supported languages
- `:help` - Show help menu
- `:quit` - Exit program

### One-shot Searches

Search directly from command line:
```bash
# Search in default language (Russian)
cliwiki "Linux"

# Search in English
cliwiki --lang en "Linux"
cliwiki -l en "Linux"

# Search in German
cliwiki -l de "Computer"
```

### Command Line Options

```
Usage: cliwiki [OPTIONS] [QUERY]

Options:
  --help, -h         Show help message
  --version, -v      Show version information
  --tui              Start in interactive mode
  --lang LANG, -l    Set Wikipedia language (default: ru)

Examples:
  cliwiki "Linux"                    # Search in Russian
  cliwiki --lang en "Linux"          # Search in English
  cliwiki -l de "Computer"           # Search in German
  cliwiki --tui                      # Interactive mode
```

## Examples

### Basic Search
```bash
$ cliwiki -l en "GNU"
```

## Contributing

Contributions are welcome! Please feel free to submit a Pull Request.

1. Fork the repository
2. Create your feature branch (`git checkout -b feature/amazing-feature`)
3. Commit your changes (`git commit -m 'Add amazing feature'`)
4. Push to the branch (`git push origin feature/amazing-feature`)
5. Open a Pull Request

## License

This project is licensed under the GNU General Public License v3.0 - see the [LICENSE](LICENSE) file for details.

## Credits

- **Author:** AnmiTaliDev
- **Original idea and some code:** holos (@wholos)
- **Built with:** C++17, libcurl, jsoncpp, Meson

## Acknowledgments

- Wikipedia for providing the free REST API
- The open source community for the excellent libraries used in this project

---

*Made with ❤️ for the command line enthusiasts*
