/*
 * This file is part of Pretty CMD library.
 *
 * Developed by ruxixa.
 * (https://github.com/ruxixa).

 */

#include <effects.h>                                                                // Include necessary header file(s).

/**
 * Function to write text with a specified time interval between each character.
 * @param text The text to be written.
 * @param interval The time interval between each character in milliseconds.
 */
void PrettyCMD::Effect::writing(const std::string& text, int interval) {
    for (const char& t : text) {
        std::cout << t; // Output the character.
        std::this_thread::sleep_for(std::chrono::milliseconds(interval));           // Wait for the specified interval.
    }
}

/**
 * Helper function for performing letter fading animation.
 * @param text The text to be animated.
 * @param animationColor The color for the animated letters.
 * @param textColor The color for the rest of the text.
 * @param interval The time interval between each frame of animation.
 * @param toUpper Flag indicating whether to convert letters to uppercase during animation.
 */
void letterFade(const std::string& text, PrettyCMD::ConsoleColor animationColor, PrettyCMD::ConsoleColor textColor, int interval, bool toUpper) {
    for (int currentLetter = 0; currentLetter < text.size(); currentLetter++) {
        for (int i = 0; i < text.size(); i++) {
            if (i == currentLetter) {
                PrettyCMD::Color::set(animationColor);                              // Set the color for the animated letter.
                if (toUpper) std::cout << static_cast<char>(std::toupper(text[i])); // Convert letter to uppercase if needed.
                else std::cout << text[i];                                          // Output the letter.
                if (toUpper && text[i] == ' ') std::cout << static_cast<char>(std::toupper(text[i + 1])); // Convert following space to uppercase if needed.
                PrettyCMD::Color::set(textColor);                                   // Reset color for the rest of the text.
            }
            else std::cout << text[i];                                              // Output the rest of the text.
        }
        PrettyCMD::Color::set(textColor);                                           // Reset color for the entire text.
        std::this_thread::sleep_for(std::chrono::milliseconds(interval));           // Wait for the specified interval.
        system("cls"); // Clear the console screen.
    }
}

/**
 * Function to perform big letter fading animation.
 * @param text The text to be animated.
 * @param bigLetterColor The color for the big letters.
 * @param textColor The color for the rest of the text.
 * @param interval The time interval between each frame of animation.
 */
void PrettyCMD::Effect::bigLetterFade(const std::string& text, ConsoleColor bigLetterColor, ConsoleColor textColor, int interval) {
    letterFade(text, bigLetterColor, textColor, interval, true);                    // Perform letter fading animation.
}

/**
 * Function to perform color letter fading animation.
 * @param text The text to be animated.
 * @param animationColor The color for the animated letters.
 * @param textColor The color for the rest of the text.
 * @param interval The time interval between each frame of animation.
 */
void PrettyCMD::Effect::colorLetterFade(const std::string& text, ConsoleColor animationColor, ConsoleColor textColor, int interval) {
    letterFade(text, textColor, animationColor, interval, false);                   // Perform letter fading animation.
}

/**
 * Function to perform blinking animation.
 * @param text The text to be animated.
 * @param firstColor The first color for the blinking effect.
 * @param secondColor The second color for the blinking effect.
 * @param interval The time interval between each frame of animation.
 * @param length The total length of the blinking animation.
 */
void PrettyCMD::Effect::blinking(const std::string& text, ConsoleColor firstColor, ConsoleColor secondColor, int interval, int length) {
    bool isColorSet = true;                                                        // Flag to keep track of current color state.
    auto startTime = std::chrono::steady_clock::now();                             // Get the start time of the animation.

    while (true) {
        system("cls");                                                             // Clear the console screen.
        auto currentTime = std::chrono::steady_clock::now();                       // Get the current time.
        auto elapsedTime = std::chrono::duration_cast<std::chrono::milliseconds>(currentTime - startTime).count(); // Calculate elapsed time.

        if (elapsedTime >= length)                                                 // Check if total animation time has elapsed.
            break;                                                                  

        if (isColorSet) {
            Color::set(firstColor);                                                // Set the first color.
            isColorSet = false;                                                    // Update color state.
        }
        else {
            Color::set(secondColor);                                               // Set the second color.
            isColorSet = true;                                                     // Update color state.
        }

        std::cout << text << std::flush;                                           // Output the text.
        std::this_thread::sleep_for(std::chrono::milliseconds(interval));          // Wait for the specified interval.
    }

    Color::set(ConsoleColor::WHITE);                                               // Reset text color to white after animation.
}