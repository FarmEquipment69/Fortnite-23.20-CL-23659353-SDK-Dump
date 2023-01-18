// ScriptStruct /Script/SpecialEventGameplayRuntime.SpecialEventMapData
// Size: 0x20
struct FSpecialEventMapData
{
	struct FGameplayTag MapTag; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	struct TArray<struct FName> MapNames; // 0x8 (0x10)
	bool bReplicatedHasBeenUnloaded; // 0x18 (0x1)
	bool bHasBeenUnloaded; // 0x19 (0x1)
	unsigned char padding_1a[0x6]; // 0x1a (0x6)
};

