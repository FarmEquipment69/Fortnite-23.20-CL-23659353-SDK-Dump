// ScriptStruct /Script/RockVehicleRuntime.BouncyChassisSetup
// Size: 0x58
struct FBouncyChassisSetup
{
	struct FSpringSettings* PitchSpring; // 0x0 (0x8)
	float PitchMaxAngleDegrees; // 0x8 (0x4)
	struct FSpringSettings* RollSpring; // 0xc (0x8)
	float RollMaxAngleDegrees; // 0x14 (0x4)
	struct FSpringSettings* ZSpring; // 0x18 (0x8)
	float ZMaxDrop; // 0x20 (0x4)
	float ZMaxRaise; // 0x24 (0x4)
	struct FVector MaxDisplacement; // 0x28 (0x18)
	struct FVector MassOffset; // 0x40 (0x18)
};

