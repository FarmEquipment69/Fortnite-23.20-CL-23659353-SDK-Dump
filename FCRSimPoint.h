// ScriptStruct /Script/ControlRig.CRSimPoint
// Size: 0x40
struct FCRSimPoint
{
	float Mass; // 0x0 (0x4)
	float Size; // 0x4 (0x4)
	float LinearDamping; // 0x8 (0x4)
	float InheritMotion; // 0xc (0x4)
	struct FVector Position; // 0x10 (0x18)
	struct FVector LinearVelocity; // 0x28 (0x18)
};

