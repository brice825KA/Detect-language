#include "include/language.hpp"


int main(int argv, char **argc, char **env) {
    char *format = NULL;

    format = string_remove_doublons(argc, argv);
    for (auto i = 0; format[i]; i += 1)
        printf("%c: %d (%.3f%%)\n", format[i],countocc(argc[1], format[i]),
            frequenceocc(countocc(argc[1], format[i]), strlen(argc[1])));
    return 0;
}