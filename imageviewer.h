#ifndef IMAGEVIEWER_H
#define IMAGEVIEWER_H
#include"image.h"
#include"album.h"
#include<vector>

class imageviewer
{
public:
    imageviewer();
    void addimage(const image& i);
    void listallimages()const;
     bool  removeimage(std::string bildtitel);
    void addalbum(const std::string& name);
     void listalbums()const;
     void addimagetoalbum(const std::string bildtitel,const std::string name);
private:
    std::vector<image>images;
    std::vector<album>albums;
};

#endif // IMAGEVIEWER_H
