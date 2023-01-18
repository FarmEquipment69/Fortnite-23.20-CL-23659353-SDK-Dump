// Class /Script/FortniteGame.CCP_AnimInstance_Body_Werewolf
// Size: 0x7a0
class UCCP_AnimInstance_Body_Werewolf : public UCustomCharacterPartAnimInstance
{
	struct FVector SlopeRootTrans; // 0x6e8 (0x18)
	struct FRotator SlopeFootRot; // 0x700 (0x18)
	struct FRotator SimSpaceRotation; // 0x718 (0x18)
	struct FVector GravityOverride; // 0x730 (0x18)
	float InterpSpeed; // 0x748 (0x4)
	float ThighRotL; // 0x74c (0x4)
	float ThighRotUpL; // 0x750 (0x4)
	float ThighRotInrL; // 0x754 (0x4)
	float ThighRotOtrL; // 0x758 (0x4)
	float ThighRotR; // 0x75c (0x4)
	float ThighRotUpR; // 0x760 (0x4)
	float ThighRotInrR; // 0x764 (0x4)
	float ThighRotOtrR; // 0x768 (0x4)
	float BwdMovement; // 0x76c (0x4)
	float RightMovement; // 0x770 (0x4)
	float LeftMovement; // 0x774 (0x4)
	float JumpingAlpha; // 0x778 (0x4)
	float IsNotCrouchRunning; // 0x77c (0x4)
	float ParachuteAlpha; // 0x780 (0x4)
	float SkydiveAlpha; // 0x784 (0x4)
	bool bInComponentSpace; // 0x788 (0x1)
	bool bInComponentSpaceLastFrame; // 0x789 (0x1)
	bool bLockedOnSimSpace; // 0x78a (0x1)
	unsigned char unreflected_78b[0x1]; // 0x78b (0x1) 
	struct FName ThighLBoneName; // 0x78c (0x4)
	struct FName ThighRBoneName; // 0x790 (0x4)
	struct FName PelvisBoneName; // 0x794 (0x4)
	unsigned char padding_798[0x8]; // 0x798 (0x8)
};

