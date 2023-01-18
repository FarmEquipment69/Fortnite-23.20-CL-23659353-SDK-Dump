// ScriptStruct /Script/FortniteGame.HomebaseNodeLevel
// Size: 0x60
struct FHomebaseNodeLevel
{
	struct FName DisplayDataId; // 0x0 (0x4)
	int MinCommanderLevel; // 0x4 (0x4)
	struct TArray<struct FFortItemQuantityPair> Cost; // 0x8 (0x10)
	struct TArray<struct FName> GameplayEffectRowNames; // 0x18 (0x10)
	struct TWeakObjectPtr<class UFortAbilityKit> AbilityKit; // 0x28 (0x28)
	struct TArray<struct FHomebaseSquadSlotId*> UnlockedSquadSlots; // 0x50 (0x10)
};

