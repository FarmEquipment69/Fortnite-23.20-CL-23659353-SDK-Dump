// Class /Script/FortniteGame.FortActorComponent_Affiliation
// Size: 0x1e8
class UFortActorComponent_Affiliation : public UActorComponent
{
	unsigned char bHasSpecificRelations; // 0xa0 (0x1)
	bool bHasPerceptionUpdateRequest; // 0xa1 (0x1)
	bool bIsInGameParticipantFaction; // 0xa2 (0x1)
	unsigned char unreflected_a3[0x5]; // 0xa3 (0x5) 
	struct FGameplayTagContainer DefaultFactionTags; // 0xa8 (0x20)
	unsigned char bIsRegisteredToAffiliationSystem; // 0xc8 (0x1)
	unsigned char unreflected_c9[0x3]; // 0xc9 (0x3) 
	float ResetSpecificRelationUnawareDelay; // 0xcc (0x4)
	float ResetSpecificRelationNoDamageDelay; // 0xd0 (0x4)
	uint32_t AffiliationUID; // 0xd4 (0x4)
	struct FGameplayTagContainer CurrentFactions; // 0xd8 (0x20)
	unsigned char unreflected_f8[0x10]; // 0xf8 (0x10) 
	struct FGameplayTagContainer CurrentBlockResetRelationTags; // 0x108 (0x20)
	struct FFortAffiliationComponentSpecificRelations SpecificRelations[0x3]; // 0x128 (0x20) (ARRAY) 
	struct TWeakObjectPtr<class UFortGameStateComponent_AffiliationManager> CachedAffiliationManager; // 0x188 (0x8)
	struct TWeakObjectPtr<class UAIPerceptionComponent> CachedAIPerceptionComponent; // 0x190 (0x8)
	class AFortAthenaAIBotController* CachedBotController; // 0x198 (0x8)
	bool bCanBeDamagedByNullInstigator; // 0x1a0 (0x1)
	unsigned char unreflected_1a1[0x17]; // 0x1a1 (0x17) 
	struct FMulticastInlineDelegate OnSpecificRelationAddedDelegate; // 0x1b8 (0x10)
	unsigned char padding_1c8[0x20]; // 0x1c8 (0x20)

	/* Functions */

	// Function /Script/FortniteGame.FortActorComponent_Affiliation.UpdatePerception (Underlying native function: UpdatePerception 0x828a20c)
	void UpdatePerception(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortActorComponent_Affiliation.SetCanBeDamagedByNullInstigator (Underlying native function: SetCanBeDamagedByNullInstigator 0x27453f8)
	void SetCanBeDamagedByNullInstigator(bool& bInCanBeDamagedByNullInstigator); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortActorComponent_Affiliation.OnRep_CurrentFactions (Underlying native function: OnRep_CurrentFactions 0x160a958)
	void OnRepCurrentFactions(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortActorComponent_Affiliation.OnOwnerTeamIndexChanged (Underlying native function: OnOwnerTeamIndexChanged 0x8289198)
	void OnOwnerTeamIndexChanged(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortActorComponent_Affiliation.OnOwnerPawnUnpossessed (Underlying native function: OnOwnerPawnUnpossessed 0x828911c)
	void OnOwnerPawnUnpossessed(class APawn*& Pawn); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortActorComponent_Affiliation.OnOwnerPawnPossessed (Underlying native function: OnOwnerPawnPossessed 0x82890a0)
	void OnOwnerPawnPossessed(class APawn*& Pawn); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortActorComponent_Affiliation.OnOwnerPawnDamaged (Underlying native function: OnOwnerPawnDamaged 0x8288e24)
	void OnOwnerPawnDamaged(class AActor*& DamageOnOwnerPawnDamageddActor, float& Damage, class AController*& InstigatedBy, class AActor*& DamageCauser, struct FVector& HitLocation, class UPrimitiveComponent*& FHitComponent, struct FName& BoneName, struct FVector& Momentum); // (Final | Native | Private | HasDefaults)

	// Function /Script/FortniteGame.FortActorComponent_Affiliation.OnBotControllerAlertLevelChanged (Underlying native function: OnBotControllerAlertLevelChanged 0x8288b70)
	void OnBotControllerAlertLevelChanged(class AFortAthenaAIBotController*& BotController, enum EAlertLevel& OldAlertLevel, enum EAlertLevel& NewAlertLevel); // (Final | Native | Private)
};

