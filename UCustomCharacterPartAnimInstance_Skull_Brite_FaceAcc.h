// Class /Script/FortniteGame.CustomCharacterPartAnimInstance_Skull_Brite_FaceAcc
// Size: 0x770
class UCustomCharacterPartAnimInstance_Skull_Brite_FaceAcc : public UCustomCharacterPartAnimInstance
{
	float JumpStrapAlpha; // 0x6e8 (0x4)
	float PawnSpeed; // 0x6ec (0x4)
	float StrapRotAlpha; // 0x6f0 (0x4)
	float StrapsStandingAlpha; // 0x6f4 (0x4)
	float StrapsStandRot; // 0x6f8 (0x4)
	bool bIsStandingStill; // 0x6fc (0x1)
	bool bIsMovingBackward; // 0x6fd (0x1)
	unsigned char unreflected_6fe[0x2]; // 0x6fe (0x2) 
	struct FVector JumpVector; // 0x700 (0x18)
	struct FVector StrapsVector; // 0x718 (0x18)
	struct FVector HairVector; // 0x730 (0x18)
	struct FVector StrapsForceVector; // 0x748 (0x18)
	class AFortPlayerPawn* PlayerPawn; // 0x760 (0x8)
	unsigned char padding_768[0x8]; // 0x768 (0x8)
};

