// Class /Script/Engine.KismetInternationalizationLibrary
// Size: 0x28
class UKismetInternationalizationLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/Engine.KismetInternationalizationLibrary.SetCurrentLocale (Underlying native function: SetCurrentLocale 0x9e15134)
	static bool SetCurrentLocale(struct FString& Culture, bool& SaveToConfig); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.KismetInternationalizationLibrary.SetCurrentLanguageAndLocale (Underlying native function: SetCurrentLanguageAndLocale 0x9e14f9c)
	static bool SetCurrentLanguageAndLocale(struct FString& Culture, bool& SaveToConfig); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.KismetInternationalizationLibrary.SetCurrentLanguage (Underlying native function: SetCurrentLanguage 0x9e14da0)
	static bool SetCurrentLanguage(struct FString& Culture, bool& SaveToConfig); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.KismetInternationalizationLibrary.SetCurrentCulture (Underlying native function: SetCurrentCulture 0x9e14b98)
	static bool SetCurrentCulture(struct FString& Culture, bool& SaveToConfig); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.KismetInternationalizationLibrary.SetCurrentAssetGroupCulture (Underlying native function: SetCurrentAssetGroupCulture 0x9e149d0)
	static bool SetCurrentAssetGroupCulture(struct FName& AssetGroup, struct FString& Culture, bool& SaveToConfig); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.KismetInternationalizationLibrary.GetSuitableCulture (Underlying native function: GetSuitableCulture 0x9df5e0c)
	static struct FString GetSuitableCulture(struct TArray<struct FString>& AvailableCultures, struct FString& CultureToMatch, struct FString& FallbackCulture); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetInternationalizationLibrary.GetNativeCulture (Underlying native function: GetNativeCulture 0x9df3f60)
	static struct FString GetNativeCulture(enum ELocalizedTextSourceCategory& TextCategory); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetInternationalizationLibrary.GetLocalizedCultures (Underlying native function: GetLocalizedCultures 0x9df36e4)
	static struct TArray<struct FString> GetLocalizedCultures(bool& IncludeGame, bool& IncludeEngine, bool& IncludeEditor, bool& IncludeAdditional); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetInternationalizationLibrary.GetCurrentLocale (Underlying native function: GetCurrentLocale 0x9df2578)
	static struct FString GetCurrentLocale(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetInternationalizationLibrary.GetCurrentLanguage (Underlying native function: GetCurrentLanguage 0x2268b90)
	static struct FString GetCurrentLanguage(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetInternationalizationLibrary.GetCurrentCulture (Underlying native function: GetCurrentCulture 0x9df2504)
	static struct FString GetCurrentCulture(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetInternationalizationLibrary.GetCurrentAssetGroupCulture (Underlying native function: GetCurrentAssetGroupCulture 0x9df21a0)
	static struct FString GetCurrentAssetGroupCulture(struct FName& AssetGroup); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetInternationalizationLibrary.GetCultureDisplayName (Underlying native function: GetCultureDisplayName 0x9df1fe8)
	static struct FString GetCultureDisplayName(struct FString& Culture, bool& Localized); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetInternationalizationLibrary.ClearCurrentAssetGroupCulture (Underlying native function: ClearCurrentAssetGroupCulture 0x9de38f0)
	static void ClearCurrentAssetGroupCulture(struct FName& AssetGroup, bool& SaveToConfig); // (Final | Native | Static | Public | BlueprintCallable)
};

