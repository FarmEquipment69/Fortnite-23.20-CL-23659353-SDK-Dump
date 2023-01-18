// ScriptStruct /Script/Engine.ParticleSysParam
// Size: 0xe0
struct FParticleSysParam
{
	struct FName Name; // 0x0 (0x4)
	struct TEnumAsByte<EParticleSysParamType> ParamType; // 0x4 (0x1)
	unsigned char unreflected_5[0x3]; // 0x5 (0x3) 
	float Scalar; // 0x8 (0x4)
	float ScalarLow; // 0xc (0x4)
	struct FVector Vector; // 0x10 (0x18)
	struct FVector VectorLow; // 0x28 (0x18)
	struct FColor Color; // 0x40 (0x4)
	unsigned char unreflected_44[0x4]; // 0x44 (0x4) 
	class AActor* Actor; // 0x48 (0x8)
	class UMaterialInterface* Material; // 0x50 (0x8)
	unsigned char padding_58[0x88]; // 0x58 (0x88)
};

