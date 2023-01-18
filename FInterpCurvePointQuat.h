// ScriptStruct /Script/CoreUObject.InterpCurvePointQuat
// Size: 0x80
struct FInterpCurvePointQuat
{
	float InVal; // 0x0 (0x4)
	unsigned char unreflected_4[0xc]; // 0x4 (0xc) 
	struct FQuat OutVal; // 0x10 (0x20)
	struct FQuat ArriveTangent; // 0x30 (0x20)
	struct FQuat LeaveTangent; // 0x50 (0x20)
	struct TEnumAsByte<EInterpCurveMode> InterpMode; // 0x70 (0x1)
	unsigned char padding_71[0xf]; // 0x71 (0xf)
};

