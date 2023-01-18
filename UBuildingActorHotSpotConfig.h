// Class /Script/FortniteAI.BuildingActorHotSpotConfig
// Size: 0x158
class UBuildingActorHotSpotConfig : public UDataAsset
{
	struct FBuildingActorHotSpotDirection DirectionSetup[0x6]; // 0x30 (0x28) (ARRAY) 
	struct FBuildingActorHotSpotDirection DefaultSetup; // 0x120 (0x28)
	class UAIHotSpotConfig* ExtraTypeConfig; // 0x148 (0x8)
	unsigned char bHasDirectionalSetup; // 0x150 (0x1)
	unsigned char padding_151[0x7]; // 0x151 (0x7)
};

