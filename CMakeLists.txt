cmake_minimum_required(VERSION 3.10)
project(Lab_1_Stalmakov)

# Настройка C++ стандарта
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Добавляем исполняемый файл
add_executable(main 
    src/Compressor_station.cpp
    src/pipe.cpp
    src/lab_code_execution.cpp
)

# Подключаем заголовочные файлы
target_include_directories(main PRIVATE include)