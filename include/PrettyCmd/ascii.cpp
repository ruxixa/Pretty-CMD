/*
 * This file is part of Pretty CMD library.
 *
 * Developed by ruxixa.
 * (https://github.com/ruxixa).

 */

#include <ascii.h>                                                       // Include necessary header file(s).

/**
 * Reads ASCII art from a file.
 *
 * @param asciiName The name of the ASCII art file (without file extension).
 * @return The content of the ASCII art file as a string.
 */
std::string readAsciiArt(std::string asciiName) {
    std::ifstream file("include/PrettyCmd/ready ascii/" + asciiName + ".txt");             // Open the ASCII art file.

    std::string fileContent = "";                                        // Initialize a string to store file content. 

    if (file.is_open()) {                                                // Check if the file is successfully opened.
        std::string line;
        while (std::getline(file, line)) {                               // Read each line from the file.
            fileContent += line + "\n";                                  // Append each line to the file content string.
        }
        file.close();                                                    // Close the file.
    }
    else {
        std::cerr << "Cannot open the file." << std::endl;               // Display an error message if file opening fails.
    }

    return fileContent;                                                  // Return the content of the ASCII art file.
}
                            
/**
 * Displays ASCII art on the console.
 *
 * @param name The name of the ASCII art file (without file extension).
 */
void PrettyCMD::AsciiArt::showAsciiArt(const std::string& name) {
    try {
        std::string fileContent = readAsciiArt(name);                        // Read the ASCII art from the file.

        std::cout << std::endl << fileContent << std::endl;                  // Display the ASCII art on the console.
    }
    catch (const std::exception& e) {
        std::cerr << "Failed to show ascii art: " << e.what() << std::endl;  // Display the error message.
    }
                 
}
