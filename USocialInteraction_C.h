// WidgetBlueprintGeneratedClass /Game/UI/SocialPanel/SocialInteraction.SocialInteraction_C
// Size: 0x1538
class USocialInteraction_C : public USocialInteractionButton
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x14e0 (0x8)
	class UWidgetAnimation* OnHover; // 0x14e8 (0x8)
	class UImage* EncourageEpicFriend; // 0x14f0 (0x8)
	class UImage* InteractionIcon; // 0x14f8 (0x8)
	class UMenuAnchor* MenuAnchorActions; // 0x1500 (0x8)
	struct FLinearColor EncourageEpicFriendIdleColor; // 0x1508 (0x10)
	struct FLinearColor EncourageEpicFriendHoveredColor; // 0x1518 (0x10)
	struct FLinearColor AddFriendColor; // 0x1528 (0x10)

	/* Functions */

	// Function /Game/UI/SocialPanel/SocialInteraction.SocialInteraction_C.BP_OnUnhovered (Has no native function)
	void BPOnUnhovered(); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/SocialPanel/SocialInteraction.SocialInteraction_C.OnInteractionSet (Has no native function)
	void OnInteractionSet(); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/SocialPanel/SocialInteraction.SocialInteraction_C.BP_OnHovered (Has no native function)
	void BPOnHovered(); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/SocialPanel/SocialInteraction.SocialInteraction_C.Construct (Has no native function)
	void Construct(); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Game/UI/SocialPanel/SocialInteraction.SocialInteraction_C.ExecuteUbergraph_SocialInteraction (Has no native function)
	void ExecuteUbergraphSocialInteraction(int& EntryPoint, bool& TempboolVariable, float& CallFuncGetEndTimeReturnValue, enum ESlateVisibility& TempbyteVariable, class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue, enum ESlateVisibility& TempbyteVariable1, class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue1, class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue2, bool& CallFuncIsPlatformOnlyFriendReturnValue, struct FName& CallFuncGetInteractionNameReturnValue, bool& CallFuncEqualEqualNameNameReturnValue, enum ESlateVisibility& K2NodeSelectDefault, bool& CallFuncEqualEqualNameNameReturnValue1, bool& CallFuncBooleanORReturnValue); // (Final | 0x00008000)
};

