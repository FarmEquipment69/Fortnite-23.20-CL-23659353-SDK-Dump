// ScriptStruct /Script/FortniteGame.FortNearbyActorsPerceptionConfiguration
// Size: 0xd0
struct FFortNearbyActorsPerceptionConfiguration
{
	float MinimumUpdateInterval; // 0x60 (0x4)
	enum EFortNearbyActorsTypes RequiredTypes; // 0x64 (0x1)
	unsigned char unreflected_65[0x3]; // 0x65 (0x3) 
	int NumberOfActorsToReturn; // 0x68 (0x4)
	float MinimumDistance; // 0x6c (0x4)
	struct TArray<struct TEnumAsByte<ETeamAttitude>> RequiredAttitudes; // 0x70 (0x10)
	bool bRequireLoS; // 0x80 (0x1)
	unsigned char unreflected_81[0x7]; // 0x81 (0x7) 
	struct FGameplayTagQuery RequiredTagsQuery; // 0x88 (0x48)
};

