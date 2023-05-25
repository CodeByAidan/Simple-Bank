# Simple-Bank
![GitHub repo size](https://img.shields.io/github/repo-size/livxy/Simple-Bank) ![GitHub](https://img.shields.io/github/license/livxy/Simple-Bank) ![GitHub Repo stars](https://img.shields.io/github/stars/livxy/Simple-Bank?style=social)

A simple bank system using C as a beginner project into C.

*Added builds for ease! Using GitHub Actions -* [cmake.yml](.github/workflows/cmake.yml)!

![image](https://github.com/livxy/Simple-Bank/assets/67598470/4c25df2f-10ba-482f-83cc-14515839e643)

## Builds
### Build from source:
You can follow the instructions if you are unsure how to build from source.
Simply go to the [releases](https://github.com/livxy/Simple-Bank/releases/latest),
I posted quite a bit of instructions there.

Otherwise, if you know have CMake installed, you can follow the instructions below,
make sure it is 3.25 or higher, and you have a C compiler installed (C17 standard).

<details>
<summary><h4>Windows:</h4></summary>

```bash
git clone ...
cd Simple-Bank
mkdir build
cd build
cmake ..
cmake --build .
.\Debug\Bank_Simple_C.exe
```

</details>

<details>
<summary><h4>Linux:</h4></summary>

```bash
git clone ...
cd Simple-Bank
mkdir build
cd build
cmake ..
cmake --build .
chmod +x Bank_Simple_C
./Bank_Simple_C
```

</details>

<details>
<summary><h4>macOS:</h4></summary>

```bash
git clone ...
cd Simple-Bank
mkdir build
cd build
cmake ..
cmake --build .
chmod +x Bank_Simple_C
./Bank_Simple_C
```

</details>

<details>
<summary><h2>Binaries</h2></summary>

### Windows:
[Bank_Simple_C.exe](builds/Windows/Release)

### Linux:
[Bank_Simple_C](builds/Linux)

### macOS:
[Bank_Simple_C](builds/macOS)

</details>
