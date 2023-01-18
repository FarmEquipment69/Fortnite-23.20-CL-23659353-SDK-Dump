// ScriptStruct /Script/Engine.VectorMaterialInput
// Size: 0x38
struct FVectorMaterialInput : FMaterialInput
{
	unsigned char UseConstant; // 0x28 (0x1)
	unsigned char unreflected_29[0x3]; // 0x29 (0x3) 
	struct FVector3f Constant; // 0x2c (0xc)
};

