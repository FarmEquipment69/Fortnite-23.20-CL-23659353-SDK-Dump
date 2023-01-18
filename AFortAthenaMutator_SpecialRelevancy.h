// Class /Script/FortniteGame.FortAthenaMutator_SpecialRelevancy
// Size: 0x438
class AFortAthenaMutator_SpecialRelevancy : public AFortAthenaMutator
{
	class UClass* RootGridNodeClass; // 0x330 (0x8)
	struct TArray<struct FSpecialRelevancyMultiSquadControllerGroupsContainer> MultiSquadControllerGroupsContainers; // 0x338 (0x10)
	struct FSpecialRelevancyModeData* CurrentRelevancyModeData; // 0x348 (0x8)
	struct TArray<struct FClientRelevancyGroupEntry> ClientRelevancyGroups; // 0x350 (0x10)
	unsigned char unreflected_360[0x8]; // 0x360 (0x8) 
	class UClass* PlayerPawnClass; // 0x368 (0x8)
	struct TArray<class UClass*> ProjectileClasses; // 0x370 (0x10)
	struct FGameplayTagContainer TagsToHideOnRelevancyMode[0x5]; // 0x380 (0x20) (ARRAY) 
	bool bUseSpecialRelevancyPlayerStarts; // 0x420 (0x1)
	unsigned char unreflected_421[0x7]; // 0x421 (0x7) 
	class UFortReplicationGraphNode_SpecialRelevancy* SpecialRelevancyNode; // 0x428 (0x8)
	bool bEnablePlacePawnOnPlayerStart; // 0x430 (0x1)
	unsigned char padding_431[0x7]; // 0x431 (0x7)

	/* Functions */

	// Function /Script/FortniteGame.FortAthenaMutator_SpecialRelevancy.StartSquadRelevancy (Underlying native function: StartSquadRelevancy 0x8525148)
	void StartSquadRelevancy(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaMutator_SpecialRelevancy.StartSoloRelevancy (Underlying native function: StartSoloRelevancy 0x8525124)
	void StartSoloRelevancy(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaMutator_SpecialRelevancy.StartNormalRelevancy (Underlying native function: StartNormalRelevancy 0x8525100)
	void StartNormalRelevancy(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaMutator_SpecialRelevancy.StartMultiSquadRelevancy (Underlying native function: StartMultiSquadRelevancy 0x8525080)
	void StartMultiSquadRelevancy(int& NumOfSquadsInRelevancyGroup); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaMutator_SpecialRelevancy.SpawnActorPerRelevancyGroup (Underlying native function: SpawnActorPerRelevancyGroup 0x8524f18)
	void SpawnActorPerRelevancyGroup(struct FSpecialActorSpawnData& NewSpawnData, struct TArray<class AActor*>& SpawnedActors); // (Final | 0x00000002 | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaMutator_SpecialRelevancy.SetClientAuthoritativePhysics (Underlying native function: SetClientAuthoritativePhysics 0x8524d4c)
	void SetClientAuthoritativePhysics(bool& bEnabled); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaMutator_SpecialRelevancy.PlacePawnOnPlayerStart (Underlying native function: PlacePawnOnPlayerStart 0x852487c)
	void PlacePawnOnPlayerStart(class AFortPlayerController*& PlayerController); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaMutator_SpecialRelevancy.OnRep_CurrentRelevancyMode (Underlying native function: OnRep_CurrentRelevancyMode 0x85245ac)
	void OnRepCurrentRelevancyMode(struct FSpecialRelevancyModeData*& PrevMode); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortAthenaMutator_SpecialRelevancy.GetRelevantPawnGroups (Underlying native function: GetRelevantPawnGroups 0x852391c)
	void GetRelevantPawnGroups(struct TArray<struct FRelevantPawnArray>& RelevantPawns); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable | Const)

	// Function /Script/FortniteGame.FortAthenaMutator_SpecialRelevancy.GetPlayerPawns (Underlying native function: GetPlayerPawns 0x85235d8)
	void GetPlayerPawns(struct TArray<class AFortPlayerPawn*>& OutPawns, int& RelevancyGroupIndex); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaMutator_SpecialRelevancy.GetNumRelevancyGroups (Underlying native function: GetNumRelevancyGroups 0x8523510)
	int GetNumRelevancyGroups(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaMutator_SpecialRelevancy.GetMaxSquadSize (Underlying native function: GetMaxSquadSize 0x85234d0)
	int GetMaxSquadSize(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaMutator_SpecialRelevancy.GetActors (Underlying native function: GetActors 0x8522fa0)
	void GetActors(struct TArray<class AActor*>& OutActors, int& RelevancyGroupIndex, class UClass*& ActorClass); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaMutator_SpecialRelevancy.FindRelevancyGroupIndex (Underlying native function: FindRelevancyGroupIndex 0x8522f10)
	int FindRelevancyGroupIndex(class AActor*& Actor); // (Final | 0x00000002 | BlueprintAuthorityOnly | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaMutator_SpecialRelevancy.AreActorsInSameRelvancyGroup (Underlying native function: AreActorsInSameRelvancyGroup 0x85229fc)
	bool AreActorsInSameRelvancyGroup(class AActor*& Actor0, class AActor*& Actor1); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

