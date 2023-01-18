// ScriptStruct /Script/FortniteGame.FortWorldMultiItemInfo
// Size: 0x60
struct FFortWorldMultiItemInfo
{
	unsigned char bEnableXPLimitsPerLevel; // 0x0 (0x1)
	unsigned char unreflected_1[0x7]; // 0x1 (0x7) 
	struct TWeakObjectPtr<class UFortItemDefinition> ItemDefinition; // 0x8 (0x28)
	class UClass* ComponentClassForXPLogic; // 0x30 (0x8)
	struct FScalableFloat RequiredXPForNextLevel; // 0x38 (0x28)
};

