// Class /Script/FortniteGame.FortPlayerAnimInstance_OstrichGunner
// Size: 0x1c10
class UFortPlayerAnimInstance_OstrichGunner : public UFortPlayerAnimInstance_OstrichOccupant
{
	float BodyRecoilAlphaValue; // 0x1b08 (0x4)
	float BodyRecoilAlphaWhenShotgunIsFired; // 0x1b0c (0x4)
	float BodyRecoilAlphaNoShotgunFired; // 0x1b10 (0x4)
	unsigned char bIsMechShotgunFired; // 0x1b14 (0x1)
	unsigned char bIsMechBeginFired; // 0x1b14 (0x1)
	unsigned char bIsRocketFiring; // 0x1b14 (0x1)
	unsigned char unreflected_1b15[0x3]; // 0x1b15 (0x3) 
	struct FFortAnimInput_VelocityImpact GunnerVelocityImpactInput; // 0x1b18 (0xf0)
	unsigned char padding_1c08[0x8]; // 0x1c08 (0x8)
};

