#include "../include/language.hpp"

int countocc(char *sent, char letter) {
    int count = 0;

    for (auto i = 0; sent[i]; i += 1) {
        if (sent[i] == letter)
            count += 1;
    }
    return count;
}