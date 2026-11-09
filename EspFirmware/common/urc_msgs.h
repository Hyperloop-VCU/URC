#ifndef URC_MSGS_H
#define URC_MSGS_H

#include <stdint.h>

// Shared ESP-NOW message layouts for the sender boards and the dongle.
// Any change here must be reflashed to every board.

enum : uint8_t {
    MSG_ARM  = 1,
    MSG_HAND = 2,
};

struct __attribute__((packed)) MsgHeader {
    uint8_t  type;
    uint16_t seq;  //use to calculate packet loss
};

struct __attribute__((packed)) ImuData {
    uint8_t connected;
    float linear_x;
    float linear_y;
    float linear_z;
    float roll;   // radians
    float pitch;  // radians
    float yaw;    // radians
};

struct __attribute__((packed)) ArmMsg {
    MsgHeader header;
    ImuData   upperArm;
    ImuData   foreArm;
};

struct __attribute__((packed)) HandMsg {
    MsgHeader header;
    ImuData   imu;
};

static_assert(sizeof(MsgHeader) == 3,  "MsgHeader size changed");
static_assert(sizeof(ImuData)   == 25, "ImuData size changed");
static_assert(sizeof(ArmMsg)    == 53, "ArmMsg size changed");
static_assert(sizeof(HandMsg)   == 28, "HandMsg size changed");

#endif
