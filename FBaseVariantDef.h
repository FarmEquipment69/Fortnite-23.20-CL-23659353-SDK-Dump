// ScriptStruct /Script/FortniteGame.BaseVariantDef
// Size: 0x90
struct FBaseVariantDef
{
	bool bStartUnlocked; // 0x8 (0x1)
	bool bIsDefault; // 0x9 (0x1)
	bool bHideIfNotOwned; // 0xa (0x1)
	unsigned char unreflected_b[0x1]; // 0xb (0x1) 
	struct FGameplayTag CustomizationVariantTag; // 0xc (0x4)
	struct FText VariantName; // 0x10 (0x18)
	struct TWeakObjectPtr<class UTexture2D> PreviewImage; // 0x28 (0x28)
	struct FText UnlockRequirements; // 0x50 (0x18)
	struct TWeakObjectPtr<class UFortAccountItemDefinition> UnlockingItemDef; // 0x68 (0x28)
};

