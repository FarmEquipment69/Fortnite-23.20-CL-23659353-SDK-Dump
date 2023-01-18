// Class /Script/FortniteGame.FortPlayerAnimInstance_MountedTurret
// Size: 0x1b40
class UFortPlayerAnimInstance_MountedTurret : public UFortPlayerAnimInstance
{
	struct FFortAnimInput_VelocityImpact VelocityImpact; // 0x1a18 (0xf0)
	struct FVector ImpactDisplacement; // 0x1b08 (0x18)
	class AFortMountedTurret* MountedTurret; // 0x1b20 (0x8)
	float PedalScaler; // 0x1b28 (0x4)
	float TurnRate; // 0x1b2c (0x4)
	float PitchRate; // 0x1b30 (0x4)
	float AimingPitchLastTick; // 0x1b34 (0x4)
	unsigned char padding_1b38[0x8]; // 0x1b38 (0x8)
};

