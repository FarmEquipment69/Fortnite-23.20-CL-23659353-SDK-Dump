// BlueprintGeneratedClass /Game/Animation/AnimNotifies/AnimNotifyState/AnimNotifyState_HolsterWeapon.AnimNotifyState_HolsterWeapon_C
// Size: 0x38
class UAnimNotifyState_HolsterWeapon_C : public UAnimNotifyState
{
	bool PlayEquipAnim; // 0x30 (0x1)
	bool Force; // 0x31 (0x1)
	unsigned char unreflected_32[0x2]; // 0x32 (0x2) 
	struct FName AnimNotifyStateHolster; // 0x34 (0x4)

	/* Functions */

	// Function /Game/Animation/AnimNotifies/AnimNotifyState/AnimNotifyState_HolsterWeapon.AnimNotifyState_HolsterWeapon_C.Received_NotifyEnd (Has no native function)
	bool ReceivedNotifyEnd(class USkeletalMeshComponent*& MeshComp, class UAnimSequenceBase*& Animation, struct FAnimNotifyEventReference& EventReference); // (Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent | Const)

	// Function /Game/Animation/AnimNotifies/AnimNotifyState/AnimNotifyState_HolsterWeapon.AnimNotifyState_HolsterWeapon_C.Received_NotifyBegin (Has no native function)
	bool ReceivedNotifyBegin(class USkeletalMeshComponent*& MeshComp, class UAnimSequenceBase*& Animation, float& TotalDuration, struct FAnimNotifyEventReference& EventReference); // (Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent | Const)
};

