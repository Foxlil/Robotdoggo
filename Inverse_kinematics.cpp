/* Be able to change x and y and z with a function */
#define _USE_MATH_DEFINES
#include <math.h>
float l1 = 2.366536;
float l2 = 4.762298; 

float shoulder_offset = 2.0; /* REMEMBER TO CHECK VALUE!!!! */
float angle_offset = 2.0; /* REMEMBER TO CHECK VALUE!!!! */

/* DEPENDS ON WHICH LEG...FIX!!! */

float angles(float x, float y, float z) {
    /*hip*/
    float c = sqrt((z*z)+(y*y));
    float a1 = acos(shoulder_offset/c)*(180/M_PI);
    float a2 = fmod((-atan2(y,z))*(180/M_PI),360);
    float hip_angle = a1 + a2;

    float h = (tan(a1)*(180/M_PI)) * shoulder_offset;

    /*Femur*/
    float alpha = 360 - fmod((atan2(y,x))*(180/M_PI),360);
    float beta = acos(((l1*l1 + h*h) - (l2*l2))/(2*l1*h))*(180/M_PI);
    float femur_angle = alpha + beta;

    /*Tibia*/
    float elbow_angle = acos(((l1*l1 + l2*l2) - (h*h))/(2*l1*l2))*(180/M_PI);
    float initial_tibia_angle = 180 - elbow_angle;
    float tibia_angle = femur_angle + (initial_tibia_angle - angle_offset);
};