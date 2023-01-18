// ScriptStruct /Script/FortniteGame.FortOptionsMenuData
// Size: 0xf0
struct FFortOptionsMenuData
{
	enum ESettingTab OptionTabType; // 0x0 (0x1)
	bool bDisplayOption; // 0x1 (0x1)
	unsigned char unreflected_2[0x6]; // 0x2 (0x6) 
	struct FText DisplayName; // 0x8 (0x18)
	struct FGameplayTag PageWidgetAlias; // 0x20 (0x4)
	unsigned char unreflected_24[0x4]; // 0x24 (0x4) 
	class UClass* PageWidgetClass; // 0x28 (0x8)
	struct FSlateBrush TabBrush; // 0x30 (0xc0)
};

