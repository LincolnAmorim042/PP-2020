//
// Created by delair on 31-Mar-20.
//

#ifndef STRING_DSTRING_H
#define STRING_DSTRING_H


class DString {

    char str[256];
public:
    DString();
    DString(const char*);

    void copy(DString);
    const char* operator+(DString);

    const char* getStr();
    const char* operator[](const char*);
};


#endif //STRING_DSTRING_H
