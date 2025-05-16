#include "DHT11.h"
#include <stdio.h>

int main() {
    stdio_init_all();
    DHT11 sensor(15);

    while (true) {
        if (sensor.readData()) {
            printf("Temp: %d°C | Humidity: %d%%\n", sensor.getTemperature(), sensor.getHumidity());
        } else {
            printf("Sensor read failed.\n");
        }
        sleep_ms(2000);
    }
}