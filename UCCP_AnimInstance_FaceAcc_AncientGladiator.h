// Class /Script/FortniteGame.CCP_AnimInstance_FaceAcc_AncientGladiator
// Size: 0x770
class UCCP_AnimInstance_FaceAcc_AncientGladiator : public UCustomCharacterPartAnimInstance
{
	class USkeletalMeshComponent* SkeletalMesh; // 0x6e8 (0x8)
	class AFortPlayerPawn* FortPlayerPawnOwner; // 0x6f0 (0x8)
	class USkeletalMeshComponent* BackpackMeshComponent; // 0x6f8 (0x8)
	struct FVector GravityVector; // 0x700 (0x18)
	float HeadDelta; // 0x718 (0x4)
	float HeadDeltaFwd; // 0x71c (0x4)
	bool bIsWearingBackpack; // 0x720 (0x1)
	bool bIsWearingCape; // 0x721 (0x1)
	bool bIsCharacterPack; // 0x722 (0x1)
	bool bIsCharacterPackAncientGladiator; // 0x723 (0x1)
	float IsCharacterPackAlpha; // 0x724 (0x4)
	float IsGenericBackpackAlpha; // 0x728 (0x4)
	unsigned char unreflected_72c[0x4]; // 0x72c (0x4) 
	struct FVector2D HeadDeltaInputRange; // 0x730 (0x10)
	struct FVector2D HeadDeltaOutputRange; // 0x740 (0x10)
	struct FVector2D HeadDeltaFwdInputRange; // 0x750 (0x10)
	struct FVector2D HeadDeltaFwdOutputRange; // 0x760 (0x10)
};

