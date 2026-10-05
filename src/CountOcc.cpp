#include "../include/language.hpp"

int countocc(char *sent, char letter) {
    int count = 0;

    for (auto i = 0; i <= strlen(sent); i += 1) {
        if (sent[i] == letter)
            count += 1;
    }
    return count;
}