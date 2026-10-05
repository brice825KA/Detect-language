#include "../include/language.hpp"

bool exist_in_string(char *sent, char letter) {
    if (!sent)
        return false;
    if (letter != sent[0] && !sent[1])
        exist_in_string(&sent[1], letter);
    else if (letter == sent[0])
        return true;
    return false;
}

