// ScriptStruct /Script/FortniteGame.PlayerBuildableClassFilter
// Size: 0x10
struct FPlayerBuildableClassFilter
{
	struct TEnumAsByte<EFortResourceType> ResourceType; // 0x0 (0x1)
	struct TEnumAsByte<EFortBuildingType> BuildingType; // 0x1 (0x1)
	unsigned char unreflected_2[0x2]; // 0x2 (0x2) 
	int Level; // 0x4 (0x4)
	class UBuildingEditModeMetadata* EditModeMetadata; // 0x8 (0x8)
};

