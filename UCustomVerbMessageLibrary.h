// Class /Script/FortniteGame.CustomVerbMessageLibrary
// Size: 0x28
class UCustomVerbMessageLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/FortniteGame.CustomVerbMessageLibrary.OverrideContextLocation (Underlying native function: OverrideContextLocation 0x5eb7d80)
	static void OverrideContextLocation(struct FCustomVerbMessage& CustomVerb, struct FVector& ContextLocation, struct FCustomVerbMessage& Result); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.CustomVerbMessageLibrary.MakeCustomVerbMessage (Underlying native function: MakeCustomVerbMessage 0x900eb30)
	static struct FCustomVerbMessage MakeCustomVerbMessage(class UObject*& Author, struct FGameplayTag& VerbName, int& Amount, struct FGameplayTagContainer& ContextTags); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.CustomVerbMessageLibrary.BroadcastCustomVerbMessage (Underlying native function: BroadcastCustomVerbMessage 0x900ce58)
	static void BroadcastCustomVerbMessage(class AActor*& ActorContext, struct FCustomVerbMessage& CustomVerb); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.CustomVerbMessageLibrary.AddValue (Underlying native function: AddValue 0x900cb6c)
	static void AddValue(struct FCustomVerbMessage& CustomVerb, struct FName& ValueName, float& Value, struct FCustomVerbMessage& Result); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.CustomVerbMessageLibrary.AddTagsFromSubject (Underlying native function: AddTagsFromSubject 0x900c950)
	static void AddTagsFromSubject(struct FCustomVerbMessage& CustomVerb, struct FName& SubjectName, class UObject*& SubjectObject, struct FCustomVerbMessage& Result); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.CustomVerbMessageLibrary.AddTagsForSubject (Underlying native function: AddTagsForSubject 0x900c6f4)
	static void AddTagsForSubject(struct FCustomVerbMessage& CustomVerb, struct FName& SubjectName, struct FGameplayTagContainer& SubjectTags, struct FCustomVerbMessage& Result); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)
};

