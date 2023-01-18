// Class /Script/FortniteGame.CustomCharacterPartAnimInstance_CageSaddleBackGadget
// Size: 0x7a0
class UCustomCharacterPartAnimInstance_CageSaddleBackGadget : public UCustomCharacterPartAnimInstance
{
	class USkeletalMeshComponent* SkeletalMeshComponent; // 0x6e8 (0x8)
	class AFortPlayerPawn* PlayerPawn; // 0x6f0 (0x8)
	struct FRotator KnobRotation; // 0x6f8 (0x18)
	float RollAlpha; // 0x710 (0x4)
	bool bHasTriggeredGCBurstLocal; // 0x714 (0x1)
	unsigned char unreflected_715[0x3]; // 0x715 (0x3) 
	struct FRotator HeadRotation; // 0x718 (0x18)
	float InflationBlendWeight; // 0x730 (0x4)
	unsigned char unreflected_734[0x4]; // 0x734 (0x4) 
	struct FGameplayTagContainer BlockDeploymentTags; // 0x738 (0x20)
	struct FGameplayTag TickTag; // 0x758 (0x4)
	float MinDurationRemainingForGCBurstLocal; // 0x75c (0x4)
	struct FRotator HeadRotationSprinting; // 0x760 (0x18)
	struct FRotator HeadRotationOtherwise; // 0x778 (0x18)
	class UCurveFloat* InflationCurveLong; // 0x790 (0x8)
	unsigned char padding_798[0x8]; // 0x798 (0x8)
};

