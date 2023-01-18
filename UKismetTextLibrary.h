// Class /Script/Engine.KismetTextLibrary
// Size: 0x28
class UKismetTextLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/Engine.KismetTextLibrary.TextTrimTrailing (Underlying native function: TextTrimTrailing 0x9c0bf7c)
	static struct FText TextTrimTrailing(struct FText& InText); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetTextLibrary.TextTrimPrecedingAndTrailing (Underlying native function: TextTrimPrecedingAndTrailing 0x9c0be78)
	static struct FText TextTrimPrecedingAndTrailing(struct FText& InText); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetTextLibrary.TextTrimPreceding (Underlying native function: TextTrimPreceding 0x9c0bd74)
	static struct FText TextTrimPreceding(struct FText& InText); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetTextLibrary.TextToUpper (Underlying native function: TextToUpper 0x19de0b4)
	static struct FText TextToUpper(struct FText& InText); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetTextLibrary.TextToLower (Underlying native function: TextToLower 0x9c0bc64)
	static struct FText TextToLower(struct FText& InText); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetTextLibrary.TextIsTransient (Underlying native function: TextIsTransient 0x9c0bba8)
	static bool TextIsTransient(struct FText& InText); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetTextLibrary.TextIsFromStringTable (Underlying native function: TextIsFromStringTable 0x9c0baec)
	static bool TextIsFromStringTable(struct FText& Text); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetTextLibrary.TextIsEmpty (Underlying native function: TextIsEmpty 0x1b23f10)
	static bool TextIsEmpty(struct FText& InText); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetTextLibrary.TextIsCultureInvariant (Underlying native function: TextIsCultureInvariant 0x9c0ba30)
	static bool TextIsCultureInvariant(struct FText& InText); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetTextLibrary.TextFromStringTable (Underlying native function: TextFromStringTable 0x9c0b850)
	static struct FText TextFromStringTable(struct FName& TableId, struct FString& Key); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetTextLibrary.StringTableIdAndKeyFromText (Underlying native function: StringTableIdAndKeyFromText 0x9c0b5d8)
	static bool StringTableIdAndKeyFromText(struct FText& Text, struct FName& OutTableId, struct FString& OutKey); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetTextLibrary.PolyglotDataToText (Underlying native function: PolyglotDataToText 0x9c0b210)
	static struct FText PolyglotDataToText(struct FPolyglotTextData& PolyglotData); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetTextLibrary.NotEqual_TextText (Underlying native function: NotEqual_TextText 0x9c0b0b8)
	static bool NotEqualTextText(struct FText& A, struct FText& B); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetTextLibrary.NotEqual_IgnoreCase_TextText (Underlying native function: NotEqual_IgnoreCase_TextText 0x9c0af5c)
	static bool NotEqualIgnoreCaseTextText(struct FText& A, struct FText& B); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetTextLibrary.IsPolyglotDataValid (Underlying native function: IsPolyglotDataValid 0x9c0ad50)
	static void IsPolyglotDataValid(struct FPolyglotTextData& PolyglotData, bool& IsValid, struct FText& ErrorMessage); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetTextLibrary.GetEmptyText (Underlying native function: GetEmptyText 0x25a8250)
	static struct FText GetEmptyText(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetTextLibrary.Format (Underlying native function: Format 0x12bf610)
	static struct FText Format(struct FText& InPattern, struct TArray<struct FFormatArgumentData>& InArgs); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetTextLibrary.FindTextInLocalizationTable (Underlying native function: FindTextInLocalizationTable 0x9c0a79c)
	static bool FindTextInLocalizationTable(struct FString& Namespace, struct FString& Key, struct FText& OutText); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetTextLibrary.EqualEqual_TextText (Underlying native function: EqualEqual_TextText 0x2289990)
	static bool EqualEqualTextText(struct FText& A, struct FText& B); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetTextLibrary.EqualEqual_IgnoreCase_TextText (Underlying native function: EqualEqual_IgnoreCase_TextText 0x9c0a640)
	static bool EqualEqualIgnoreCaseTextText(struct FText& A, struct FText& B); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetTextLibrary.Conv_VectorToText (Underlying native function: Conv_VectorToText 0x9c0a55c)
	static struct FText ConvVectorToText(struct FVector& InVec); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetTextLibrary.Conv_Vector2dToText (Underlying native function: Conv_Vector2dToText 0x9c0a48c)
	static struct FText ConvVector2dToText(struct FVector2D& InVec); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetTextLibrary.Conv_TransformToText (Underlying native function: Conv_TransformToText 0x9c0a33c)
	static struct FText ConvTransformToText(struct FTransform& InTrans); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetTextLibrary.Conv_TextToString (Underlying native function: Conv_TextToString 0x20c5da4)
	static struct FString ConvTextToString(struct FText& InText); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetTextLibrary.Conv_StringToText (Underlying native function: Conv_StringToText 0xecb894)
	static struct FText ConvStringToText(struct FString& InString); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetTextLibrary.Conv_RotatorToText (Underlying native function: Conv_RotatorToText 0x9c0a258)
	static struct FText ConvRotatorToText(struct FRotator& InRot); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetTextLibrary.Conv_ObjectToText (Underlying native function: Conv_ObjectToText 0x9c0a000)
	static struct FText ConvObjectToText(class UObject*& InObj); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetTextLibrary.Conv_NameToText (Underlying native function: Conv_NameToText 0x9c09f1c)
	static struct FText ConvNameToText(struct FName& InName); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetTextLibrary.Conv_IntToText (Underlying native function: Conv_IntToText 0x20672b0)
	static struct FText ConvIntToText(int& Value, bool& bAlwaysSign, bool& bUseGrouping, int& MinimumIntegralDigits, int& MaximumIntegralDigits); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetTextLibrary.Conv_Int64ToText (Underlying native function: Conv_Int64ToText 0x9c09ce0)
	static struct FText ConvInt64ToText(int64_t& Value, bool& bAlwaysSign, bool& bUseGrouping, int& MinimumIntegralDigits, int& MaximumIntegralDigits); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetTextLibrary.Conv_DoubleToText (Underlying native function: Conv_DoubleToText 0xef4170)
	static struct FText ConvDoubleToText(double& Value, struct TEnumAsByte<ERoundingMode>& RoundingMode, bool& bAlwaysSign, bool& bUseGrouping, int& MinimumIntegralDigits, int& MaximumIntegralDigits, int& MinimumFractionalDigits, int& MaximumFractionalDigits); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetTextLibrary.Conv_ColorToText (Underlying native function: Conv_ColorToText 0x9c09c10)
	static struct FText ConvColorToText(struct FLinearColor& InColor); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetTextLibrary.Conv_ByteToText (Underlying native function: Conv_ByteToText 0x192a580)
	static struct FText ConvByteToText(unsigned char& Value); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetTextLibrary.Conv_BoolToText (Underlying native function: Conv_BoolToText 0x9c09b40)
	static struct FText ConvBoolToText(bool& InBool); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetTextLibrary.AsTimeZoneTime_DateTime (Underlying native function: AsTimeZoneTime_DateTime 0x9c09320)
	static struct FText AsTimeZoneTimeDateTime(struct FDateTime*& InDateTime, struct FString& InTimeZone); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetTextLibrary.AsTimeZoneDateTime_DateTime (Underlying native function: AsTimeZoneDateTime_DateTime 0x9c08ee0)
	static struct FText AsTimeZoneDateTimeDateTime(struct FDateTime*& InDateTime, struct FString& InTimeZone); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetTextLibrary.AsTimeZoneDate_DateTime (Underlying native function: AsTimeZoneDate_DateTime 0x9c09104)
	static struct FText AsTimeZoneDateDateTime(struct FDateTime*& InDateTime, struct FString& InTimeZone); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetTextLibrary.AsTimespan_Timespan (Underlying native function: AsTimespan_Timespan 0x9c09618)
	static struct FText AsTimespanTimespan(struct FTimespan*& InTimespan); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetTextLibrary.AsTime_DateTime (Underlying native function: AsTime_DateTime 0x9c0953c)
	static struct FText AsTimeDateTime(struct FDateTime*& In); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetTextLibrary.AsPercent_Float (Underlying native function: AsPercent_Float 0x9c08c20)
	static struct FText AsPercentFloat(float& Value, struct TEnumAsByte<ERoundingMode>& RoundingMode, bool& bAlwaysSign, bool& bUseGrouping, int& MinimumIntegralDigits, int& MaximumIntegralDigits, int& MinimumFractionalDigits, int& MaximumFractionalDigits); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetTextLibrary.AsDateTime_DateTime (Underlying native function: AsDateTime_DateTime 0x9c08a68)
	static struct FText AsDateTimeDateTime(struct FDateTime*& In); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetTextLibrary.AsDate_DateTime (Underlying native function: AsDate_DateTime 0x9c08b44)
	static struct FText AsDateDateTime(struct FDateTime*& InDateTime); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetTextLibrary.AsCurrencyBase (Underlying native function: AsCurrencyBase 0x9c08078)
	static struct FText AsCurrencyBase(int& BaseValue, struct FString& CurrencyCode); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetTextLibrary.AsCurrency_Integer (Underlying native function: AsCurrency_Integer 0x9c08658)
	static struct FText AsCurrencyInteger(int& Value, struct TEnumAsByte<ERoundingMode>& RoundingMode, bool& bAlwaysSign, bool& bUseGrouping, int& MinimumIntegralDigits, int& MaximumIntegralDigits, int& MinimumFractionalDigits, int& MaximumFractionalDigits, struct FString& CurrencyCode); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetTextLibrary.AsCurrency_Float (Underlying native function: AsCurrency_Float 0x9c082a8)
	static struct FText AsCurrencyFloat(float& Value, struct TEnumAsByte<ERoundingMode>& RoundingMode, bool& bAlwaysSign, bool& bUseGrouping, int& MinimumIntegralDigits, int& MaximumIntegralDigits, int& MinimumFractionalDigits, int& MaximumFractionalDigits, struct FString& CurrencyCode); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)
};

