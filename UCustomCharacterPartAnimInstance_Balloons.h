// Class /Script/FortniteGame.CustomCharacterPartAnimInstance_Balloons
// Size: 0x780
class UCustomCharacterPartAnimInstance_Balloons : public UCustomCharacterPartAnimInstance
{
	class AFortPlayerPawn* PlayerPawn; // 0x6e8 (0x8)
	class ACharacter* Character; // 0x6f0 (0x8)
	class ABuildingGameplayActorBalloon* BGABalloon; // 0x6f8 (0x8)
	float PawnSpeed; // 0x700 (0x4)
	bool bIsMovingBackward; // 0x704 (0x1)
	unsigned char unreflected_705[0x3]; // 0x705 (0x3) 
	float TrailVehicleAlpha; // 0x708 (0x4)
	float BalloonLocationAlpha; // 0x70c (0x4)
	struct FRotator BalloonSideRot; // 0x710 (0x18)
	float IsFloatingAlpha; // 0x728 (0x4)
	float SpringAlpha; // 0x72c (0x4)
	float PawnZVelCheck; // 0x730 (0x4)
	float AimAlpha; // 0x734 (0x4)
	struct TArray<float> ForwardLocationAlphas; // 0x738 (0x10)
	struct TArray<float> BackwardLocationAlphas; // 0x748 (0x10)
	struct TArray<struct FRotator> ForwardRotators; // 0x758 (0x10)
	struct TArray<struct FRotator> BackwardRotators; // 0x768 (0x10)
	float SpringMultiplier; // 0x778 (0x4)
	unsigned char padding_77c[0x4]; // 0x77c (0x4)
};

