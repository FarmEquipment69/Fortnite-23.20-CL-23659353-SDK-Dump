// Class /Script/FortniteGame.FortPushCannonAnimInstance
// Size: 0x5c0
class UFortPushCannonAnimInstance : public UFortAnimInstance
{
	bool bHasDriver; // 0x530 (0x1)
	bool bHasPassenger; // 0x531 (0x1)
	bool bIsCoolDownEnded; // 0x532 (0x1)
	bool bIsCannonFired; // 0x533 (0x1)
	unsigned char unreflected_534[0x4]; // 0x534 (0x4) 
	class AFortAthenaSKPushCannon* PushCannon; // 0x538 (0x8)
	struct FRotator CannonLocalRotation; // 0x540 (0x18)
	struct FRotator WheelSpinRotatorFR; // 0x558 (0x18)
	struct FRotator WheelSpinRotatorFL; // 0x570 (0x18)
	struct FRotator WheelSpinRotatorBR; // 0x588 (0x18)
	struct FRotator WheelSpinRotatorBL; // 0x5a0 (0x18)
	float CooldownEndedOverheatThreshold; // 0x5b8 (0x4)
	float OnFiredOverheatValue; // 0x5bc (0x4)
};

