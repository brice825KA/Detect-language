#ifndef _LANGUAGE_HPP_
#define _LANGUAGE_HPP_

    #include <iostream>
    #include <cstdio>
    #include <cstring>
    using namespace std;

int countocc(char *sent, char letter);
bool exist_in_string(char *sent, char letter);
char *string_remove_doublons(char **argv, int lenght);
bool recursive_exist_in_string(char *sent, char letter, int &pos);
double frequenceocc(int number, int lenght);

#endif
