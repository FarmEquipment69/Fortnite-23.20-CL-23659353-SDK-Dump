// ScriptStruct /Script/ControlRig.ControlRigDrawInstruction
// Size: 0xc0
struct FControlRigDrawInstruction
{
	struct FName Name; // 0x0 (0x4)
	struct TEnumAsByte<EControlRigDrawSettings> PrimitiveType; // 0x4 (0x1)
	unsigned char unreflected_5[0x3]; // 0x5 (0x3) 
	struct TArray<struct FVector> Positions; // 0x8 (0x10)
	struct FLinearColor Color; // 0x18 (0x10)
	float Thickness; // 0x28 (0x4)
	unsigned char unreflected_2c[0x4]; // 0x2c (0x4) 
	struct FTransform Transform; // 0x30 (0x60)
	unsigned char padding_90[0x30]; // 0x90 (0x30)
};

