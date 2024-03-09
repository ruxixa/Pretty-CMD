/*
 * This file is part of Pretty CMD library.
 *
 * Developed by ruxixa.
 * (https://github.com/ruxixa).

 */

#pragma once

#include "console.h"
#include "prettycmd.h"
#include "incl.h"

namespace PrettyCMD {

    /**
     * @brief The Effect class provides functions for applying various text effects in the console.
     */
    class Effect {
    public:
        /**
         * @brief Writes text with a specified time interval between each character.
         *
         * @param text The text to be written.
         * @param interval The time interval between each character in milliseconds.
         */
        static void writing(const std::string& text, int interval);

        /**
         * @brief Initiates a big letter fading animation for the text.
         *
         * @param text The text to be animated.
         * @param bigLetterColor The color for the big letters.
         * @param textColor The color for the rest of the text.
         * @param interval The time interval between each frame of animation.
         */
        static void bigLetterFade(const std::string& text, ConsoleColor bigLetterColor, ConsoleColor textColor, int interval);

        /**
         * @brief Initiates a color letter fading animation for the text.
         *
         * @param text The text to be animated.
         * @param animationColor The color for the animated letters.
         * @param textColor The color for the rest of the text.
         * @param interval The time interval between each frame of animation.
         */
        static void colorLetterFade(const std::string& text, ConsoleColor animationColor, ConsoleColor textColor, int interval);

        /**
         * @brief Initiates a blinking animation for the text.
         *
         * @param text The text to be animated.
         * @param firstColor The first color for the blinking effect.
         * @param secondColor The second color for the blinking effect.
         * @param interval The time interval between each frame of animation.
         * @param length The total length of the blinking animation.
         */
        static void blinking(const std::string& text, ConsoleColor firstColor, ConsoleColor secondColor, int interval, int length);
    };
}
