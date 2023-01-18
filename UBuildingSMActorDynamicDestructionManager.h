// Class /Script/FortniteGame.BuildingSMActorDynamicDestructionManager
// Size: 0xe0
class UBuildingSMActorDynamicDestructionManager : public UWorldSubsystem
{
	struct TMap<class ABuildingSMActor*, struct FBuildingSMActorDynamicDestructionEntry> ActiveDynamicDestructionMap; // 0x30 (0x50)
	unsigned char unreflected_80[0x50]; // 0x80 (0x50) 
	class UMaterialInterface* DynamicDestructionMaterialInst; // 0xd0 (0x8)
	class UNiagaraSystem* DynamicDestructionNiagaraSystemInst; // 0xd8 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.BuildingSMActorDynamicDestructionManager.OnBuildingSMActorEndPlay (Underlying native function: OnBuildingSMActorEndPlay 0x862d44c)
	void OnBuildingSMActorEndPlay(class AActor*& Actor, struct TEnumAsByte<EEndPlayReason>& EndPlayReason); // (Final | Native | Private)
};

