//
// Created by Robel Arega on 6/9/2025.
//
#include <cstring>
#include "MyString.h"


MyString::MyString() : _sz(nullptr) {}

MyString::MyString(const char* sz){
    if (sz) {
        _sz = new char[strlen(sz)+1];
        strcpy(_sz, sz);
    } else {
        _sz = nullptr;
    }
}

MyString::~MyString() {
    delete[] _sz;
}

const char * MyString::GetString() const {

    return _sz;
}

void MyString::SetString(const char *sz) {
    if (_sz != nullptr) {
        delete[] _sz;
    }
    if (sz) {
        _sz = new char[strlen(sz)+1];
        strcpy(_sz, sz);
    } else {
        _sz = nullptr;
    }
}
