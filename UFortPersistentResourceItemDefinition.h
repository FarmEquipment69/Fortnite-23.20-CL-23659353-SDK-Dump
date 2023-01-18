// Class /Script/FortniteGame.FortPersistentResourceItemDefinition
// Size: 0x4c0
class UFortPersistentResourceItemDefinition : public UFortAccountItemDefinition
{
	struct TWeakObjectPtr<class UClass> ItemPreviewActorClass; // 0x420 (0x28)
	bool bIsEventItem; // 0x448 (0x1)
	unsigned char unreflected_449[0x7]; // 0x449 (0x7) 
	struct FString StatName; // 0x450 (0x10)
	struct FString StatTotalName; // 0x460 (0x10)
	struct FText ExclusiveDesciption; // 0x470 (0x18)
	struct TWeakObjectPtr<class UTexture2D> ExclusiveIcon; // 0x488 (0x28)
	struct TArray<struct TWeakObjectPtr<class UFortQuestItemDefinition>> QuestsRequiredToDisplayToast; // 0x4b0 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortPersistentResourceItemDefinition.IsEventItem (Underlying native function: IsEventItem 0x76c2960)
	bool IsEventItem(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

