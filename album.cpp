#include "album.h"

album::album() {}
album::album(const std::string& name):name(name){}
std::string album:: getname()const{
    return name;
}
std::vector<image*> album::getimagesinalbum()const{
    return imagesinalbum;
}
void album::addimageinalbum( image* i ){
    imagesinalbum.push_back(i);
}
