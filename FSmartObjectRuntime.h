// ScriptStruct /Script/SmartObjectsModule.SmartObjectRuntime
// Size: 0xf0
struct FSmartObjectRuntime
{
	class USmartObjectDefinition* Definition; // 0x10 (0x8)
	struct TWeakObjectPtr<class AActor> OwnerActor; // 0x18 (0x8)
	unsigned char unreflected_20[0xb0]; // 0x20 (0xb0) 
	struct FInstancedStruct SpatialEntryData; // 0xd0 (0x10)
	unsigned char padding_e0[0x10]; // 0xe0 (0x10)
};

