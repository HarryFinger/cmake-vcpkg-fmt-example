Запускать dev_power_shell

СБОРКА С NINJA:
cmake --preset=ninja
cmake --build build

ГЕНЕРАЦИЯ VISUAL STUDIO SOLUTION:
cmake --preset=vs
cmake --build build-vs


по сути запуск cmake --preset=ninja эквивалентен
cmake -G "Ninja" -DCMAKE_TOOLCHAIN_FILE="C:/Work/Dev/vcpkg/scripts/buildsystems/vcpkg.cmake" -B build .