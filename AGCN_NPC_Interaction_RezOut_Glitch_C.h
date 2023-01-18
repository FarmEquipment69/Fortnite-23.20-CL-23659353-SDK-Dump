// BlueprintGeneratedClass /Game/GameplayCueNotifies/Death/GCN_NPC_Interaction_RezOut_Glitch.GCN_NPC_Interaction_RezOut_Glitch_C
// Size: 0x728
class AGCN_NPC_Interaction_RezOut_Glitch_C : public AGCN_RezOut_C
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x718 (0x8)
	class USoundBase* SoundOnNPCDeath; // 0x720 (0x8)

	/* Functions */

	// Function /Game/GameplayCueNotifies/Death/GCN_NPC_Interaction_RezOut_Glitch.GCN_NPC_Interaction_RezOut_Glitch_C.Spawn Dissolve VFX (Has no native function)
	void SpawnDissolveVFX(); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/GameplayCueNotifies/Death/GCN_NPC_Interaction_RezOut_Glitch.GCN_NPC_Interaction_RezOut_Glitch_C.ExecuteUbergraph_GCN_NPC_Interaction_RezOut_Glitch (Has no native function)
	void ExecuteUbergraphGCNNPCInteractionRezOutGlitch(int& EntryPoint, bool& CallFuncIsValidReturnValue, struct FVector& CallFuncK2GetComponentLocationReturnValue, struct FRotator& CallFuncK2GetComponentRotationReturnValue, struct FHitResult& CallFuncK2SetWorldRotationSweepHitResult); // (Final | 0x00008000 | HasDefaults)
};

