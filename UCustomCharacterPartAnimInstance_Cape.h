// Class /Script/FortniteGame.CustomCharacterPartAnimInstance_Cape
// Size: 0x790
class UCustomCharacterPartAnimInstance_Cape : public UCustomCharacterPartAnimInstance
{
	class USkeletalMeshComponent* MeshToCopy; // 0x6e8 (0x8)
	class UClothingSimulationInteractor* ClothingSimInteractor; // 0x6f0 (0x8)
	struct FVector FakeWindVelocityDBNO; // 0x6f8 (0x18)
	float BlendOutForksAlpha; // 0x710 (0x4)
	bool bBlendInBackwardPose; // 0x714 (0x1)
	unsigned char unreflected_715[0x3]; // 0x715 (0x3) 
	struct FVector CapeFakeVelocity; // 0x718 (0x18)
	struct FVector FakeWindVelocity; // 0x730 (0x18)
	struct FVector AimOffset; // 0x748 (0x18)
	float AimOffsetMultiplier; // 0x760 (0x4)
	unsigned char unreflected_764[0x4]; // 0x764 (0x4) 
	struct FVector FinalCapeWindVelocity; // 0x768 (0x18)
	float FinalCapeBlendOutAlpha; // 0x780 (0x4)
	float SwingRotateAlpha; // 0x784 (0x4)
	float Cape05TrailControllerAlpha; // 0x788 (0x4)
	unsigned char padding_78c[0x4]; // 0x78c (0x4)
};

