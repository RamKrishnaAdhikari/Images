#include "exif.h"

exif::exif():herstellername(""),modellbezeichnung(""),blitz(false) {}
exif::exif(const std::string& herstellername,const std::string& modellbezeichnung,bool blitz)
    :herstellername(herstellername),modellbezeichnung(modellbezeichnung),blitz(blitz){}
std::string exif::getherstellername()const{
    return herstellername;
}
std::string exif:: getmodellbezeichnung()const{
    return modellbezeichnung;
}
bool exif::getblitz()const{
    return blitz;
}
