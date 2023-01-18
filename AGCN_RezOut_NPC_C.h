// BlueprintGeneratedClass /Game/GameplayCueNotifies/Death/GCN_RezOut_NPC.GCN_RezOut_NPC_C
// Size: 0x728
class AGCN_RezOut_NPC_C : public AGCN_RezOut_C
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x718 (0x8)
	class USoundBase* SoundOnNPCDeath; // 0x720 (0x8)

	/* Functions */

	// Function /Game/GameplayCueNotifies/Death/GCN_RezOut_NPC.GCN_RezOut_NPC_C.Pre-Sequence Change (Has no native function)
	void PreSequenceChange(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/GameplayCueNotifies/Death/GCN_RezOut_NPC.GCN_RezOut_NPC_C.ExecuteUbergraph_GCN_RezOut_NPC (Has no native function)
	void ExecuteUbergraphGCNRezOutNPC(int& EntryPoint, struct FVector& CallFuncK2GetActorLocationReturnValue, int& TempintArrayIndexVariable, int& TempintLoopCounterVariable, int& CallFuncAddIntIntReturnValue, class UAudioComponent*& CallFuncSpawnSoundAtLocationReturnValue, class UMaterialInstanceDynamic*& CallFuncArrayGetItem, int& CallFuncArrayLengthReturnValue, bool& CallFuncLessIntIntReturnValue); // (Final | 0x00008000)
};

