/*
 * This file is part of Pretty CMD library.
 *
 * Developed by ruxixa.
 * (https://github.com/ruxixa).
 */

#pragma once

#include "incl.h"
#include "prettycmd.h"

namespace PrettyCMD {

    /**
     * @brief The Console class provides functions for manipulating the console window.
     */
    class Console {
    public:
        /**
         * @brief Centers the given text in the console window.
         *
         * @param text The text to be centered.
         */
        static void center(const std::string& text);

        /**
         * @brief Sets the size of the console window.
         *
         * @param width The width of the console window.
         * @param height The height of the console window.
         */
        static void setConsoleSize(int width, int height);

        /**
         * @brief Outputs a newline character to the console.
         */
        static void newLine();
    };
}
