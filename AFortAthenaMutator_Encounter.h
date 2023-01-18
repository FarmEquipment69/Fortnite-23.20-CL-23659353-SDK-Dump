// Class /Script/FortniteGame.FortAthenaMutator_Encounter
// Size: 0x3a0
class AFortAthenaMutator_Encounter : public AFortAthenaMutator
{
	struct FScalableFloat ShouldSpawnEncounter; // 0x330 (0x28)
	class UFortDifficultyEncounterSettings* EncounterSettings; // 0x358 (0x8)
	class UFortAIEncounterInfo* CurrentEncounter; // 0x360 (0x8)
	bool bUsesAnimationSharing; // 0x368 (0x1)
	unsigned char unreflected_369[0x7]; // 0x369 (0x7) 
	struct TWeakObjectPtr<class UAnimationSharingSetup> AnimationSharingSetup; // 0x370 (0x28)
	struct FName LootTierGroupOverride; // 0x398 (0x4)
	unsigned char padding_39c[0x4]; // 0x39c (0x4)

	/* Functions */

	// Function /Script/FortniteGame.FortAthenaMutator_Encounter.HandleRiftDying (Underlying native function: HandleRiftDying 0x84a7068)
	void HandleRiftDying(class UFortAIEncounterInfo*& Encounter, class ABuildingRift*& Rift, class AController*& Controller, class AActor*& DamageActor); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortAthenaMutator_Encounter.HandleAISpawned (Underlying native function: HandleAISpawned 0x70dc290)
	void HandleAISpawned(class UFortAIEncounterInfo*& Encounter, class AFortAIPawn*& SpawnedEnemy); // (Final | Native | Protected)
};

