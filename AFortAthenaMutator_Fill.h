// Class /Script/FortniteGame.FortAthenaMutator_Fill
// Size: 0x478
class AFortAthenaMutator_Fill : public AFortAthenaMutator
{
	unsigned char unreflected_330[0x18]; // 0x330 (0x18) 
	class UClass* FloorActorClass; // 0x348 (0x8)
	struct FScalableFloat SpawnHeight; // 0x350 (0x28)
	struct FScalableFloat ZKillOffset; // 0x378 (0x28)
	struct FScalableFloat ZMovementToleranceOffset; // 0x3a0 (0x28)
	struct FScalableFloat BuildableOffset; // 0x3c8 (0x28)
	struct FScalableFloat CanBuildOnLava; // 0x3f0 (0x28)
	class AAthenaFillFloor* LavaFloor; // 0x418 (0x8)
	struct FAthenaGameMessageData GameMsgLavaMoving; // 0x420 (0x50)
	unsigned char padding_470[0x8]; // 0x470 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortAthenaMutator_Fill.OnPlaylistLoaded (Underlying native function: OnPlaylistLoaded 0x84a8aec)
	void OnPlaylistLoaded(struct FName& PlaylistName, struct FGameplayTagContainer& PlaylistContainerTags); // (Final | 0x00000002 | Native | Protected | HasOutParms)

	// Function /Script/FortniteGame.FortAthenaMutator_Fill.OnMutatorGameplayEvent (Underlying native function: OnMutatorGameplayEvent 0x84a85a0)
	void OnMutatorGameplayEvent(int& EventId, int& EventParam1, int& EventParam2, int& EventParam3); // (Final | 0x00000002 | Native | Protected)

	// Function /Script/FortniteGame.FortAthenaMutator_Fill.OnGamePhaseChanged (Underlying native function: OnGamePhaseChanged 0x84a7ecc)
	void OnGamePhaseChanged(enum EAthenaGamePhase& GamePhase); // (Final | 0x00000002 | Native | Protected)

	// Function /Script/FortniteGame.FortAthenaMutator_Fill.GetLavaSupportLevel (Underlying native function: GetLavaSupportLevel 0x84a5fcc)
	float GetLavaSupportLevel(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaMutator_Fill.GetLavaFloor (Underlying native function: GetLavaFloor 0x84a5fb4)
	class AAthenaFillFloor* GetLavaFloor(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

