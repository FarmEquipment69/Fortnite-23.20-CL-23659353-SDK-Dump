// Class /Script/DataRegistry.DataRegistrySubsystem
// Size: 0xc8
class UDataRegistrySubsystem : public UEngineSubsystem
{
	unsigned char unreflected_c8[0xc8]; 

	/* Functions */

	// Function /Script/DataRegistry.DataRegistrySubsystem.NotEqual_DataRegistryType (Underlying native function: NotEqual_DataRegistryType 0x6aa452c)
	static bool NotEqualDataRegistryType(struct FDataRegistryType& A, struct FDataRegistryType& B); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/DataRegistry.DataRegistrySubsystem.NotEqual_DataRegistryId (Underlying native function: NotEqual_DataRegistryId 0x6aa4460)
	static bool NotEqualDataRegistryId(struct FDataRegistryId*& A, struct FDataRegistryId*& B); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/DataRegistry.DataRegistrySubsystem.IsValidDataRegistryType (Underlying native function: IsValidDataRegistryType 0x6aa439c)
	static bool IsValidDataRegistryType(struct FDataRegistryType& DataRegistryType); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/DataRegistry.DataRegistrySubsystem.IsValidDataRegistryId (Underlying native function: IsValidDataRegistryId 0x6aa42bc)
	static bool IsValidDataRegistryId(struct FDataRegistryId*& DataRegistryId); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/DataRegistry.DataRegistrySubsystem.GetCachedItemFromLookupBP (Underlying native function: GetCachedItemFromLookupBP 0x6aa3fdc)
	static bool GetCachedItemFromLookupBP(struct FDataRegistryId*& ItemId, struct FDataRegistryLookup& ResolvedLookup, struct FTableRowBase*& OutItem); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/DataRegistry.DataRegistrySubsystem.GetCachedItemBP (Underlying native function: GetCachedItemBP 0x6aa3d90)
	static bool GetCachedItemBP(struct FDataRegistryId*& ItemId, struct FTableRowBase*& OutItem); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/DataRegistry.DataRegistrySubsystem.FindCachedItemBP (Underlying native function: FindCachedItemBP 0x6aa3ae0)
	static void FindCachedItemBP(struct FDataRegistryId*& ItemId, enum EDataRegistrySubsystemGetItemResult& outResult, struct FTableRowBase*& OutItem); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/DataRegistry.DataRegistrySubsystem.EvaluateDataRegistryCurve (Underlying native function: EvaluateDataRegistryCurve 0x6aa394c)
	static void EvaluateDataRegistryCurve(struct FDataRegistryId*& ItemId, float& InputValue, float& DefaultValue, enum EDataRegistrySubsystemGetItemResult& outResult, float& OutValue); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/DataRegistry.DataRegistrySubsystem.EqualEqual_DataRegistryType (Underlying native function: EqualEqual_DataRegistryType 0x6aa3890)
	static bool EqualEqualDataRegistryType(struct FDataRegistryType& A, struct FDataRegistryType& B); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/DataRegistry.DataRegistrySubsystem.EqualEqual_DataRegistryId (Underlying native function: EqualEqual_DataRegistryId 0x6aa37c4)
	static bool EqualEqualDataRegistryId(struct FDataRegistryId*& A, struct FDataRegistryId*& B); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/DataRegistry.DataRegistrySubsystem.Conv_DataRegistryTypeToString (Underlying native function: Conv_DataRegistryTypeToString 0x6aa363c)
	static struct FString ConvDataRegistryTypeToString(struct FDataRegistryType& DataRegistryType); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/DataRegistry.DataRegistrySubsystem.Conv_DataRegistryIdToString (Underlying native function: Conv_DataRegistryIdToString 0x6aa3598)
	static struct FString ConvDataRegistryIdToString(struct FDataRegistryId*& DataRegistryId); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/DataRegistry.DataRegistrySubsystem.AcquireItemBP (Underlying native function: AcquireItemBP 0x6aa3478)
	static bool AcquireItemBP(struct FDataRegistryId*& ItemId, struct FDelegate& AcquireCallback); // (Final | Native | Static | Public | BlueprintCallable)
};

