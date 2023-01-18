// ScriptStruct /Script/VerseMovement.NetPhysicsMoveInputTriggerParams
// Size: 0x28
struct FNetPhysicsMoveInputTriggerParams
{
	bool bIsAxis; // 0x0 (0x1)
	unsigned char unreflected_1[0x3]; // 0x1 (0x3) 
	struct FName Name; // 0x4 (0x4)
	class UCurveFloat* AxisToMagnitudeCurve; // 0x8 (0x8)
	bool AccumulateAxisInput; // 0x10 (0x1)
	unsigned char unreflected_11[0x7]; // 0x11 (0x7) 
	struct FVector2D ClampAxis; // 0x18 (0x10)
};

