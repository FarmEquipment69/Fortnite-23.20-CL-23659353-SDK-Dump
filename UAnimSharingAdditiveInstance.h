// Class /Script/AnimationSharing.AnimSharingAdditiveInstance
// Size: 0x360
class UAnimSharingAdditiveInstance : public UAnimInstance
{
	struct TWeakObjectPtr<class USkeletalMeshComponent> BaseComponent; // 0x348 (0x8)
	struct TWeakObjectPtr<class UAnimSequence> AdditiveAnimation; // 0x350 (0x8)
	float Alpha; // 0x358 (0x4)
	bool bStateBool; // 0x35c (0x1)
	unsigned char padding_35d[0x3]; // 0x35d (0x3)
};

