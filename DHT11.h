#ifndef DHT11_H
#define DHT11_H

#include "pico/stdlib.h"

class DHT11 {
public:
    DHT11(uint pin);
    bool readData();
    int getTemperature();
    int getHumidity();

private:
    uint _pin;
    int temperature;
    int humidity;
};

#endif