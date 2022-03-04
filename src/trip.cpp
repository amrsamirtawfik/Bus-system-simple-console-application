#include "Trip.h"

Trip::Trip()
{
    //ctor
}
        Trip::Trip(std::string dp, std::string ds, std::string t,std::string d,Bus b){
        setDep(dp);
        setDes(ds);
        day=d;
        time=t;
        bus=b;
        }
        void Trip::setDes(std::string ds){

        destination=ds;
        }
        std::string Trip::getDes(){
        return destination;
        }
        void Trip::setDep(std::string dp){
        departure=dp;
        }
        std::string Trip::getDep(){
        return departure;
        }
        void Trip::setTime(std::string t){

        time=t;
        }
        std::string Trip::getTime(){
        return time;
        }
        void Trip::setDay(std::string d){
        day=d;
        }
        std::string Trip::getDay(){
        return day;
        }
Trip::~Trip()
{
    //dtor
}
