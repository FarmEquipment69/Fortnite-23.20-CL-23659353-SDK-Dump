// Class /Script/SocialUMG.SocialInteractionButton
// Size: 0x14e0
class USocialInteractionButton : public UCommonButtonLegacy
{
	struct FLinearColor DefaultIndicatorColor; // 0x1430 (0x10)
	struct FLinearColor AlertingIndicatorColor; // 0x1440 (0x10)
	unsigned char unreflected_1450[0x80]; // 0x1450 (0x80) 
	class UCommonTextBlock* TextInteractionName; // 0x14d0 (0x8)
	class UBorder* BorderInteractionIndicator; // 0x14d8 (0x8)

	/* Functions */

	// Function /Script/SocialUMG.SocialInteractionButton.OnInteractionSet (Has no native function)
	void OnInteractionSet(); // (Event | Protected | BlueprintEvent)

	// Function /Script/SocialUMG.SocialInteractionButton.IsPlatformOnlyFriend (Underlying native function: IsPlatformOnlyFriend 0x73f4090)
	bool IsPlatformOnlyFriend(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SocialUMG.SocialInteractionButton.GetInteractionName (Underlying native function: GetInteractionName 0x73f3ee4)
	struct FName GetInteractionName(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)
};

