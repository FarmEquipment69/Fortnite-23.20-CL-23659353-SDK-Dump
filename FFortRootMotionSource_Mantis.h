// ScriptStruct /Script/MantisRuntime.FortRootMotionSource_Mantis
// Size: 0x150
struct FFortRootMotionSource_Mantis : FRootMotionSource
{
	float CurrentTechniqueTime; // 0xd8 (0x4)
	unsigned char unreflected_dc[0x4]; // 0xdc (0x4) 
	class UAnimMontage* TechniqueMontage; // 0xe0 (0x8)
	struct FFortMantisRootMotionWarpInfo WarpInfo; // 0xe8 (0x28)
	struct FVector LatestRepMovementLocation; // 0x110 (0x18)
	unsigned char padding_128[0x28]; // 0x128 (0x28)
};

