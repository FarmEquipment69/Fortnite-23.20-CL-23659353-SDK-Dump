// Class /Script/MotherGameplayRuntime.FortBaseAnimInstance_CageSaddle
// Size: 0x5a0
class UFortBaseAnimInstance_CageSaddle : public UFortBaseAnimInstance
{
	class AFortSphericalVehicle* AsFortSphericalVehicle; // 0x430 (0x8)
	bool bIsOnGround; // 0x438 (0x1)
	unsigned char unreflected_439[0x3]; // 0x439 (0x3) 
	float RemappedPitch; // 0x43c (0x4)
	float CurrentRoll; // 0x440 (0x4)
	float LockedRoll; // 0x444 (0x4)
	bool bHeadShouldBend; // 0x448 (0x1)
	bool bFootShouldBend; // 0x449 (0x1)
	unsigned char unreflected_44a[0x6]; // 0x44a (0x6) 
	struct FVector BodyGroundOffset; // 0x450 (0x18)
	struct FVector2D MinClampPitchInRange; // 0x468 (0x10)
	struct FVector2D MinClampPitchOutRange; // 0x478 (0x10)
	struct FVector2D MaxClampPitchInRange; // 0x488 (0x10)
	struct FVector2D MaxClampPitchOutRange; // 0x498 (0x10)
	float HeadAlphaInterpSpeed; // 0x4a8 (0x4)
	unsigned char padding_4ac[0xf4]; // 0x4ac (0xf4)
};

