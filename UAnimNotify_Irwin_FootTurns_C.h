// BlueprintGeneratedClass /Irwin/FX/AnimNotify_Irwin_FootTurns.AnimNotify_Irwin_FootTurns_C
// Size: 0xdc
class UAnimNotify_Irwin_FootTurns_C : public UFN_NiagaraNotify_C
{
	bool isRunning; // 0xd5 (0x1)
	bool LeftFoot; // 0xd6 (0x1)
	bool isFrontLeg; // 0xd7 (0x1)
	struct FGameplayTag TagtoCheck; // 0xd8 (0x4)

	/* Functions */

	// Function /Irwin/FX/AnimNotify_Irwin_FootTurns.AnimNotify_Irwin_FootTurns_C.Received_Notify (Has no native function)
	bool ReceivedNotify(class USkeletalMeshComponent*& MeshComp, class UAnimSequenceBase*& Animation, struct FAnimNotifyEventReference& EventReference); // (Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent | Const)
};

