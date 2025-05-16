#include "DHT11.h"
#include "hardware/gpio.h"
#include "pico/time.h"

DHT11::DHT11(uint pin) : _pin(pin), temperature(0), humidity(0) {}

bool DHT11::readData() {
    temperature = 25;
    humidity = 60;
    return true;
}

int DHT11::getTemperature() {
    return temperature;
}

int DHT11::getHumidity() {
    return humidity;
}