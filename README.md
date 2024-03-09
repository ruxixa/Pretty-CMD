# About Pretty-CMD

> **Pretty-CMD** is a C++ library designed for styling console output in Windows.
> <br>
> <br>
> Developped by [ruxixa](https://github.com/ruxixa)
> <br>
> <br>

# Example wideo 
> **!** The example file is included in project as `examples.cpp`
> <br>
> [Example Video](https://github.com/ruxixa/Pretty-CMD/assets/162349590/488fc64d-fb6c-4f2b-b2a5-41d003d0d6db)

# How to use
> Simply include prettycmd.h file in your project
> ```c++
> #include <prettycmd.h>
> ```

# Coloring a text
> To colore a text using **Pretty CMD** you need to **set console color**
> ```c++
> PrettyCMD::Color::set(PrettyCMD::ConsoleColor::BLUE);
> ```
> Now you can display a text
> ```c++
> std::cout << "Hello world" << std::endl;
> ```
> <br>
> The output will be BLUE

# Changing console size
> To change console size using Pretty CMD you need to use setConsoleSize
> ```c++
> PrettyCMD::Console::setConsoleSize(70, 40);
> ```
> <br>
> The width will be 70 rows* and the height will be 40 rows

# Creating text animations
> To change create typewriter effect using Pretty CMD you need to use writing
> ```c++
> PrettyCMD::Effect::writing("This is a writing effect", 30);
> ```
> <br>
> This will create a typewriter effect*with 30 miliseconds interval between every letter

# Showing ascii arts
> To display ascii art using Pretty CMD you need to use **showAsciiArt**
> ```c++
> PrettyCMD::AsciiArt::showAsciiArt("angel");
> ```
> <br>
> This will display an **Angel Ascii Art**;
> [!] Feel free to add more ascii arts by putting them into ready ascii folder as .txt file


