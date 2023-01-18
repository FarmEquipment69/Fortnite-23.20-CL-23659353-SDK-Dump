// Class /Script/FortniteGame.ApplyAnimatedMotionUpdateFunction
// Size: 0x170
class UApplyAnimatedMotionUpdateFunction : public UFirstPersonUpdateFunction
{
	enum EMotionTarget Target; // 0x28 (0x1)
	unsigned char unreflected_29[0x7]; // 0x29 (0x7) 
	struct FVector TranslationInheritRatios; // 0x30 (0x18)
	struct FRotator RotationInheritRatios; // 0x48 (0x18)
	float MotionBlendRate; // 0x60 (0x4)
	bool bAnimationDataIsZeroed; // 0x64 (0x1)
	unsigned char unreflected_65[0x3]; // 0x65 (0x3) 
	float MotionDecayRate; // 0x68 (0x4)
	float MaxYawRate; // 0x6c (0x4)
	unsigned char unreflected_70[0x30]; // 0x70 (0x30) 
	struct FTransform RawTransform; // 0xa0 (0x60)
	struct FTransform SmoothedTransform; // 0x100 (0x60)
	int RootBoneIndex; // 0x160 (0x4)
	unsigned char padding_164[0xc]; // 0x164 (0xc)
};

