// ScriptStruct /Script/OptimusCore.OptimusDataDomain
// Size: 0x40
struct FOptimusDataDomain
{
	enum EOptimusDataDomainType Type; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	struct TArray<struct FName> DimensionNames; // 0x8 (0x10)
	int Multiplier; // 0x18 (0x4)
	unsigned char unreflected_1c[0x4]; // 0x1c (0x4) 
	struct FString Expression; // 0x20 (0x10)
	struct TArray<struct FName> LevelNames; // 0x30 (0x10)
};

