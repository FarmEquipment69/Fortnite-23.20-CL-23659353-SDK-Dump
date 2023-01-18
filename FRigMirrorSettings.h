// ScriptStruct /Script/ControlRig.RigMirrorSettings
// Size: 0x28
struct FRigMirrorSettings
{
	struct TEnumAsByte<EAxis> MirrorAxis; // 0x0 (0x1)
	struct TEnumAsByte<EAxis> AxisToFlip; // 0x1 (0x1)
	unsigned char unreflected_2[0x6]; // 0x2 (0x6) 
	struct FString SearchString; // 0x8 (0x10)
	struct FString ReplaceString; // 0x18 (0x10)
};

