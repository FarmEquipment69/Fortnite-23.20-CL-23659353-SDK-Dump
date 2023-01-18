// ScriptStruct /Script/FortniteGame.PerkMutatorData
// Size: 0x108
struct FPerkMutatorData
{
	struct FGameplayTag PerkTag; // 0x0 (0x4)
	struct FGameplayTag ShowPerkSelectTag; // 0x4 (0x4)
	struct FGameplayTag PassivePerkTag; // 0x8 (0x4)
	struct FGameplayTag ItemPerkTag; // 0xc (0x4)
	struct FGameplayTag FirstRollTag; // 0x10 (0x4)
	struct FGameplayTag BlockRespawnTag; // 0x14 (0x4)
	class UClass* PerkUnlockedGameplayEffectClass; // 0x18 (0x8)
	class UClass* ShowPerkSelectGameplayEffectClass; // 0x20 (0x8)
	class UClass* BlockRespawnGameplayEffectClass; // 0x28 (0x8)
	class UClass* PerkScreenIntroWidgetClass; // 0x30 (0x8)
	struct FScalableFloat StartingRerollCount; // 0x38 (0x28)
	struct FScalableFloat RerollsToGivePerPerkUnlock; // 0x60 (0x28)
	struct FScalableFloat MaxRerollsPerPlayer; // 0x88 (0x28)
	struct TMap<struct FName, struct FGameplayTag> FactionItemMapping; // 0xb0 (0x50)
	bool bShouldShowBackgroundImage; // 0x100 (0x1)
	unsigned char padding_101[0x7]; // 0x101 (0x7)
};

