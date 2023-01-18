// Class /Script/FortniteGame.WeightedActorClassListLibrary
// Size: 0x28
class UWeightedActorClassListLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/FortniteGame.WeightedActorClassListLibrary.SelectRandomActorTypeFromList (Underlying native function: SelectRandomActorTypeFromList 0x8726234)
	static class UClass* SelectRandomActorTypeFromList(struct FFortWeightedActorTypeList& QueryList); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.WeightedActorClassListLibrary.IsListValid (Underlying native function: IsListValid 0x8725b50)
	static bool IsListValid(struct FFortWeightedActorTypeList& QueryList); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)
};

