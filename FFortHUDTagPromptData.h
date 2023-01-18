// ScriptStruct /Script/FortniteGame.FortHUDTagPromptData
// Size: 0x48
struct FFortHUDTagPromptData
{
	struct FGameplayTag VolumeTag; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	struct FText TextPromptTitle; // 0x8 (0x18)
	struct FText TextPromptDescription; // 0x20 (0x18)
	bool bIsEnterData; // 0x38 (0x1)
	unsigned char unreflected_39[0x7]; // 0x39 (0x7) 
	class UClass* WidgetClass; // 0x40 (0x8)
};

