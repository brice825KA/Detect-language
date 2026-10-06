// Unit Test File

#include "../include/language.hpp"
#include <criterion/criterion.h>
#include <criterion/internal/test.h>


char *double_string[12] = {"a", "g", "G", "a", "g", "k", "k", NULL};

Test(utils, recursive_in_exist_stringv1) {
    int c = 0;
    char string[11] = "Hello Mans";
    char listletter = 'H';
    cr_assert_eq(recursive_exist_in_string(string, listletter, c), 1);
}

Test(utils, recursive_in_exist_stringv2) {
    int c = 0;
    char string[11] = "Hello Mans";
    char listletter = 'l';
    int ret = recursive_exist_in_string(string, listletter, c);
    cr_assert_neq(ret, 1);
}

Test(utils, recursive_in_exist_stringv3) {
    int c = 0;
    char string[11] = "HelloMans";
    char listletter = 'a';
    cr_assert_neq(recursive_exist_in_string(string, listletter, c), 1);
}

Test(utils, remove_doublons) {
    cr_assert_neq(string_remove_doublons(double_string, 12), "agGk");
}