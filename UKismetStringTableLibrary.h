// Class /Script/Engine.KismetStringTableLibrary
// Size: 0x28
class UKismetStringTableLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/Engine.KismetStringTableLibrary.IsRegisteredTableId (Underlying native function: IsRegisteredTableId 0x9dfa89c)
	static bool IsRegisteredTableId(struct FName& TableId); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetStringTableLibrary.IsRegisteredTableEntry (Underlying native function: IsRegisteredTableEntry 0x9dfa704)
	static bool IsRegisteredTableEntry(struct FName& TableId, struct FString& Key); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetStringTableLibrary.GetTableNamespace (Underlying native function: GetTableNamespace 0x9df6b64)
	static struct FString GetTableNamespace(struct FName& TableId); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetStringTableLibrary.GetTableEntrySourceString (Underlying native function: GetTableEntrySourceString 0x9df69b0)
	static struct FString GetTableEntrySourceString(struct FName& TableId, struct FString& Key); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetStringTableLibrary.GetTableEntryMetaData (Underlying native function: GetTableEntryMetaData 0x9df67d0)
	static struct FString GetTableEntryMetaData(struct FName& TableId, struct FString& Key, struct FName& MetaDataId); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetStringTableLibrary.GetRegisteredStringTables (Underlying native function: GetRegisteredStringTables 0x9df5438)
	static struct TArray<struct FName> GetRegisteredStringTables(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetStringTableLibrary.GetMetaDataIdsFromStringTableEntry (Underlying native function: GetMetaDataIdsFromStringTableEntry 0x9df397c)
	static struct TArray<struct FName> GetMetaDataIdsFromStringTableEntry(struct FName& TableId, struct FString& Key); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetStringTableLibrary.GetKeysFromStringTable (Underlying native function: GetKeysFromStringTable 0x9df3650)
	static struct TArray<struct FString> GetKeysFromStringTable(struct FName& TableId); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)
};

