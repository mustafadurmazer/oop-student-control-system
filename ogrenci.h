#pragma once
#include <iostream>
using namespace std;

class ogrenci{
private:
    int id;
    string ad;
    int sınavnot;
public:
    ogrenci(int _id,string _ad,int _sınavnot);
    void setad(string _ad);
    string getad();
    void setid(int _id);
    int getid();
    void setNot(int _not);
    int getNot();
    void bilgileriyaz();
};