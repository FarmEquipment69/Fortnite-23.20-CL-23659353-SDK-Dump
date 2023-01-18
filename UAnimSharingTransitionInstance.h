// Class /Script/AnimationSharing.AnimSharingTransitionInstance
// Size: 0x360
class UAnimSharingTransitionInstance : public UAnimInstance
{
	struct TWeakObjectPtr<class USkeletalMeshComponent> FromComponent; // 0x348 (0x8)
	struct TWeakObjectPtr<class USkeletalMeshComponent> ToComponent; // 0x350 (0x8)
	float BlendTime; // 0x358 (0x4)
	bool bBlendBool; // 0x35c (0x1)
	unsigned char padding_35d[0x3]; // 0x35d (0x3)
};

