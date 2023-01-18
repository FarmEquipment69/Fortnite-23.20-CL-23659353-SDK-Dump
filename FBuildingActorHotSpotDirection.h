// ScriptStruct /Script/FortniteAI.BuildingActorHotSpotDirection
// Size: 0x28
struct FBuildingActorHotSpotDirection
{
	class UAIHotSpotConfig* HotSpotConfig; // 0x0 (0x8)
	struct FVector Offset; // 0x8 (0x18)
	unsigned char bMirrorX; // 0x20 (0x1)
	unsigned char bMirrorY; // 0x20 (0x1)
	unsigned char unreflected_21[0x3]; // 0x21 (0x3) 
	enum EFortHotSpotDirection Direction; // 0x24 (0x1)
	enum EHotspotTypeConfigMode TypeConfigUsage; // 0x25 (0x1)
	unsigned char padding_26[0x2]; // 0x26 (0x2)
};

