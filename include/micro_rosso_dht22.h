#ifndef __env_dht22_h
#define __env_dht22_h

class EnvDHT22 {
public:
  EnvDHT22();
  static bool setup( uint8_t pin,
                     const char* topic_temp = "/temperature",
                     const char* topic_hum = "/humidity",
                     timer_descriptor &timer_report = micro_rosso::timer_report 
  );
};

#endif  // __env_dht22_h
