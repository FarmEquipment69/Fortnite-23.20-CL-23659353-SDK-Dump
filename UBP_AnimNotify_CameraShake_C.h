// BlueprintGeneratedClass /Game/Animation/Game/BP_AnimNotify_CameraShake.BP_AnimNotify_CameraShake_C
// Size: 0x49
class UBP_AnimNotify_CameraShake_C : public UAnimNotify
{
	class UClass* ShakeBP; // 0x38 (0x8)
	double ShakeScale; // 0x40 (0x8)
	enum ECameraShakePlaySpace ShakeSpace; // 0x48 (0x1)

	/* Functions */

	// Function /Game/Animation/Game/BP_AnimNotify_CameraShake.BP_AnimNotify_CameraShake_C.Received_Notify (Has no native function)
	bool ReceivedNotify(class USkeletalMeshComponent*& MeshComp, class UAnimSequenceBase*& Animation, struct FAnimNotifyEventReference& EventReference); // (Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent | Const)
};

