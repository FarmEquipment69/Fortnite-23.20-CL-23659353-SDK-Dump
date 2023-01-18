// ScriptStruct /Script/Engine.ColorMaterialInput
// Size: 0x30
struct FColorMaterialInput : FMaterialInput
{
	unsigned char UseConstant; // 0x28 (0x1)
	unsigned char unreflected_29[0x3]; // 0x29 (0x3) 
	struct FColor Constant; // 0x2c (0x4)
};

