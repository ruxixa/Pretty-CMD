/*
 * This file is part of Pretty CMD library.
 *
 * Developed by ruxixa.
 * (https://github.com/ruxixa).

 */

#include <colors.h>                                                     // Include necessary header file(s).

/**
 * Sets the color of the console text.
 *
 * @param color The ConsoleColor enum value representing the desired text color.
 * @return Reference to the output stream for chaining.
 */
std::ostream& PrettyCMD::Color::set(ConsoleColor color) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);                   // Get the handle to the console.
    SetConsoleTextAttribute(hConsole, static_cast<WORD>(color));         // Set the text color using the provided ConsoleColor enum value.
        
    return std::cout;                                                    // Return reference to the output stream for chaining.
}