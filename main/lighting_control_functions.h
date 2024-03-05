#ifndef LIGHTING_CONTROL_H
#define LIGHTING_CONTROL_H

void set_lighting_values_from_global();

float grab_ds18b20_temp(int idx);

typedef struct {
    int red;
    int green;
    int blue;
    int warmwhite;
} LightingValues;

extern LightingValues globalLightingValues;

#endif // LIGHTING_CONTROL_H