# cliwiki
Бірнеше тілде Wikipedia мақалаларын іздеуге арналған түрлі-түсті командалық жол құралы.
![License](https://img.shields.io/badge/license-GPL%20v3-blue.svg)
![Language](https://img.shields.io/badge/language-C%2B%2B17-orange.svg)
![Build System](https://img.shields.io/badge/build-Meson-green.svg)

## Мүмкіндіктер
- 🌍 **Көп тілді қолдау** - 20+ Wikipedia тілінде іздеу
- 🎨 **Түрлі-түсті шығару** - Түстермен әдемі терминал интерфейсі
- ⚡ **Жылдам іздеу** - Wikipedia-ға тікелей API шақырулары
- 🔄 **Интерактивті режим** - Үздіксіз іздеуге арналған TUI
- 📱 **Бір рет сұрау** - Тікелей командалық жол іздеулері
- 🎯 **Ақылды талдау** - Сілтемелермен таза мақала қысқаша мазмұны

## Қолдау көрсетілетін тілдер
| Код | Тіл       | Код | Тіл        | Код | Тіл       |
|-----|-----------|-----|------------|-----|-----------|
| `ru` | Орыс      | `en` | Ағылшын    | `de` | Неміс     |
| `fr` | Француз   | `es` | Испан      | `it` | Итальян   |
| `pt` | Португал  | `ja` | Жапон      | `zh` | Қытай     |
| `ko` | Корей     | `ar` | Араб       | `pl` | Поляк     |
| `nl` | Голланд   | `sv` | Швед       | `no` | Норвег    |
| `da` | Дания     | `fi` | Фин        | `tr` | Түрік     |
| `he` | Иврит     | `uk` | Украин     | `kk` | Қазақ     |

## Орнату
### Алдын ала талаптар
- **C++17** үйлесімді компилятор (GCC 7+, Clang 5+)
- **Meson** құрастыру жүйесі
- **libcurl** әзірлеу тақырыптары
- **jsoncpp** әзірлеу кітапханасы

#### Ubuntu/Debian
```bash
sudo apt update
sudo apt install build-essential meson libcurl4-openssl-dev libjsoncpp-dev
```

#### Fedora/CentOS/RHEL
```bash
sudo dnf install gcc-c++ meson libcurl-devel jsoncpp-devel
# немесе ескі нұсқалар үшін:
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

### Көз кодынан құрастыру
1. **Репозиторийді клондау:**
   ```bash
   git clone https://github.com/AnmiTaliDev/cliwiki.git
   cd cliwiki
   ```

2. **Құрастыруды баптау:**
   ```bash
   meson setup builddir
   ```

3. **Компиляциялау:**
   ```bash
   meson compile -C builddir
   ```

4. **Орнату (міндетті емес):**
   ```bash
   sudo meson install -C builddir
   ```

## Қолдану
### Интерактивті режим
Интерактивті TUI режимін іске қосу:
```bash
cliwiki --tui
# немесе жай ғана
cliwiki 
```

Интерактивті режимде осы командаларды қолдануға болады:
- `[іздеу термині]` - Wikipedia іздеу
- `:lang [код]` - Тілді өзгерту (мысалы, `:lang en`)
- `:langs` - Барлық қолдау көрсетілетін тілдерді көрсету
- `:help` - Анықтама мәзірін көрсету
- `:quit` - Бағдарламадан шығу

### Бір рет іздеу
Командалық жолдан тікелей іздеу:
```bash
# Әдепкі тілде іздеу (орыс)
cliwiki "Linux"

# Ағылшын тілінде іздеу
cliwiki --lang en "Linux"
cliwiki -l en "Linux"

# Неміс тілінде іздеу
cliwiki -l de "Computer"
```

### Командалық жол опциялары
```
Қолдану: cliwiki [ОПЦИЯЛАР] [СҰРАУ]

Опциялар:
  --help, -h         Анықтама хабарламасын көрсету
  --version, -v      Нұсқа ақпаратын көрсету
  --tui              Интерактивті режимде іске қосу
  --lang ТІЛЬ, -l    Wikipedia тілін орнату (әдепкі: ru)

Мысалдар:
  cliwiki "Linux"                    # Орыс тілінде іздеу
  cliwiki --lang en "Linux"          # Ағылшын тілінде іздеу
  cliwiki -l de "Computer"           # Неміс тілінде іздеу
  cliwiki --tui                      # Интерактивті режим
```

## Мысалдар
### Негізгі іздеу
```bash
$ cliwiki -l en "GNU"
```

## Үлес қосу
Үлестер қош келеді! Pull Request жіберуге еркін сезініңіз.

1. Репозиторийді форктау
2. Функция тармағын жасау (`git checkout -b feature/amazing-feature`)
3. Өзгерістерді коммиттау (`git commit -m 'Add amazing feature'`)
4. Тармаққа итеру (`git push origin feature/amazing-feature`)
5. Pull Request ашу

## Лицензия
Бұл жоба GNU General Public License v3.0 лицензиясы бойынша лицензияланған - толық ақпарат үшін [LICENSE](LICENSE) файлын қараңыз.

## Авторлар
- **Автор:** AnmiTaliDev
- **Түпнұсқа идея және кейбір код:** holos (@wholos)
- **Құрастырылған:** C++17, libcurl, jsoncpp, Meson

## Алғыс
- Тегін REST API ұсынғаны үшін Wikipedia
- Бұл жобада қолданылған керемет кітапханалар үшін ашық көз кодты қауымдастық

---
*Командалық жол әуесқойлары үшін ❤️ сезіммен жасалған*
