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

    class PositionFlag
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

    class NodeFlag
    {
        static const uint8_t hasAtmsHam = 0x01;
        static const uint8_t hasAtmsISM = 0x02;
        static const uint8_t hasAtmsCore = 0x04;
        static const uint8_t canGateToAprsIS = 0x08;
        static const uint8_t canGateToAprsRF = 0x10;
        static const uint8_t timeSourceNone = 0;
        static const uint8_t timeSourceLocalUnv = 1;
        static const uint8_t timeSourceLocalVer = 2;
        static const uint8_t timeSourceSynced = 3;
    };
}

#endif