// Class /Script/FortniteGame.FortTooltip
// Size: 0x50
class UFortTooltip : public UObject
{
	struct FText Description; // 0x28 (0x18)
	unsigned char padding_40[0x10]; // 0x40 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortTooltip.SetLocalizationText (Underlying native function: SetLocalizationText 0x8f9aaf0)
	void SetLocalizationText(struct FString& Name, struct FText& Value); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortTooltip.SetLocalizationInt (Underlying native function: SetLocalizationInt 0x8f9a958)
	void SetLocalizationInt(struct FString& Name, int& Value); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortTooltip.SetLocalizationFloat (Underlying native function: SetLocalizationFloat 0x8f9a7b8)
	void SetLocalizationFloat(struct FString& Name, float& Value); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortTooltip.GetValueData (Underlying native function: GetValueData 0x8f99ecc)
	bool GetValueData(class UObject*& ObjectToDescribe, class UFortTooltipContext*& Context, struct FGameplayTag& Token, struct FFortTooltipValueData& OutData); // (0x00000002 | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortTooltip.GetTokenizedDescriptionText (Underlying native function: GetTokenizedDescriptionText 0x8f99cc4)
	bool GetTokenizedDescriptionText(class UObject*& ObjectToDescribe, struct FGameplayTag& tag, class UFortTooltipContext*& Context, struct TArray<struct FText>& OutDescription); // (0x00000002 | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortTooltip.GetTextForToken (Underlying native function: GetTextForToken 0x8f99ad4)
	bool GetTextForToken(class UObject*& ObjectToDescribe, struct FGameplayTag& tag, class UFortTooltipContext*& Context, struct FGameplayTag& Token, struct FText& OutText); // (0x00000002 | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortTooltip.GetNumericValue (Underlying native function: GetNumericValue 0x8f99900)
	bool GetNumericValue(class UObject*& ObjectToDescribe, struct FGameplayTag& tag, class UFortTooltipContext*& Context, struct FGameplayTag& Token, float& OutVal); // (0x00000002 | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortTooltip.BP_GetValueData (Underlying native function: BP_GetValueData 0x8f993e4)
	bool BPGetValueData(class UObject*& ObjectToDescribe, class UFortTooltipContext*& Context, struct FGameplayTag& Token, struct FFortTooltipValueData& OutData); // (0x00000002 | Native | Event | Protected | HasOutParms | BlueprintEvent | Const)

	// Function /Script/FortniteGame.FortTooltip.BP_GetTokenizedDescriptionText (Underlying native function: BP_GetTokenizedDescriptionText 0x8f99268)
	bool BPGetTokenizedDescriptionText(class UObject*& ObjectToDescribe, struct FGameplayTag& tag, class UFortTooltipContext*& Context, struct TArray<struct FText>& OutDescription); // (0x00000002 | Native | Event | Protected | HasOutParms | BlueprintEvent | Const)

	// Function /Script/FortniteGame.FortTooltip.BP_GetTextForToken (Underlying native function: BP_GetTextForToken 0x8f99078)
	bool BPGetTextForToken(class UObject*& ObjectToDescribe, struct FGameplayTag& tag, class UFortTooltipContext*& Context, struct FGameplayTag& Token, struct FText& OutText); // (0x00000002 | Native | Event | Protected | HasOutParms | BlueprintEvent | Const)

	// Function /Script/FortniteGame.FortTooltip.BP_GetNumericValue (Underlying native function: BP_GetNumericValue 0x8f98ebc)
	bool BPGetNumericValue(class UObject*& ObjectToDescribe, struct FGameplayTag& tag, class UFortTooltipContext*& Context, struct FGameplayTag& Token, float& OutVal); // (0x00000002 | Native | Event | Protected | HasOutParms | BlueprintEvent | Const)
};

