#ifndef _ATMS_H
#define _ATMS_H

namespace ATMS
{
    class PacketType
    {
        public:
            static const uint8_t Test = 0;
            static const uint8_t Position = 1;
            static const uint8_t Status = 2;
            static const uint8_t Object = 3;
            static const uint8_t Message = 4;
            static const uint8_t MessageAck = 5;
            static const uint8_t TelemetryData = 6;
            static const uint8_t TelemetryDefinition = 7;
            static const uint8_t Weather = 8;
            static const uint8_t SubscriptionRequest = 9;
            static const uint8_t LocalInfo = 10;
            static const uint8_t Comment = 11;
            static const uint8_t UserDefined = 127;
            static const uint8_t RoutingAnnouncement = 128;
            static const uint8_t Traceroute = 129;
            static const uint8_t Ack = 255;
    };

    class Flag
    {
        public:
            static const uint8_t LatSouth = 0x10;
            static const uint8_t HasAltitude = 0x20;
            static const uint8_t HasCourse = 0x40;
            static const uint8_t HasSpeed = 0x80;
            static const uint8_t LonWest = 0x10;
            static const uint8_t HasPHGD = 0x20;
            static const uint8_t HasTimestamp = 0x40;
            static const uint8_t MessageSupport = 0x80;
    };
}

#endif