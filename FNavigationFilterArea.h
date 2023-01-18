// ScriptStruct /Script/NavigationSystem.NavigationFilterArea
// Size: 0x18
struct FNavigationFilterArea
{
	class UClass* AreaClass; // 0x0 (0x8)
	float TravelCostOverride; // 0x8 (0x4)
	float EnteringCostOverride; // 0xc (0x4)
	unsigned char bIsExcluded; // 0x10 (0x1)
	unsigned char bOverrideTravelCost; // 0x10 (0x1)
	unsigned char bOverrideEnteringCost; // 0x10 (0x1)
	unsigned char padding_11[0x7]; // 0x11 (0x7)
};

