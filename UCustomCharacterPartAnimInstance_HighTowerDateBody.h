// Class /Script/FortniteGame.CustomCharacterPartAnimInstance_HighTowerDateBody
// Size: 0x770
class UCustomCharacterPartAnimInstance_HighTowerDateBody : public UCustomCharacterPartAnimInstance
{
	float SkydiveFloat; // 0x6ec (0x4)
	float CrouchFloat; // 0x6f0 (0x4)
	bool bThrone; // 0x6f4 (0x1)
	unsigned char unreflected_6f5[0x3]; // 0x6f5 (0x3) 
	float ThroneFloat; // 0x6f8 (0x4)
	float ThroneFloatINV; // 0x6fc (0x4)
	float DateGliderDeployFloat; // 0x700 (0x4)
	float FrontEndPosingFloat; // 0x704 (0x4)
	float JubileeFloat; // 0x708 (0x4)
	unsigned char unreflected_70c[0x4]; // 0x70c (0x4) 
	struct TArray<struct TWeakObjectPtr<class UAnimMontage>> ThroneAnimations; // 0x710 (0x10)
	struct TWeakObjectPtr<class UAnimMontage> JubileeAnimation; // 0x720 (0x28)
	struct TWeakObjectPtr<class UAnimMontage> FrontEndPoseAnimation; // 0x748 (0x28)
};

