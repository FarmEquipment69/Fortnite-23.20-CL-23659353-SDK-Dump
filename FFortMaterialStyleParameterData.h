// ScriptStruct /Script/FortniteGame.FortMaterialStyleParameterData
// Size: 0x28
struct FFortMaterialStyleParameterData
{
	enum EMaterialStyleParameterType DataType; // 0x0 (0x1)
	unsigned char unreflected_1[0x3]; // 0x1 (0x3) 
	struct FName Name; // 0x4 (0x4)
	float Scalar; // 0x8 (0x4)
	struct FLinearColor Vector; // 0xc (0x10)
	unsigned char unreflected_1c[0x4]; // 0x1c (0x4) 
	class UTexture* Texture; // 0x20 (0x8)
};

