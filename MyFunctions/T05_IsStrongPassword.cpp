#include "T05_IsStrongPassword.h"
#include <cctype>

bool IsStrongPassword(const std::string& pass)
{
    if (pass.length() < 8) return false;

    bool hasUpper = false, hasLower = false, hasDigit = false, hasSymbol = false;

    for (char c : pass)
    {
        if (isupper(c)) hasUpper = true;
        else if (islower(c)) hasLower = true;
        else if (isdigit(c)) hasDigit = true;
        else hasSymbol = true;
    }

    return hasUpper && hasLower && hasDigit && hasSymbol;
}
