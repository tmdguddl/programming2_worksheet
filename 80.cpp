#include <iostream>
using namespace std;

template<template T>

int main()
{
    double area;
    
    try {
        cout << "면적 입력 :";
        cin >> area;
        if (area < 0)
            throw(area);
    }
    catch (double e) {
        cout << e << "면적은 0보다 크거나 같아야합니다" << endl;
    }

