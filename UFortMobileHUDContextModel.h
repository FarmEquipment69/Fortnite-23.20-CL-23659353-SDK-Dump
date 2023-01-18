// Class /Script/FortniteUI.FortMobileHUDContextModel
// Size: 0xd8
class UFortMobileHUDContextModel : public UDataAsset
{
	struct FText ContextLayoutName; // 0x30 (0x18)
	int DisplayOrderPriority; // 0x48 (0x4)
	bool bIsEditingContextByDefault; // 0x4c (0x1)
	unsigned char unreflected_4d[0x3]; // 0x4d (0x3) 
	class UPaperSprite* ContextIcon; // 0x50 (0x8)
	struct FGameplayTag ContextLayoutSaveTag; // 0x58 (0x4)
	unsigned char unreflected_5c[0x4]; // 0x5c (0x4) 
	struct FFortMobileContextFilter ContextFilter; // 0x60 (0x40)
	struct FGameplayTagContainer UseableHUDWidgetTags; // 0xa0 (0x20)
	struct TArray<struct FFortMobileHUDContextModelExtension> Extensions; // 0xc0 (0x10)
	enum EContextLayoutAccessLevel ContextLayoutAccessLevel; // 0xd0 (0x1)
	unsigned char padding_d1[0x7]; // 0xd1 (0x7)
};

