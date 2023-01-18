// BlueprintGeneratedClass /Game/Animation/AnimNotifies/AnimNotifyEvent/AnimNotify_PlayForceFeedback.AnimNotify_PlayForceFeedback_C
// Size: 0x60
class UAnimNotify_PlayForceFeedback_C : public UAnimNotify
{
	class UForceFeedbackEffect* ForceFeedbackTemplate; // 0x38 (0x8)
	class UForceFeedbackEffect* ForceFeedbackFarTemplate; // 0x40 (0x8)
	bool bPlayAtWorldLocation; // 0x48 (0x1)
	unsigned char unreflected_49[0x7]; // 0x49 (0x7) 
	double InnerRadius; // 0x50 (0x8)
	double OuterRadius; // 0x58 (0x8)

	/* Functions */

	// Function /Game/Animation/AnimNotifies/AnimNotifyEvent/AnimNotify_PlayForceFeedback.AnimNotify_PlayForceFeedback_C.Received_Notify (Has no native function)
	bool ReceivedNotify(class USkeletalMeshComponent*& MeshComp, class UAnimSequenceBase*& Animation, struct FAnimNotifyEventReference& EventReference); // (Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent | Const)
};

