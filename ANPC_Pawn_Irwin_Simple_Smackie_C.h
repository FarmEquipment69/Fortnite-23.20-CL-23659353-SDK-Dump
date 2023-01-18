// BlueprintGeneratedClass /Irwin/AI/Simple/Smackie/Pawns/NPC_Pawn_Irwin_Simple_Smackie.NPC_Pawn_Irwin_Simple_Smackie_C
// Size: 0x3c18
class ANPC_Pawn_Irwin_Simple_Smackie_C : public ANPC_Pawn_Wildlife_Simple_Parent_C
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x3c08 (0x8)
	class USoundBase* SmackieLandSound; // 0x3c10 (0x8)

	/* Functions */

	// Function /Irwin/AI/Simple/Smackie/Pawns/NPC_Pawn_Irwin_Simple_Smackie.NPC_Pawn_Irwin_Simple_Smackie_C.ReceiveBeginPlay (Has no native function)
	void ReceiveBeginPlay(); // (Event | Protected | BlueprintEvent)

	// Function /Irwin/AI/Simple/Smackie/Pawns/NPC_Pawn_Irwin_Simple_Smackie.NPC_Pawn_Irwin_Simple_Smackie_C.SmackieLanded (Has no native function)
	void SmackieLanded(struct FHitResult& Hit); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Irwin/AI/Simple/Smackie/Pawns/NPC_Pawn_Irwin_Simple_Smackie.NPC_Pawn_Irwin_Simple_Smackie_C.OnSmackieLanded (Has no native function)
	void OnSmackieLanded(struct FHitResult& HitResult); // (Net | NetReliable | NetMulticast | BlueprintCallable | BlueprintEvent)

	// Function /Irwin/AI/Simple/Smackie/Pawns/NPC_Pawn_Irwin_Simple_Smackie.NPC_Pawn_Irwin_Simple_Smackie_C.ExecuteUbergraph_NPC_Pawn_Irwin_Simple_Smackie (Has no native function)
	void ExecuteUbergraphNPCPawnIrwinSimpleSmackie(int& EntryPoint, bool& CallFuncIsDedicatedServerReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate, struct FHitResult& K2NodeCustomEventHit, struct FVector& CallFuncK2GetActorLocationReturnValue, struct FHitResult& K2NodeCustomEventHitResult); // (Final | 0x00008000 | HasDefaults)
};

