#ifndef _LANGUAGE_HPP_
#define _LANGUAGE_HPP_

    #include <iostream>
    #include <cstdio>
    #include <cstdlib>
    #include <cstring>
    #include <string>
    using namespace std;

int countocc(char *sent, char letter);
bool exist_in_string(char *sent, char letter);
char *string_remove_doublons(char **argv, int lenght);

#endif
