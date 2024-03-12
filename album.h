#ifndef ALBUM_H
#define ALBUM_H
#include"image.h"
#include<vector>
class album
{
public:
    album();
    album(const std::string&  name);
    std::string getname()const;
    std::vector<image*>getimagesinalbum()const;
    void addimageinalbum(image* i);

private:
    std::string name ;
    std::vector<image*>imagesinalbum;
};

#endif // ALBUM_H
