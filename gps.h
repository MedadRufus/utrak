#ifndef __GPS_H__
#define __GPS_H__

extern void gps_set_gps_only(void);
extern void gps_set_gga_only(void);
extern void gps_set_airborne_model(void);
extern void gps_set_power_save(void);
extern void gps_power_save(int on);
extern void gps_set_nmea(void);
extern void gps_save_settings(void);
extern void gps_startup_delay(void);
#endif
