// ScriptStruct /Script/Engine.IrisNetDriverConfig
// Size: 0x20
struct FIrisNetDriverConfig
{
	struct FName NetDriverDefinition; // 0x0 (0x4)
	struct FName NetDriverName; // 0x4 (0x4)
	struct FString NetDriverWildcardName; // 0x8 (0x10)
	bool bEnableIris; // 0x18 (0x1)
	unsigned char padding_19[0x7]; // 0x19 (0x7)
};

