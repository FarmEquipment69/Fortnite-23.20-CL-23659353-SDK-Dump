// Class /Script/FortniteGame.FortGiftBoxItem
// Size: 0x150
class UFortGiftBoxItem : public UFortAccountItem
{
	struct FGiftBoxInfo GiftBoxInfo; // 0x108 (0x48)

	/* Functions */

	// Function /Script/FortniteGame.FortGiftBoxItem.TryGetParamText (Underlying native function: TryGetParamText 0x8a65fd0)
	bool TryGetParamText(struct FString& ParamName, struct FText& OutValue); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGiftBoxItem.TryGetParamString (Underlying native function: TryGetParamString 0x8a65d54)
	bool TryGetParamString(struct FString& ParamName, struct FString& OutValue); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGiftBoxItem.TryGetParamInt (Underlying native function: TryGetParamInt 0x8a65ba4)
	bool TryGetParamInt(struct FString& ParamName, int& OutValue); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGiftBoxItem.TryGetCurrencyData (Underlying native function: TryGetCurrencyData 0x8a65afc)
	bool TryGetCurrencyData(struct TArray<struct FCurrencyData>& OutValue); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGiftBoxItem.RetrieveItemDefintionFromParam (Underlying native function: RetrieveItemDefintionFromParam 0x8a65458)
	class UFortItemDefinition* RetrieveItemDefintionFromParam(struct FString& ParamName); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGiftBoxItem.RetrieveItemDefinitionFromTemplateID (Underlying native function: RetrieveItemDefinitionFromTemplateID 0x8a65304)
	class UFortItemDefinition* RetrieveItemDefinitionFromTemplateID(struct FString& TemplateParam); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGiftBoxItem.IsVisibleIn (Underlying native function: IsVisibleIn 0x8a65240)
	bool IsVisibleIn(enum ESubGame& SubGame); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGiftBoxItem.HasParam (Underlying native function: HasParam 0x8a64d50)
	bool HasParam(struct FString& ParamName); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGiftBoxItem.HasAccountID (Underlying native function: HasAccountID 0x8a64cac)
	bool HasAccountID(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGiftBoxItem.GetGiftBoxDefinition (Underlying native function: GetGiftBoxDefinition 0x8a62b58)
	class UFortGiftBoxItemDefinition* GetGiftBoxDefinition(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGiftBoxItem.FormatTextUsingParams (Underlying native function: FormatTextUsingParams 0x8a62160)
	struct FText FormatTextUsingParams(struct FText& FormatString); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGiftBoxItem.FilterUserMessageForProfanity (Underlying native function: FilterUserMessageForProfanity 0x8a62084)
	void FilterUserMessageForProfanity(int& ControllerId, struct FDelegate& OnTextFiltered); // (Final | 0x00000002 | Native | Public | BlueprintCallable)
};

