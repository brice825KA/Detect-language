#include "../include/language.hpp"

bool exist_in_string(char *sent, char letter) {
    if (!sent)
        return false;
    for (auto i = 0; sent[i]; i += 1) {
        if (letter == sent[i])
            return true;
    }
    return false;
}

char *string_remove_doublons(char **argv, int lenght) {
    char *format = (char *)malloc(sizeof(char) * (lenght + 2));
    format[0] = argv[2][0];
    auto j = 0;
    for (auto i = 2; argv[i]; i += 1) {
        if (strlen(argv[i]) > 2)
            break;
        bool exist = exist_in_string(format, argv[i][0]);
        if (exist == 0) {
            j++;
            format[j] = argv[i][0];
        }
    }
    return format;
}

