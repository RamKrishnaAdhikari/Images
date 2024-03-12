#include "imageviewer.h"
#include<iostream>
using namespace std;

imageviewer::imageviewer() {}
void imageviewer:: addimage(const image& i){
    images.push_back(i);

}

void imageviewer::listallimages()const{
    for(const auto& i : images){
        cout<<i.getbildtitel();
        if(i.hasexif()){
            cout<<"("<<i.getexif()->getherstellername()<<" ";
            cout<<"-"<<i.getexif()->getmodellbezeichnung()<<" ";
            cout<<"Flash :";
            if(i.getexif()->getblitz()){
                cout<<"yes)"<<endl;
            }
            else{
                cout<<"no)"<<endl;
            }

        }
        else{
            cout<<"No exif"<<endl;


        }
    }

}
bool imageviewer::removeimage(std::string bildtitel){
    for(auto it =images.begin();it!=images.end();++it){
       if(it->getbildtitel()==bildtitel){
            images.erase(it);
           return true;
        }

    }
    cout<<"Keine solche image gefunden"<<endl;
    return false;


}
void imageviewer::addalbum(const std::string& name){
    for(const auto& a: albums){
        if(a.getname()==name){
            throw std::invalid_argument("Bereit existiert");
        }
    }
    album newalbum(name);
    albums.push_back(newalbum);

}
void imageviewer:: listalbums()const {
    for(const auto& a : albums){
        cout<<a.getname()<<endl;
        cout<<a.getimagesinalbum().size()<<endl;
    }
}
void imageviewer:: addimagetoalbum(const std::string bildtitel,const std::string name){
    image* img = nullptr;
    for( auto& i : images){
        if(i.getbildtitel()==bildtitel){
            img = &i;
            break;

        }
    }
    if(img==nullptr){
        throw std::invalid_argument("Keine solche image gefunden");
        return;

    }
    for( auto& a : albums ){
        if(a.getname()==name){
            a.addimageinalbum(img);
            return;

        }
    }
    throw std::invalid_argument("Keine solche album gefunden");
}
