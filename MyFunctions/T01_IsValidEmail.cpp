#include "T01_IsValidEmail.h"

bool IsValidEmail(const std::string& email)
{
    size_t atPos = email.find('@');
    if (atPos == std::string::npos || atPos == 0) return false;

    size_t dotPos = email.find('.', atPos);
    if (dotPos == std::string::npos) return false;

    if (dotPos - atPos < 2) return false;
    if (email.length() - dotPos < 3) return false;

    return true;
}
