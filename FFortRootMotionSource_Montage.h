// ScriptStruct /Script/FortniteGame.FortRootMotionSource_Montage
// Size: 0x130
struct FFortRootMotionSource_Montage : FRootMotionSource
{
	class UAnimMontage* Montage; // 0xd8 (0x8)
	bool bExtendMotionOnLastFrame; // 0xe0 (0x1)
	unsigned char unreflected_e1[0x7]; // 0xe1 (0x7) 
	struct FVector LatestRepMovementLocation; // 0xe8 (0x18)
	struct TWeakObjectPtr<class UMotionWarpingComponent> MotionWarpingComp; // 0x100 (0x8)
	unsigned char padding_108[0x28]; // 0x108 (0x28)
};

