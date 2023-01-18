// Class /Script/FortniteGame.FortCreativeStatManagerComponent
// Size: 0x148
class UFortCreativeStatManagerComponent : public UActorComponent
{
	unsigned char unreflected_a0[0x8]; // 0xa0 (0x8) 
	class UFortMinigamePlayerDefinedStatFilter* StatFilter; // 0xa8 (0x8)
	struct FStatEventFilter StatEventFilter; // 0xb0 (0x90)
	struct FGameplayTag StatTargetTag; // 0x140 (0x4)
	unsigned char padding_144[0x4]; // 0x144 (0x4)

	/* Functions */

	// Function /Script/FortniteGame.FortCreativeStatManagerComponent.UpdateStatProperties (Underlying native function: UpdateStatProperties 0x87863b8)
	void UpdateStatProperties(class UFortMinigameStatsComponent*& MinigameStatsComponent, struct FText& NewName, struct TWeakObjectPtr<class UTexture2D>& NewHudIcon); // (Final | Native | Protected | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativeStatManagerComponent.SetupPlayerDefinedStat (Underlying native function: SetupPlayerDefinedStat 0x87856a0)
	void SetupPlayerDefinedStat(class UFortMinigameStatsComponent*& MinigameStatsComponent, struct FText& StatName, struct TWeakObjectPtr<class UTexture2D>& HudIcon); // (Final | Native | Protected | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativeStatManagerComponent.RemovePlayerDefinedStat (Underlying native function: RemovePlayerDefinedStat 0x8783534)
	void RemovePlayerDefinedStat(class UFortMinigameStatsComponent*& MinigameStatsComponent); // (Final | Native | Protected | BlueprintCallable)
};

