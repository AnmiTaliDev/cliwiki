project('cliwiki', 'cpp',
  version : '1.0.0',
  default_options : ['warning_level=3',
                     'cpp_std=c++17'])

# Dependencies
curl_dep = dependency('libcurl')
jsoncpp_dep = dependency('jsoncpp')

# Source files
src = [
  'src/main.cpp',
  'src/core.cpp',
  'src/colors.cpp',
  'src/wikipedia.cpp',
  'src/ui.cpp'
]

# Executable
executable('cliwiki',
           src,
           dependencies : [curl_dep, jsoncpp_dep],
           install : true)