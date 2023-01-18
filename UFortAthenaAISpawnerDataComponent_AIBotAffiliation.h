// Class /Script/FortniteAI.FortAthenaAISpawnerDataComponent_AIBotAffiliation
// Size: 0x2c0
class UFortAthenaAISpawnerDataComponent_AIBotAffiliation : public UFortAthenaAISpawnerDataComponent_AffiliationBase
{
	bool bForceAddToCollectionOnDamage; // 0xb8 (0x1)
	unsigned char bOverrideIsAnAthenaGameParticipant; // 0xb9 (0x1)
	unsigned char bIsAnAthenaGameParticipant; // 0xb9 (0x1)
	unsigned char unreflected_ba[0x6]; // 0xba (0x6) 
	struct FScalableFloat SupportsMarkerWithFaction; // 0xc0 (0x28)
	struct FScalableFloat MarkerPropagationMaxDistance; // 0xe8 (0x28)
	struct FScalableFloat DisguiseProbability; // 0x110 (0x28)
	struct FScalableFloat RevealDisguiseOnDamage; // 0x138 (0x28)
	struct FScalableFloat RevealOnDamageExcludeAIPawnDamage; // 0x160 (0x28)
	struct FScalableFloat RevealDisguiseOnPlayerProximity; // 0x188 (0x28)
	struct FScalableFloat RevealPlayerProximityDistance; // 0x1b0 (0x28)
	struct FScalableFloat RevealPlayerProximityMinDuration; // 0x1d8 (0x28)
	struct FScalableFloat RevealPlayerProximityMaxDuration; // 0x200 (0x28)
	class UFortBotNameSettings* NameSettingsAfterReveal; // 0x228 (0x8)
	struct FGameplayTagContainer DisguisedFactionsBeforeReveal; // 0x230 (0x20)
	struct FGameplayTagContainer DisguisedFactionsAfterReveal; // 0x250 (0x20)
	struct TArray<class UClass*> DisguiseGameplayEffectBeforeReveal; // 0x270 (0x10)
	struct TArray<class UClass*> DisguiseGameplayEffectAfterReveal; // 0x280 (0x10)
	struct TArray<struct FItemAndCount> DisguiseInventory; // 0x290 (0x10)
	struct FDataTableRowHandle DisguiseLootInfo; // 0x2a0 (0x10)
	class UClass* DisguiseConversationComponent; // 0x2b0 (0x8)
	int OverrideTeamIndex; // 0x2b8 (0x4)
	unsigned char padding_2bc[0x4]; // 0x2bc (0x4)

	/* Functions */

	// Function /Script/FortniteAI.FortAthenaAISpawnerDataComponent_AIBotAffiliation.SetOverrideTeamIndex (Underlying native function: SetOverrideTeamIndex 0xa3ad994)
	void SetOverrideTeamIndex(int& InOverrideTeamIdx); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortAthenaAISpawnerDataComponent_AIBotAffiliation.GetTeamID (Underlying native function: GetTeamID 0xa3aca54)
	bool GetTeamID(int& OutTeamId); // (Native | Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Script/FortniteAI.FortAthenaAISpawnerDataComponent_AIBotAffiliation.GetSquadID (Underlying native function: GetSquadID 0xa3ac9b4)
	bool GetSquadID(int& OutSquadId); // (Native | Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)
};

