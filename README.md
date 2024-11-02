# micro rosso dth22

This a module for the [micro_rosso](https://github.com/xopxe/micro_rosso_platformio) system.

It provides support for the DTH22 temperature/humidity sensors by publishing ROS2 topics.

## Loading and starting

First, import module into in your project's `platformio.ini`:

```
lib_deps =
    ...
    https://github.com/xopxe/micro_rosso_dht22.git
```

Then, in your `main.cpp`:

```
...
#include "micro_rosso_dht22.h"
static EnvDHT22 env;
...
void setup() {
  ...
  env.setup( 5 ); // pass the pin where the sensor is connected
  ...
}
```

The setup method allows passing optional topic names and a different micro_rosso timer to change the publication rate (by default, it uses the 5Hz timer). It is declared as follows:

```
  static bool setup(uint8_t pin,
                    const char *topic_temp = "/temperature",
                    const char *topic_hum = "/humidity",
                    timer_descriptor &timer_report = micro_rosso::timer_report);
```

## Using the module

The module emits a [sensor_msgs/msg/temperature](https://docs.ros2.org/foxy/api/sensor_msgs/msg/Temperature.html) and a [sensor_msgs/msg/relative_humidity](http://docs.ros.org/en/noetic/api/sensor_msgs/html/msg/RelativeHumidity.html) topic.

## Authors and acknowledgment

jvisca@fing.edu.uy - [Grupo MINA](https://www.fing.edu.uy/inco/grupos/mina/), Facultad de Ingeniería - Udelar, 2024

## License

MIT


