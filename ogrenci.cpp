#include"ogrenci.h"

//CONSTRUCTOR
ogrenci::ogrenci(int _id,string _ad,int _sınavnot){
    id = _id;
    ad = _ad;
    sınavnot = _sınavnot;
}

void ogrenci::setad(string _ad){
    ad = _ad;
}
string ogrenci::getad(){
    return ad;
}


void ogrenci::setid(int _id){
    id = _id;
}
int ogrenci::getid(){
    return id;
}


void ogrenci::setNot(int _not){
    sınavnot = _not;
}
int ogrenci::getNot(){
    return sınavnot;
}

void ogrenci::bilgileriyaz(){
    cout<<"İlgili ögrencinin bilgileri: \nID: "<<id<<endl<<"Adı: "<<ad<<endl<<"Sınav Notu: "<<sınavnot<<endl;
}

