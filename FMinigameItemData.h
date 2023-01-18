// ScriptStruct /Script/FortniteGame.MinigameItemData
// Size: 0xb0
struct FMinigameItemData
{
	struct TWeakObjectPtr<class UFortWorldItemDefinition> ItemDefinition; // 0x0 (0x28)
	int ItemQuantity; // 0x28 (0x4)
	unsigned char unreflected_2c[0xc]; // 0x2c (0xc) 
	struct FPropertyOverrideData ItemOptionData; // 0x38 (0x50)
	int TrackedIndex; // 0x88 (0x4)
	struct FGuid ItemVariantGuid; // 0x8c (0x10)
	struct FGuid SourceItemVariantGuid; // 0x9c (0x10)
	unsigned char padding_ac[0x4]; // 0xac (0x4)
};

