// ScriptStruct /Script/AIModule.EnvDirection
// Size: 0x20
struct FEnvDirection
{
	class UClass* LineFrom; // 0x0 (0x8)
	class UClass* LineTo; // 0x8 (0x8)
	class UClass* Rotation; // 0x10 (0x8)
	struct TEnumAsByte<EEnvDirection> DirMode; // 0x18 (0x1)
	unsigned char padding_19[0x7]; // 0x19 (0x7)
};

