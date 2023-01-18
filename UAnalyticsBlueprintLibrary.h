// Class /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary
// Size: 0x28
class UAnalyticsBlueprintLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.StartSessionWithAttributes (Underlying native function: StartSessionWithAttributes 0xa434b4c)
	static bool StartSessionWithAttributes(struct TArray<struct FAnalyticsEventAttr>& Attributes); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.StartSession (Underlying native function: StartSession 0xa434ae4)
	static bool StartSession(); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetUserId (Underlying native function: SetUserId 0xa43495c)
	static void SetUserId(struct FString& UserId); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetSessionId (Underlying native function: SetSessionId 0xa4347ac)
	static void SetSessionId(struct FString& SessionId); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetLocation (Underlying native function: SetLocation 0xa4345fc)
	static void SetLocation(struct FString& Location); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetGender (Underlying native function: SetGender 0xa43444c)
	static void SetGender(struct FString& Gender); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetBuildInfo (Underlying native function: SetBuildInfo 0xa43429c)
	static void SetBuildInfo(struct FString& BuildInfo); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetAge (Underlying native function: SetAge 0xa4341d4)
	static void SetAge(int& Age); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordSimpleItemPurchaseWithAttributes (Underlying native function: RecordSimpleItemPurchaseWithAttributes 0xa433fe8)
	static void RecordSimpleItemPurchaseWithAttributes(struct FString& ItemId, int& ItemQuantity, struct TArray<struct FAnalyticsEventAttr>& Attributes); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordSimpleItemPurchase (Underlying native function: RecordSimpleItemPurchase 0xa433e54)
	static void RecordSimpleItemPurchase(struct FString& ItemId, int& ItemQuantity); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordSimpleCurrencyPurchaseWithAttributes (Underlying native function: RecordSimpleCurrencyPurchaseWithAttributes 0xa433c68)
	static void RecordSimpleCurrencyPurchaseWithAttributes(struct FString& GameCurrencyType, int& GameCurrencyAmount, struct TArray<struct FAnalyticsEventAttr>& Attributes); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordSimpleCurrencyPurchase (Underlying native function: RecordSimpleCurrencyPurchase 0xa433ad4)
	static void RecordSimpleCurrencyPurchase(struct FString& GameCurrencyType, int& GameCurrencyAmount); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordProgressWithFullHierarchyAndAttributes (Underlying native function: RecordProgressWithFullHierarchyAndAttributes 0xa4338cc)
	static void RecordProgressWithFullHierarchyAndAttributes(struct FString& ProgressType, struct TArray<struct FString>& ProgressNames, struct TArray<struct FAnalyticsEventAttr>& Attributes); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordProgressWithAttributes (Underlying native function: RecordProgressWithAttributes 0xa43360c)
	static void RecordProgressWithAttributes(struct FString& ProgressType, struct FString& ProgressName, struct TArray<struct FAnalyticsEventAttr>& Attributes); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordProgress (Underlying native function: RecordProgress 0xa4333a8)
	static void RecordProgress(struct FString& ProgressType, struct FString& ProgressName); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordItemPurchase (Underlying native function: RecordItemPurchase 0xa4330d0)
	static void RecordItemPurchase(struct FString& ItemId, struct FString& Currency, int& PerItemCost, int& ItemQuantity); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordEventWithAttributes (Underlying native function: RecordEventWithAttributes 0xa432f24)
	static void RecordEventWithAttributes(struct FString& EventName, struct TArray<struct FAnalyticsEventAttr>& Attributes); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordEventWithAttribute (Underlying native function: RecordEventWithAttribute 0xa432bbc)
	static void RecordEventWithAttribute(struct FString& EventName, struct FString& AttributeName, struct FString& AttributeValue); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordEvent (Underlying native function: RecordEvent 0xa432a6c)
	static void RecordEvent(struct FString& EventName); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordErrorWithAttributes (Underlying native function: RecordErrorWithAttributes 0xa4328c0)
	static void RecordErrorWithAttributes(struct FString& Error, struct TArray<struct FAnalyticsEventAttr>& Attributes); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordError (Underlying native function: RecordError 0xa432710)
	static void RecordError(struct FString& Error); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordCurrencyPurchase (Underlying native function: RecordCurrencyPurchase 0xa43232c)
	static void RecordCurrencyPurchase(struct FString& GameCurrencyType, int& GameCurrencyAmount, struct FString& RealCurrencyType, float& RealMoneyCost, struct FString& PaymentProvider); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordCurrencyGivenWithAttributes (Underlying native function: RecordCurrencyGivenWithAttributes 0xa432140)
	static void RecordCurrencyGivenWithAttributes(struct FString& GameCurrencyType, int& GameCurrencyAmount, struct TArray<struct FAnalyticsEventAttr>& Attributes); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordCurrencyGiven (Underlying native function: RecordCurrencyGiven 0xa431fac)
	static void RecordCurrencyGiven(struct FString& GameCurrencyType, int& GameCurrencyAmount); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.MakeEventAttribute (Underlying native function: MakeEventAttribute 0xa431d2c)
	static struct FAnalyticsEventAttr MakeEventAttribute(struct FString& AttributeName, struct FString& AttributeValue); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.GetUserId (Underlying native function: GetUserId 0xa431cb8)
	static struct FString GetUserId(); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.GetSessionId (Underlying native function: GetSessionId 0xa431c44)
	static struct FString GetSessionId(); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.FlushEvents (Underlying native function: FlushEvents 0xa431bc4)
	static void FlushEvents(); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.EndSession (Underlying native function: EndSession 0xa431b44)
	static void EndSession(); // (Final | Native | Static | Public | BlueprintCallable)
};

