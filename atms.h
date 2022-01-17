#ifndef _ATMS_H
#define _ATMS_H

namespace ATMS
{
    enum class PacketType : uint8_t
    {
        Test = 0,
        Position = 1,
        Status = 2,
        Object = 3,
        Message = 4,
        MessageAck = 5,
        TelemetryData = 6,
        TelemetryDefinition = 7,
        Weather = 8,
        SubscriptionRequest = 9,
        LocalInfo = 10,
        Comment = 11,
        UserDefined = 127,
        NodeBeacon = 128,
        StationRegistration = 129,
        Ack = 255
    };

    class Flag
    {
    public:
        static const uint8_t South = 0x10;
        static const uint8_t HasAltitude = 0x20;
        static const uint8_t HasCourse = 0x40;
        static const uint8_t HasSpeed = 0x80;
        static const uint8_t West = 0x10;
        static const uint8_t HasPHGD = 0x20;
        static const uint8_t HasTimestamp = 0x40;
        static const uint8_t MessageSupport = 0x80;
    };
}

#endif