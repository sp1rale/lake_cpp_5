//hm

#include <iostream>
#include <cstring>

using namespace std;

int mystrcmp(const char* str1, const char* str2) {
    while (*str1 != '\0' && *str2 != '\0') {
        if (*str1 != *str2) {
            return (*str1 > *str2) ? 1 : -1;
        }
        str1++;
        str2++;
    }
    if (*str1 == '\0' && *str2 == '\0') {
        return 0;  
    }
    else {
        return (*str1 != '\0') ? 1 : -1; 
    }
}

int StringToNumber(char* str) {
    return atoi(str);
}


char* NumberToString(int number) {
    char buffer[20]; 
    snprintf(buffer, sizeof(buffer), "%d", number);
    return strdup(buffer); 
}

char* Uppercase(char* str) {
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = toupper(str[i]);
    }
    return str;
}

char* Lowercase(char* str) {
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = tolower(str[i]);
    }
    return str;
}

char* mystrrev(char* str) {
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
    return str;
}

int main() 
{
    const char* str1 = "Hello";
    const char* str2 = "hello";

   cout << "mystrcmp result: " << mystrcmp(str1, str2) << endl;

    char numStr[] = "123";
    int num = StringToNumber(numStr);
   cout << "StringToNumber result: " << num << endl;

    char* str3 = NumberToString(456);
    cout << "NumberToString result: " << str3 << endl;
    delete[] str3; 

    char str4[] = "AbCdEf";
    Uppercase(str4);
    cout << "Uppercase result: " << str4 << endl;

    char str5[] = "AbCdEf";
    Lowercase(str5);
    cout << "Lowercase result: " << str5 << endl;

    char str6[] = "Reverse";
    mystrrev(str6);
    cout << "mystrrev result: " << str6 << endl;

    return 0;
}