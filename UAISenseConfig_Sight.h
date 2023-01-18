// Class /Script/AIModule.AISenseConfig_Sight
// Size: 0x70
class UAISenseConfig_Sight : public UAISenseConfig
{
	class UClass* Implementation; // 0x48 (0x8)
	float SightRadius; // 0x50 (0x4)
	float LoseSightRadius; // 0x54 (0x4)
	float PeripheralVisionAngleDegrees; // 0x58 (0x4)
	struct FAISenseAffiliationFilter DetectionByAffiliation; // 0x5c (0x4)
	float AutoSuccessRangeFromLastSeenLocation; // 0x60 (0x4)
	float PointOfViewBackwardOffset; // 0x64 (0x4)
	float NearClippingRadius; // 0x68 (0x4)
	unsigned char padding_6c[0x4]; // 0x6c (0x4)
};

