#ifndef TRIP_H
#define TRIP_H
#include <string>
#include "Bus.h"


class Trip
{
    private:
        std::string departure,destination, time, day;

    public:
           Bus bus;
        Trip();
        Trip(std::string dp, std::string ds, std::string t,std::string d,Bus b);
        void setTime(std::string t);
        std::string getTime();
        void setDay(std::string d);
        std::string getDay();
        void setDes(std::string ds);
        std::string getDes();
        void setDep(std::string dp);
        std::string getDep();
        virtual ~Trip();

    protected:

};

#endif // TRIP_H
