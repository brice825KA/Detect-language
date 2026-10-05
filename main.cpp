#include "include/language.hpp"


int main(int argv, char **argc, char **env) {
    char *format = NULL;

    //printf("Enter in string formatage\n");
    cout << string_remove_doublons(argc, argv) << endl;
    //cout << exist_in_string(argc[1], argc[2][0]) << endl;
    return 0;
}