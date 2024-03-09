/*
 * This file is part of Pretty CMD library.
 *
 * Developed by ruxixa.
 * (https://github.com/ruxixa).

 */

#include <console.h> // Include necessary header file(s).

/**
 * Centers the given text in the console window.
 * @param text The text to be centered.
 */
void PrettyCMD::Console::center(const std::string& text) {
    CONSOLE_SCREEN_BUFFER_INFO csbi;                                      // Structure to hold console screen buffer information.
    int columns, rows;                                                    // Variables to store the number of columns and rows in the console window.

    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);   // Get console screen buffer information.
    columns = csbi.srWindow.Right - csbi.srWindow.Left + 1;               // Calculate the number of columns in the console window.

    int padding = (columns - text.length()) + 1.0 / 2 * columns;          // Calculate padding to center the text horizontally

    std::cout << std::setw(padding + text.length()) << text << std::endl; // Output the text with appropriate padding to center it horizontally.
}

/**
 * Sets the console window size.
 * @param width The width of the console window.
 * @param height The height of the console window.
 */
void PrettyCMD::Console::setConsoleSize(int width, int height) {
    HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);                     // Get handle to the console.
    COORD coord;                                                          // Structure to hold coordinates.
    coord.X = width;                                                      // Set the width of the console window.
    coord.Y = height;                                                     // Set the height of the console window.
    SMALL_RECT Rect;                                                      // Structure to define the console window size.
    Rect.Top = 0;                                                         // Set the top coordinate of the console window.
    Rect.Left = 0;                                                        // Set the left coordinate of the console window.
    Rect.Bottom = height - 1;                                             // Set the bottom coordinate of the console window.
    Rect.Right = width - 1;                                               // Set the right coordinate of the console window.
    SetConsoleScreenBufferSize(console, coord);                           // Set the console screen buffer size.
    SetConsoleWindowInfo(console, TRUE, &Rect);                           // Set the console window size.
}

/**
 * Outputs a newline character to the console.
 */
void PrettyCMD::Console::newLine() {
    std::cout << std::endl;                                               // Output a newline character.
}