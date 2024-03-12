#ifndef EXIF_H
#define EXIF_H
#include<string>

class exif
{
public:
    exif();
    exif(const std::string& herstellername,const std::string& modellbezeichnung,bool blitz);
    std::string getherstellername()const;
    std::string getmodellbezeichnung()const;
    bool getblitz()const;
private:
    std::string herstellername;
    std::string modellbezeichnung;
    bool blitz;
};

#endif // EXIF_H
