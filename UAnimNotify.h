// Class /Script/Engine.AnimNotify
// Size: 0x38
class UAnimNotify : public UObject
{
	unsigned char unreflected_38[0x38]; 

	/* Functions */

	// Function /Script/Engine.AnimNotify.Received_Notify (Has no native function)
	bool ReceivedNotify(class USkeletalMeshComponent*& MeshComp, class UAnimSequenceBase*& Animation, struct FAnimNotifyEventReference& EventReference); // (Event | Public | HasOutParms | BlueprintEvent | Const)

	// Function /Script/Engine.AnimNotify.GetNotifyName (Underlying native function: GetNotifyName 0x9c6cd5c)
	struct FString GetNotifyName(); // (Native | Event | Public | BlueprintEvent | Const)

	// Function /Script/Engine.AnimNotify.GetDefaultTriggerWeightThreshold (Underlying native function: GetDefaultTriggerWeightThreshold 0x9c6cc10)
	float GetDefaultTriggerWeightThreshold(); // (Native | Event | Public | BlueprintEvent | Const)
};

