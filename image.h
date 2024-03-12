#ifndef IMAGE_H
#define IMAGE_H
#include"exif.h"

class image
{
public:
    image();
    image(const std::string bildtitel);
    image(const std::string bildtitel,   exif* e);
    bool hasexif()const;
    std::string getbildtitel()const;
    exif* getexif()const;

    private:
    std::string bildtitel;
    exif* ex ;

};

#endif // IMAGE_H
