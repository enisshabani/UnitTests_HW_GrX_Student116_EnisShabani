#include "T03_ContainsBadWords.h"

bool ContainsBadWords(const std::string& text)
{
    std::string lower = text;
    for (char& c : lower) c = tolower(c);

    return
        lower.find("bad") != std::string::npos ||
        lower.find("stupid") != std::string::npos ||
        lower.find("idiot") != std::string::npos;
}
