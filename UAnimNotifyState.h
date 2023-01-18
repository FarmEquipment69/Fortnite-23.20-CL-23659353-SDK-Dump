// Class /Script/Engine.AnimNotifyState
// Size: 0x30
class UAnimNotifyState : public UObject
{
	unsigned char unreflected_30[0x30]; 

	/* Functions */

	// Function /Script/Engine.AnimNotifyState.Received_NotifyTick (Has no native function)
	bool ReceivedNotifyTick(class USkeletalMeshComponent*& MeshComp, class UAnimSequenceBase*& Animation, float& FrameDeltaTime, struct FAnimNotifyEventReference& EventReference); // (Event | Public | HasOutParms | BlueprintEvent | Const)

	// Function /Script/Engine.AnimNotifyState.Received_NotifyEnd (Has no native function)
	bool ReceivedNotifyEnd(class USkeletalMeshComponent*& MeshComp, class UAnimSequenceBase*& Animation, struct FAnimNotifyEventReference& EventReference); // (Event | Public | HasOutParms | BlueprintEvent | Const)

	// Function /Script/Engine.AnimNotifyState.Received_NotifyBegin (Has no native function)
	bool ReceivedNotifyBegin(class USkeletalMeshComponent*& MeshComp, class UAnimSequenceBase*& Animation, float& TotalDuration, struct FAnimNotifyEventReference& EventReference); // (Event | Public | HasOutParms | BlueprintEvent | Const)

	// Function /Script/Engine.AnimNotifyState.GetNotifyName (Underlying native function: GetNotifyName 0x9c6cd5c)
	struct FString GetNotifyName(); // (Native | Event | Public | BlueprintEvent | Const)

	// Function /Script/Engine.AnimNotifyState.GetDefaultTriggerWeightThreshold (Underlying native function: GetDefaultTriggerWeightThreshold 0x9c6cc10)
	float GetDefaultTriggerWeightThreshold(); // (Native | Event | Public | BlueprintEvent | Const)
};

