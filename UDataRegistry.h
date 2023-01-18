// Class /Script/DataRegistry.DataRegistry
// Size: 0xb8
class UDataRegistry : public UObject
{
	struct FName RegistryType; // 0x28 (0x4)
	struct FDataRegistryIdFormat IdFormat; // 0x2c (0x4)
	class UScriptStruct* ItemStruct; // 0x30 (0x8)
	struct TArray<class UDataRegistrySource*> DataSources; // 0x38 (0x10)
	struct TArray<class UDataRegistrySource*> RuntimeSources; // 0x48 (0x10)
	float TimerUpdateFrequency; // 0x58 (0x4)
	struct FDataRegistryCachePolicy DefaultCachePolicy; // 0x5c (0x14)
	unsigned char padding_70[0x48]; // 0x70 (0x48)
};

