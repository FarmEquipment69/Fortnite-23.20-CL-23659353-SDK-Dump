// BlueprintGeneratedClass /Game/Animation/AnimNotifies/AnimNotifyState/AnimNotifyState_AttachAsset.AnimNotifyState_AttachAsset_C
// Size: 0x98
class UAnimNotifyState_AttachAsset_C : public UAnimNotifyState
{
	struct FAssetAttachment Attachment; // 0x30 (0x30)
	class UAnimSequence* Animation; // 0x60 (0x8)
	bool Looping; // 0x68 (0x1)
	unsigned char unreflected_69[0x7]; // 0x69 (0x7) 
	double PlayRate; // 0x70 (0x8)
	struct FGameplayTagContainer DoNotAttachTagContainer; // 0x78 (0x20)

	/* Functions */

	// Function /Game/Animation/AnimNotifies/AnimNotifyState/AnimNotifyState_AttachAsset.AnimNotifyState_AttachAsset_C.Received_NotifyEnd (Has no native function)
	bool ReceivedNotifyEnd(class USkeletalMeshComponent*& MeshComp, class UAnimSequenceBase*& Animation, struct FAnimNotifyEventReference& EventReference); // (Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent | Const)

	// Function /Game/Animation/AnimNotifies/AnimNotifyState/AnimNotifyState_AttachAsset.AnimNotifyState_AttachAsset_C.Received_NotifyBegin (Has no native function)
	bool ReceivedNotifyBegin(class USkeletalMeshComponent*& MeshComp, class UAnimSequenceBase*& Animation, float& TotalDuration, struct FAnimNotifyEventReference& EventReference); // (Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent | Const)
};

