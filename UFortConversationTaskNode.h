// Class /Script/FortniteGame.FortConversationTaskNode
// Size: 0x1a0
class UFortConversationTaskNode : public UConversationTaskNode
{
	struct FGameplayTagContainer NodeTags; // 0x80 (0x20)
	struct FString NodeType; // 0xa0 (0x10)
	struct TWeakObjectPtr<class UObject> DefaultDisplayAsset; // 0xb0 (0x28)
	struct TWeakObjectPtr<class UObject> SoftTaskIcon; // 0xd8 (0x28)
	struct TWeakObjectPtr<class USoundBase> ChoiceSound; // 0x100 (0x28)
	struct TWeakObjectPtr<class USoundBase> HoverChoiceSound; // 0x128 (0x28)
	struct TWeakObjectPtr<class UClass> BriefWidgetClassOverride; // 0x150 (0x28)
	struct TWeakObjectPtr<class UClass> SelectionWidgetClass; // 0x178 (0x28)

	/* Functions */

	// Function /Script/FortniteGame.FortConversationTaskNode.OnPreviewedChoicePickedByUser (Underlying native function: OnPreviewedChoicePickedByUser 0x871b434)
	void OnPreviewedChoicePickedByUser(struct FConversationContext& Context, struct FClientConversationOptionEntry& ClientChoice); // (0x00000002 | BlueprintAuthorityOnly | Native | Event | Protected | HasOutParms | BlueprintEvent | Const)

	// Function /Script/FortniteGame.FortConversationTaskNode.GetTaskIcon (Underlying native function: GetTaskIcon 0x871a85c)
	struct TWeakObjectPtr<class UObject> GetTaskIcon(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortConversationTaskNode.GetHoverChoiceSound (Underlying native function: GetHoverChoiceSound 0x8719ff8)
	struct TWeakObjectPtr<class USoundBase> GetHoverChoiceSound(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortConversationTaskNode.GetDisplayAssetForChoice (Underlying native function: GetDisplayAssetForChoice 0x8719e58)
	struct TWeakObjectPtr<class UObject> GetDisplayAssetForChoice(struct FConversationContext& Context, struct FClientConversationOptionEntry& InOptionEntry); // (0x00000002 | Native | Event | Public | HasOutParms | BlueprintEvent | Const)

	// Function /Script/FortniteGame.FortConversationTaskNode.GetChoiceSound (Underlying native function: GetChoiceSound 0x8719d28)
	struct TWeakObjectPtr<class USoundBase> GetChoiceSound(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)
};

