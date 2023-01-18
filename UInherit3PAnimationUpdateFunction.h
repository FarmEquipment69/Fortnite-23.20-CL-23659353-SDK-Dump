// Class /Script/FortniteGame.Inherit3PAnimationUpdateFunction
// Size: 0x230
class UInherit3PAnimationUpdateFunction : public UFirstPersonUpdateFunction
{
	enum EMotionTarget Target; // 0x28 (0x1)
	unsigned char unreflected_29[0x7]; // 0x29 (0x7) 
	struct FVector TranslationInheritRatios; // 0x30 (0x18)
	struct FRotator RotationInheritRatios; // 0x48 (0x18)
	float MotionBlendRate; // 0x60 (0x4)
	float MotionDecayRate; // 0x64 (0x4)
	unsigned char unreflected_68[0x8]; // 0x68 (0x8) 
	struct FTransform ReloadOffset; // 0x70 (0x60)
	float MaxYawRate; // 0xd0 (0x4)
	unsigned char unreflected_d4[0x2c]; // 0xd4 (0x2c) 
	struct FTransform RawTransform; // 0x100 (0x60)
	struct FTransform SmoothedTransform; // 0x160 (0x60)
	float Alpha; // 0x1c0 (0x4)
	unsigned char unreflected_1c4[0xc]; // 0x1c4 (0xc) 
	struct FTransform DebugTransform; // 0x1d0 (0x60)
};

