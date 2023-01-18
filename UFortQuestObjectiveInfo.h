// Class /Script/FortniteGame.FortQuestObjectiveInfo
// Size: 0xf0
class UFortQuestObjectiveInfo : public UObject
{
	unsigned char unreflected_28[0x18]; // 0x28 (0x18) 
	struct FName BackendName; // 0x40 (0x4)
	enum EFortQuestObjectiveStatEvent StatEvent; // 0x44 (0x1)
	enum EFortQuestObjectiveItemEvent ItemEvent; // 0x45 (0x1)
	unsigned char unreflected_46[0x2]; // 0x46 (0x2) 
	struct TWeakObjectPtr<class UFortItemDefinition> ItemReference; // 0x48 (0x28)
	struct FText Description; // 0x70 (0x18)
	struct FText HudShortDescription; // 0x88 (0x18)
	class UTexture2D* HudIcon; // 0xa0 (0x8)
	struct FFortQuestObjectiveDisplayInfo* ObjectiveDisplayInfo; // 0xa8 (0x8)
	int AchievedCount; // 0xb0 (0x4)
	int RequiredCount; // 0xb4 (0x4)
	int LastNotifiedCount; // 0xb8 (0x4)
	int LastKnownMCPCount; // 0xbc (0x4)
	struct TWeakObjectPtr<class AFortPlayerState> QuestOwner; // 0xc0 (0x8)
	struct TWeakObjectPtr<class AFortPlayerState> AssistPlayerState; // 0xc8 (0x8)
	bool bIsHelper; // 0xd0 (0x1)
	bool bVisible; // 0xd1 (0x1)
	bool bActive; // 0xd2 (0x1)
	unsigned char unreflected_d3[0x5]; // 0xd3 (0x5) 
	struct TArray<struct FFortObjectiveAvailableConversationTriggerInfo> AvailableConversationTriggers; // 0xd8 (0x10)
	unsigned char padding_e8[0x8]; // 0xe8 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortQuestObjectiveInfo.OnActorEndPlay (Underlying native function: OnActorEndPlay 0x8e1cc34)
	void OnActorEndPlay(class AActor*& Actor, struct TEnumAsByte<EEndPlayReason>& Reason); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortQuestObjectiveInfo.IsVisibleToUser (Underlying native function: IsVisibleToUser 0x8700478)
	bool IsVisibleToUser(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortQuestObjectiveInfo.IsInProgress (Underlying native function: IsInProgress 0x8e1c480)
	bool IsInProgress(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortQuestObjectiveInfo.IsActive (Underlying native function: IsActive 0x8e1c3c0)
	bool IsActive(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortQuestObjectiveInfo.HasCompleted (Underlying native function: HasCompleted 0x8e1c128)
	bool HasCompleted(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortQuestObjectiveInfo.GetOwningQuest (Underlying native function: GetOwningQuest 0x8e1b578)
	class UFortQuestItem* GetOwningQuest(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortQuestObjectiveInfo.DisplayDynamicQuestUpdate (Underlying native function: DisplayDynamicQuestUpdate 0x8e1ad00)
	void DisplayDynamicQuestUpdate(); // (Final | Native | Private)
};

