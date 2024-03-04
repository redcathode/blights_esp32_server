#ifndef LIGHTING_CONTROL_H
#define LIGHTING_CONTROL_H

void set_lighting_values(int red, int green, int blue, int warmwhite);

float grab_ds18b20_temp(int idx);

#endif // LIGHTING_CONTROL_H