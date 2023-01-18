// ScriptStruct /Script/FortniteGame.FortAthenaVehicleInputStateUnreliable
// Size: 0x38
struct FFortAthenaVehicleInputStateUnreliable
{
	float ForwardAlpha; // 0x0 (0x4)
	float RightAlpha; // 0x4 (0x4)
	float PitchAlpha; // 0x8 (0x4)
	float LookUpDelta; // 0xc (0x4)
	float TurnDelta; // 0x10 (0x4)
	float SteerAlpha; // 0x14 (0x4)
	float GravityOffset; // 0x18 (0x4)
	unsigned char unreflected_1c[0x4]; // 0x1c (0x4) 
	struct FVector_NetQuantize100 MovementDir; // 0x20 (0x18)
};

