#include <stdio.h>
#include <stdbool.h>

/* 
TODO:
- Implement strcpy
- Implement strcat
*/



int stringLength(char *str);
bool stringComp(char *str1, char *str2);

int main() {
    char *testString1, *testString2;
    int len1, len2;

    printf("====== Tests ======\n");

    testString1 = "Bobby";
    len1 = stringLength(testString1);

    testString2 = "Johnny Salami";
    len2 = stringLength(testString2);
    
    printf("testString 1: %s\nLength 1: %d\n", testString1, len1);
    printf("testString 2: %s\nLength 2: %d\n", testString2, len2);

    printf("=== stringComp Test ===\n");
    
    printf("Comparison of Test String 1 and 2: %d\n", stringComp(testString1, testString2));

    printf("Comparison of Test String 1 and \"Bobby\": %d\n", stringComp(testString1, "Bobby"));

    return 0;
}

int stringLength(char *str) {
    int length;

    length = 0;

    while (str[length]) {
        length++;
    }

    return length;
}

bool stringComp(char *str1, char *str2) {
    int len1, len2, i;

    len1 = stringLength(str1);
    len2 = stringLength(str2);

    if (len1 != len2) {
        return false;
    }

    for (i = 0; i < len1; i++) {
        if (str1[i] != str2[i]) {
            return false;
        }
    }

    return true;
}