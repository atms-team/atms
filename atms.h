#ifndef _ATMS_H
#define _ATMS_H

namespace ATMS
{
    static class PacketType
    {
        public:
            const uint8_t Test = 0;
            const uint8_t Position = 1;
            const uint8_t Status = 2;
            const uint8_t Object = 3;
            const uint8_t Message = 4;
            const uint8_t Ack = 5;
            const uint8_t TelemetryData = 6;
            const uint8_t TelemetryDefinition = 7;
            const uint8_t Weather = 8;
            const uint8_t SubscriptionRequest = 9;
            const uint8_t LocalInfo = 10;
            const uint8_t Comment = 11;
            const uint8_t UserDefined = 127;
            const uint8_t RoutingAnnouncement = 128;
            const uint8_t Traceroute = 129;
            const uint8_t Ack = 255;
    };

    static class Flags
    {
        public:
            const uint8_t LatSouth = 0x10;
            const uint8_t HasAltitude = 0x20;
            const uint8_t HasCourse = 0x40;
            const uint8_t HasSpeed = 0x80;
            const uint8_t LonWest = 0x10;
            const uint8_t HasPHGD = 0x20;
            const uint8_t HasTimestamp = 0x40;
            const uint8_t MessageSupport = 0x80;
    };
}

#endif