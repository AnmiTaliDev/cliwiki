# cliwiki
Красочный инструмент командной строки для поиска статей Википедии на нескольких языках.
![License](https://img.shields.io/badge/license-GPL%20v3-blue.svg)
![Language](https://img.shields.io/badge/language-C%2B%2B17-orange.svg)
![Build System](https://img.shields.io/badge/build-Meson-green.svg)

## Функции
- 🌍 **Многоязычная поддержка** - Поиск в 20+ языках Википедии
- 🎨 **Цветной вывод** - Красивый интерфейс терминала с цветами
- ⚡ **Быстрый поиск** - Прямые вызовы API Википедии
- 🔄 **Интерактивный режим** - TUI для непрерывного поиска
- 📱 **Одноразовые запросы** - Прямой поиск из командной строки
- 🎯 **Умный парсинг** - Чистые резюме статей со ссылками

## Поддерживаемые языки
| Код  | Язык       | Код  | Язык       | Код  | Язык       |
|------|------------|------|------------|------|------------|
| `ru` | Русский    | `en` | Английский | `de` | Немецкий   |
| `fr` | Французский| `es` | Испанский  | `it` | Итальянский|
| `pt` | Португальский| `ja` | Японский | `zh` | Китайский  |
| `ko` | Корейский  | `ar` | Арабский   | `pl` | Польский   |
| `nl` | Голландский| `sv` | Шведский   | `no` | Норвежский |
| `da` | Датский    | `fi` | Финский    | `tr` | Турецкий   |
| `he` | Иврит      | `uk` | Украинский |      |            |

## Установка
### Требования
- Компилятор, совместимый с **C++17** (GCC 7+, Clang 5+)
- Система сборки **Meson**
- Заголовки разработки **libcurl**
- Библиотека разработки **jsoncpp**

#### Ubuntu/Debian
```bash
sudo apt update
sudo apt install build-essential meson libcurl4-openssl-dev libjsoncpp-dev
```

#### Fedora/CentOS/RHEL
```bash
sudo dnf install gcc-c++ meson libcurl-devel jsoncpp-devel
# или для старых версий:
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

### Сборка из исходного кода
1. **Клонируйте репозиторий:**
   ```bash
   git clone https://github.com/AnmiTaliDev/cliwiki.git
   cd cliwiki
   ```
2. **Настройте сборку:**
   ```bash
   meson setup builddir
   ```
3. **Скомпилируйте:**
   ```bash
   meson compile -C builddir
   ```
4. **Установите (опционально):**
   ```bash
   sudo meson install -C builddir
   ```

## Использование
### Интерактивный режим
Запустите интерактивный TUI режим:
```bash
cliwiki --tui
# или просто
cliwiki 
```

В интерактивном режиме вы можете использовать эти команды:
- `[поисковый запрос]` - Поиск в Википедии
- `:lang [код]` - Изменить язык (например, `:lang en`)
- `:langs` - Показать все поддерживаемые языки
- `:help` - Показать меню помощи
- `:quit` - Выйти из программы

### Одноразовый поиск
Поиск прямо из командной строки:
```bash
# Поиск на языке по умолчанию (русский)
cliwiki "Linux"
# Поиск на английском
cliwiki --lang en "Linux"
cliwiki -l en "Linux"
# Поиск на немецком
cliwiki -l de "Computer"
```

### Опции командной строки
```
Использование: cliwiki [ОПЦИИ] [ЗАПРОС]
Опции:
  --help, -h         Показать справочное сообщение
  --version, -v      Показать информацию о версии
  --tui              Запустить в интерактивном режиме
  --lang LANG, -l    Установить язык Википедии (по умолчанию: ru)
Примеры:
  cliwiki "Linux"                    # Поиск на русском
  cliwiki --lang en "Linux"          # Поиск на английском
  cliwiki -l de "Computer"           # Поиск на немецком
  cliwiki --tui                      # Интерактивный режим
```

## Примеры
### Базовый поиск
```bash
$ cliwiki -l en "GNU"
```

## Участие в разработке
Вклад в проект приветствуется! Пожалуйста, не стесняйтесь отправлять Pull Request.
1. Сделайте форк репозитория
2. Создайте ветку для функции (`git checkout -b feature/amazing-feature`)
3. Зафиксируйте изменения (`git commit -m 'Add amazing feature'`)
4. Отправьте в ветку (`git push origin feature/amazing-feature`)
5. Откройте Pull Request

## Лицензия
Этот проект лицензирован под GNU General Public License v3.0 - см. файл [LICENSE](LICENSE) для деталей.

## Авторы
- **Автор:** AnmiTaliDev
- **Оригинальная идея и часть кода:** holos (@wholos)
- **Создано с помощью:** C++17, libcurl, jsoncpp, Meson

## Благодарности
- Википедии за предоставление бесплатного REST API
- Сообществу открытого кода за отличные библиотеки, используемые в этом проекте

---
*Создано с ❤️ для энтузиастов командной строки*
