#include "image.h"

image::image() {}
image::image(const std::string bildtitel):bildtitel(bildtitel){}
image::image(const std::string bildtitel, exif* e):
    bildtitel(bildtitel),ex(e){}
bool image::hasexif()const{
    if(ex!=nullptr){
        return true;
    }
    return false;
 }
std::string image:: getbildtitel()const{
    return bildtitel;
}
exif* image::getexif()const {
    return ex;
}
