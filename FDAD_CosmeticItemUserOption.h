// ScriptStruct /Script/FortniteGame.DAD_CosmeticItemUserOption
// Size: 0x98
struct FDAD_CosmeticItemUserOption : FDAD_BaseCreativeUserOption
{
	struct TWeakObjectPtr<class UFortItemDefinition> CosmeticItemAsset; // 0x28 (0x28)
	struct FGameplayTag GameplayTag; // 0x50 (0x4)
	unsigned char unreflected_54[0x4]; // 0x54 (0x4) 
	struct FGameplayTagContainer DefaultVariants; // 0x58 (0x20)
	struct FLinearColor VFXColor; // 0x78 (0x10)
	struct FString StoreLink; // 0x88 (0x10)
};

