// ScriptStruct /Script/FortniteGame.BuildingEditAnalyticEvent
// Size: 0x20
struct FBuildingEditAnalyticEvent
{
	struct TEnumAsByte<EFortBuildingType> BuildingType; // 0x0 (0x1)
	struct TEnumAsByte<EFortResourceType> ResourceType; // 0x1 (0x1)
	unsigned char unreflected_2[0x6]; // 0x2 (0x6) 
	struct FVector Location; // 0x8 (0x18)
};

