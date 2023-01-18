// Class /Script/FortniteAI.FortAthenaAISpawnerDataComponent_AffiliationBase
// Size: 0xb8
class UFortAthenaAISpawnerDataComponent_AffiliationBase : public UFortAthenaAISpawnerDataComponent
{
	struct FGameplayTagContainer FactionTags; // 0x30 (0x20)
	struct FScalableFloat TurnHostileOnDamageIfNeutral; // 0x50 (0x28)
	struct FScalableFloat TurnHostileWhenBlockedTime; // 0x78 (0x28)
	struct TArray<struct FSpawnerDataComponentAffiliationSharedBBConfiguration> FactionSharedBBConfigurations; // 0xa0 (0x10)
	unsigned char bFullTeamAwarenessPropagation; // 0xb0 (0x1)
	unsigned char bAwarenessPropagationIsBasedOnAlertLevel; // 0xb0 (0x1)
	unsigned char unreflected_b1[0x3]; // 0xb1 (0x3) 
	float FullTeamAwarenessMaxDistance; // 0xb4 (0x4)

	/* Functions */

	// Function /Script/FortniteAI.FortAthenaAISpawnerDataComponent_AffiliationBase.SetFullTeamAwarenessPropagationDistance (Underlying native function: SetFullTeamAwarenessPropagationDistance 0xa3ad4d0)
	void SetFullTeamAwarenessPropagationDistance(float& InFullTeamAwarenessMaxDistance); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortAthenaAISpawnerDataComponent_AffiliationBase.SetFullTeamAwarenessPropagation (Underlying native function: SetFullTeamAwarenessPropagation 0xa3ad44c)
	void SetFullTeamAwarenessPropagation(bool& bInFullTeamAwarenessPropagation); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortAthenaAISpawnerDataComponent_AffiliationBase.SetFactionTags (Underlying native function: SetFactionTags 0xa3ad298)
	void SetFactionTags(struct FGameplayTagContainer& NewTags); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteAI.FortAthenaAISpawnerDataComponent_AffiliationBase.SetAwarenessPropagationIsBasedOnAlertLevel (Underlying native function: SetAwarenessPropagationIsBasedOnAlertLevel 0xa3acf34)
	void SetAwarenessPropagationIsBasedOnAlertLevel(bool& bInAwarenessPropagationIsBasedOnAlertLevel); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortAthenaAISpawnerDataComponent_AffiliationBase.GetFullTeamAwarenessPropagation (Underlying native function: GetFullTeamAwarenessPropagation 0xa3ac170)
	bool GetFullTeamAwarenessPropagation(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.FortAthenaAISpawnerDataComponent_AffiliationBase.GetFullTeamAwarenessMaxDistance (Underlying native function: GetFullTeamAwarenessMaxDistance 0x86b5958)
	float GetFullTeamAwarenessMaxDistance(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.FortAthenaAISpawnerDataComponent_AffiliationBase.GetFactionTag (Underlying native function: GetFactionTag 0x743b858)
	struct FGameplayTagContainer GetFactionTag(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortAthenaAISpawnerDataComponent_AffiliationBase.GetAwarenessPropagationIsBasedOnAlertLevel (Underlying native function: GetAwarenessPropagationIsBasedOnAlertLevel 0xa3abb10)
	bool GetAwarenessPropagationIsBasedOnAlertLevel(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

