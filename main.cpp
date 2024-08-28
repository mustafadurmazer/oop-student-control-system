#include<iostream>
#include<list>
#include"ogrenci.h"
#include"ogrenci.cpp"

using namespace std;

void menu(){
    cout<<"Lütfen yapmak istediğiniz işlemi tuşlayınız"<<endl;
    cout<<"1: Yeni Kayıt Ekle"<<endl;
    cout<<"2: Tum Listeyi Goster"<<endl;
    cout<<"3: Id'sine göre Ogrenci Sil"<<endl;
    cout<<"4: Ogrenci Ara"<<endl;
    cout<<"5: Cıkıs"<<endl<<endl;
}

void ogrenciekle(list<ogrenci> *lst){
    int _id;
    string _ad;
    int _sınavnot;
    cout<<"Lütfen öğrenci adınız giriniz. "<<endl;
    cin>>_ad;
    cout<<"Lütfen öğrenci ID giriniz. "<<endl;
    cin>>_id;
    cout<<"Lütfen ögrenci sınavnotunu giriniz. "<<endl;
    cin>>_sınavnot;
    ogrenci ogr(_id,_ad,_sınavnot);
    lst->push_back(ogr);
    cout<<"Ögrenci başarıyla eklendi."<<endl<<endl;

}

void ogrencilerigoster(list<ogrenci> *lst){
    list<ogrenci> :: iterator itr;
    int sayac = 1;
    for(itr = lst->begin(); itr != lst->end();itr++){
        cout<<"Ogrenci "<<sayac<<" Bilgileri: "<<endl<<"Adı: "<<itr->getad()<<endl<<"ID: "<<itr->getid()<<endl<<"Sınav Notu: "<<itr->getNot()<<endl<<endl;
        sayac++;
    }
    cout<<"Toplam öğrenci sayısı: "<<sayac-1<<endl<<endl;
}

void ogrenciara(list<ogrenci> *lst){
    int id;
    cout<<"Lütfen ilgili öğrencinin ID'sini giriniz: ";
    cin>>id;
    cout<<endl;
    list<ogrenci> :: iterator itr;
    for(itr = lst->begin(); itr != lst->end();itr++){
        if(id == itr->getid()){
            cout<<"ID'si "<<id<<" Ogrenci Bilgileri: "<<endl<<"Adı: "<<itr->getad()<<endl<<"ID: "<<itr->getid()<<endl<<"Sınav Notu: "<<itr->getNot()<<endl<<endl;
            return;
    }}
    cout<<"Bu ID'ye sahip bir öğrenci bulunmuyor!!"<<endl<<endl;
}

void ogrencisil(list<ogrenci> *lst){
    int id;
    cout<<"Lütfen silinecek öğrencinin ID'sini giriniz: ";
    cin>>id;
    cout<<endl;
    list<ogrenci> :: iterator itr;
    for(itr = lst->begin(); itr != lst->end();itr++){
        if(id == itr->getid()){
            lst->erase(itr);
            cout<<"İlgili öğrenci silindi!!"<<endl<<endl;
            return;
    }
}
    cout<<"Bu ID'ye sahip bir öğrenci bulunmuyor!!"<<endl<<endl;
    
}


int main(){
    cout<<endl<<"ÖĞRENCİ BİLGİ SİSTEMİNE HOŞGELDİNİZ..."<<endl;
    cout<< "*************************"<<endl;
    cout<< "* Öğrenci Bilgi Sistemi *"<<endl;
    cout<< "*************************"<<endl<<endl;
    
    list<ogrenci> *ogrencilist = new list<ogrenci>;
    int secim = 0;
    while(1){
        menu();
        cin>>secim;
        cout<<endl;
        if(secim == 1){
            ogrenciekle(ogrencilist);
            continue;
        }
        else if(secim == 2){
            ogrencilerigoster(ogrencilist);
            continue;
        }
        else if (secim == 3){
            ogrencisil(ogrencilist);
        }
        else if(secim == 4){
            ogrenciara(ogrencilist);
        }
        else if(secim == 5){
            cout<<"Uygulamayı Kullandığınız İçin Teşekkürler"<<endl;
            break;
        }
        else{
            cout<<"Yanlış Tuşlama Yaptınız!\nTekrar deneyiniz!!"<<endl;
            continue;
        }
    }

    return 0;
}