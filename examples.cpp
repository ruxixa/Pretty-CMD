/*
 * This file is part of Pretty CMD library.
 *
 * Developed by ruxixa.
 * (https://github.com/ruxixa).

 */

#include <prettycmd.h>

void stop() {
    std::this_thread::sleep_for(std::chrono::seconds(1));
}

void colorExamples() {
    PrettyCMD::Color::set(PrettyCMD::ConsoleColor::BLUE);
    PrettyCMD::Effect::writing("This is a BLUE text\n", 30);
    PrettyCMD::Color::set(PrettyCMD::ConsoleColor::RED);
    PrettyCMD::Effect::writing("This is a RED text\n\n", 30);

    PrettyCMD::Color::set(PrettyCMD::ConsoleColor::CYAN);
    PrettyCMD::Effect::writing("You can also ", 30);
    PrettyCMD::Color::set(PrettyCMD::ConsoleColor::BLUE);
    PrettyCMD::Effect::writing("MIX ", 30);
    PrettyCMD::Color::set(PrettyCMD::ConsoleColor::WHITE);
    PrettyCMD::Effect::writing("colors", 30);
    stop();
}

void effectsExamples() {
    PrettyCMD::Effect::blinking("This is a blinking text", PrettyCMD::ConsoleColor::WHITE, PrettyCMD::ConsoleColor::BLUE, 40, 3000);
    PrettyCMD::Effect::writing("This is a writing effect", 30);
    PrettyCMD::Effect::bigLetterFade("This is a cool text effect", PrettyCMD::ConsoleColor::WHITE, PrettyCMD::ConsoleColor::WHITE, 40);
    PrettyCMD::Effect::colorLetterFade("This is also a cool text effect", PrettyCMD::ConsoleColor::WHITE, PrettyCMD::ConsoleColor::BLUE, 40);
}

void asciiExamples() {
    system("cls");

    PrettyCMD::Color::set(PrettyCMD::ConsoleColor::DARK_CYAN);
    PrettyCMD::Effect::writing("Here are some ascii arts\n", 30);

    PrettyCMD::Color::set(PrettyCMD::ConsoleColor::WHITE);

    PrettyCMD::AsciiArt::showAsciiArt("airplanes");
    PrettyCMD::Effect::writing("Airplanes\n", 30);
    PrettyCMD::AsciiArt::showAsciiArt("angel");
    PrettyCMD::Effect::writing("Angel\n", 30);
    PrettyCMD::AsciiArt::showAsciiArt("book");
    PrettyCMD::Effect::writing("Book\n\n", 30);
    stop();
}

void consoleExamples() {
    system("cls");
    PrettyCMD::Color::set(PrettyCMD::ConsoleColor::RED);
    PrettyCMD::Effect::writing("We can also change console size\n\n", 30);

    PrettyCMD::Color::set(PrettyCMD::ConsoleColor::BLUE);

    PrettyCMD::Console::setConsoleSize(70, 40);
    PrettyCMD::Effect::writing("Console size changed\n\n", 30);
    stop();
}

int main() {
    stop(); stop();
    colorExamples();
    effectsExamples();
    asciiExamples();
    consoleExamples();

    return 0;
}
