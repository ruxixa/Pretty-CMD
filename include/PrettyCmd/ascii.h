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
    class AsciiArt {
    public:
        /**
         * Displays ASCII art on the console.
         *
         * @param name The name of the ASCII art file (without file extension).
         */
        static void showAsciiArt(const std::string& name);
    };
}
