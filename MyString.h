//
// Created by Robel Arega on 6/9/2025.
//

#ifndef MYSTRING_H
#define MYSTRING_H


//String class for passing c-string

class MyString {

public:
    MyString();
    MyString(const char *sz);
    ~MyString();

    const char* GetString() const;

    void SetString(const char *sz);

private:
    char* _sz;
};



#endif //MYSTRING_H
