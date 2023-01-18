// BlueprintGeneratedClass /Game/Animation/AnimNotifies/AnimNotifyState/AnimNotifyState_TriggerAnimInputEvent.AnimNotifyState_TriggerAnimInputEvent_C
// Size: 0x34
class UAnimNotifyState_TriggerAnimInputEvent_C : public UAnimNotifyState
{
	struct FName EventName; // 0x30 (0x4)

	/* Functions */

	// Function /Game/Animation/AnimNotifies/AnimNotifyState/AnimNotifyState_TriggerAnimInputEvent.AnimNotifyState_TriggerAnimInputEvent_C.GetNotifyName (Has no native function)
	struct FString GetNotifyName(); // (Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent | Const)

	// Function /Game/Animation/AnimNotifies/AnimNotifyState/AnimNotifyState_TriggerAnimInputEvent.AnimNotifyState_TriggerAnimInputEvent_C.Received_NotifyEnd (Has no native function)
	bool ReceivedNotifyEnd(class USkeletalMeshComponent*& MeshComp, class UAnimSequenceBase*& Animation, struct FAnimNotifyEventReference& EventReference); // (Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent | Const)

	// Function /Game/Animation/AnimNotifies/AnimNotifyState/AnimNotifyState_TriggerAnimInputEvent.AnimNotifyState_TriggerAnimInputEvent_C.Received_NotifyBegin (Has no native function)
	bool ReceivedNotifyBegin(class USkeletalMeshComponent*& MeshComp, class UAnimSequenceBase*& Animation, float& TotalDuration, struct FAnimNotifyEventReference& EventReference); // (Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent | Const)
};

