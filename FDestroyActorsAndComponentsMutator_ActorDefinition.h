// ScriptStruct /Script/SpecialEventGameplayRuntime.DestroyActorsAndComponentsMutator_ActorDefinition
// Size: 0x78
struct FDestroyActorsAndComponentsMutator_ActorDefinition
{
	struct FGameplayTagContainer Tags; // 0x0 (0x20)
	struct TWeakObjectPtr<class UClass> SoftActorClass; // 0x20 (0x28)
	bool bStartEnabled; // 0x48 (0x1)
	bool bDestroyActorOnServer; // 0x49 (0x1)
	bool bDestroyActorOnClient; // 0x4a (0x1)
	bool bNetForceOnActorDestroy; // 0x4b (0x1)
	bool bShouldModifyLevelOnActorDestroy; // 0x4c (0x1)
	unsigned char unreflected_4d[0x3]; // 0x4d (0x3) 
	struct TArray<struct FDestroyActorsAndComponentsMutator_ComponentDefinition> ComponentDefinitions; // 0x50 (0x10)
	bool bCurrentlyEnabled; // 0x60 (0x1)
	bool bPermanentlyDisabled; // 0x61 (0x1)
	unsigned char unreflected_62[0x6]; // 0x62 (0x6) 
	struct TArray<class AActor*> ActorsToProcess; // 0x68 (0x10)
};

