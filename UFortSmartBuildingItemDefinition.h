// Class /Script/FortniteGame.FortSmartBuildingItemDefinition
// Size: 0xdc0
class UFortSmartBuildingItemDefinition : public UFortBuildingItemDefinition
{
	enum ESmartBuildMode SmartBuildMode; // 0xda8 (0x1)
	unsigned char unreflected_da9[0x3]; // 0xda9 (0x3) 
	float TurboBuildInterval; // 0xdac (0x4)
	struct TArray<struct FSmartBuildSelection> BuildSelections; // 0xdb0 (0x10)
};

