// Class /Script/FortniteGame.ApplyLookMotionUpdateFunction
// Size: 0x170
class UApplyLookMotionUpdateFunction : public UFirstPersonUpdateFunction
{
	struct FVector TranslationInheritRatios; // 0x28 (0x18)
	struct FRotator RotationInheritRatios; // 0x40 (0x18)
	float BlendRate; // 0x58 (0x4)
	float MaxYawRate; // 0x5c (0x4)
	float MaxPitchRate; // 0x60 (0x4)
	unsigned char unreflected_64[0x9c]; // 0x64 (0x9c) 
	float YawRate; // 0x100 (0x4)
	float PitchRate; // 0x104 (0x4)
	unsigned char unreflected_108[0x8]; // 0x108 (0x8) 
	struct FTransform SmoothedTransform; // 0x110 (0x60)
};

