#ifndef BUS_H
#define BUS_H
#include <string>

class Bus
{
    private:


    public:
        Bus();
        std::string seats [14]={"A1","A2","B1","B2","B3","C1","C2","C3","D1","D2","D3","E1","E2","E3"};
        bool seatsAck [14];
        virtual ~Bus();

    protected:



};

#endif // BUS_H
