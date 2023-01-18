// ScriptStruct /Script/FortniteGame.FortVerbMessage_LandVehicleTrick
// Size: 0xa8
struct FFortVerbMessage_LandVehicleTrick : FVerbMessage
{
	int PointsGained; // 0x68 (0x4)
	int TrickCount; // 0x6c (0x4)
	float AirDistance; // 0x70 (0x4)
	float AirHeight; // 0x74 (0x4)
	float AirTime; // 0x78 (0x4)
	unsigned char unreflected_7c[0x4]; // 0x7c (0x4) 
	struct FSubjectTagsPair VehicleInfo; // 0x80 (0x28)
};

