// ScriptStruct /Script/SpecialEventGameplayRuntime.DestroyActorsAndComponentsMutator_ComponentDefinition
// Size: 0x18
struct FDestroyActorsAndComponentsMutator_ComponentDefinition
{
	struct FString ComponentName; // 0x0 (0x10)
	enum EDestroyActorsAndComponentsMutator_ComponentNameComparisonType NameComparisonType; // 0x10 (0x1)
	bool bDestroyOnServer; // 0x11 (0x1)
	bool bDestroyOnClient; // 0x12 (0x1)
	bool bPromoteChildrenOfDestroyedComponents; // 0x13 (0x1)
	unsigned char padding_14[0x4]; // 0x14 (0x4)
};

