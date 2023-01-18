// ScriptStruct /Script/FortniteGame.AircraftFlightInfo
// Size: 0x48
struct FAircraftFlightInfo
{
	struct FVector_NetQuantize100 FlightStartLocation; // 0x0 (0x18)
	struct FRotator FlightStartRotation; // 0x18 (0x18)
	float FlightSpeed; // 0x30 (0x4)
	float TimeTillFlightEnd; // 0x34 (0x4)
	float TimeTillDropStart; // 0x38 (0x4)
	float TimeTillDropEnd; // 0x3c (0x4)
	bool bEjectPlayersAtDropZoneExit; // 0x40 (0x1)
	bool bVisiblePostAthenaAircraftPhase; // 0x41 (0x1)
	unsigned char padding_42[0x6]; // 0x42 (0x6)
};

