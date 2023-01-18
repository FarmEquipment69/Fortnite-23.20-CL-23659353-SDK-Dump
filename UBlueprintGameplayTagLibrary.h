// Class /Script/GameplayTags.BlueprintGameplayTagLibrary
// Size: 0x28
class UBlueprintGameplayTagLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.RemoveGameplayTag (Underlying native function: RemoveGameplayTag 0x9b9ed10)
	static bool RemoveGameplayTag(struct FGameplayTagContainer& TagContainer, struct FGameplayTag& tag); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.NotEqual_TagTag (Underlying native function: NotEqual_TagTag 0x9b9eb68)
	static bool NotEqualTagTag(struct FGameplayTag& A, struct FString& B); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.NotEqual_TagContainerTagContainer (Underlying native function: NotEqual_TagContainerTagContainer 0x9b9e814)
	static bool NotEqualTagContainerTagContainer(struct FGameplayTagContainer& A, struct FString& B); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.NotEqual_GameplayTagContainer (Underlying native function: NotEqual_GameplayTagContainer 0x9b9e6d4)
	static bool NotEqualGameplayTagContainer(struct FGameplayTagContainer& A, struct FGameplayTagContainer& B); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.NotEqual_GameplayTag (Underlying native function: NotEqual_GameplayTag 0x2f5d8c8)
	static bool NotEqualGameplayTag(struct FGameplayTag& A, struct FGameplayTag& B); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.MatchesTag (Underlying native function: MatchesTag 0x24256b8)
	static bool MatchesTag(struct FGameplayTag& TagOne, struct FGameplayTag& TagTwo, bool& bExactMatch); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.MatchesAnyTags (Underlying native function: MatchesAnyTags 0x9b9e580)
	static bool MatchesAnyTags(struct FGameplayTag& TagOne, struct FGameplayTagContainer& OtherContainer, bool& bExactMatch); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.MakeLiteralGameplayTagContainer (Underlying native function: MakeLiteralGameplayTagContainer 0x2566b0c)
	static struct FGameplayTagContainer MakeLiteralGameplayTagContainer(struct FGameplayTagContainer& Value); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.MakeLiteralGameplayTag (Underlying native function: MakeLiteralGameplayTag 0x877fcb8)
	static struct FGameplayTag MakeLiteralGameplayTag(struct FGameplayTag& Value); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagQuery (Underlying native function: MakeGameplayTagQuery 0x2cfec30)
	static struct FGameplayTagQuery MakeGameplayTagQuery(struct FGameplayTagQuery& TagQuery); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagContainerFromTag (Underlying native function: MakeGameplayTagContainerFromTag 0x2a9b308)
	static struct FGameplayTagContainer MakeGameplayTagContainerFromTag(struct FGameplayTag& SingleTag); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagContainerFromArray (Underlying native function: MakeGameplayTagContainerFromArray 0x9b9e4b4)
	static struct FGameplayTagContainer MakeGameplayTagContainerFromArray(struct TArray<struct FGameplayTag>& GameplayTags); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.IsTagQueryEmpty (Underlying native function: IsTagQueryEmpty 0x9b9e3c4)
	static bool IsTagQueryEmpty(struct FGameplayTagQuery& TagQuery); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.IsGameplayTagValid (Underlying native function: IsGameplayTagValid 0x250e204)
	static bool IsGameplayTagValid(struct FGameplayTag& GameplayTag); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.HasTag (Underlying native function: HasTag 0x131771c)
	static bool HasTag(struct FGameplayTagContainer& TagContainer, struct FGameplayTag& tag, bool& bExactMatch); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.HasAnyTags (Underlying native function: HasAnyTags 0x24ab530)
	static bool HasAnyTags(struct FGameplayTagContainer& TagContainer, struct FGameplayTagContainer& OtherContainer, bool& bExactMatch); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.HasAllTags (Underlying native function: HasAllTags 0x9b9e1dc)
	static bool HasAllTags(struct FGameplayTagContainer& TagContainer, struct FGameplayTagContainer& OtherContainer, bool& bExactMatch); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.HasAllMatchingGameplayTags (Underlying native function: HasAllMatchingGameplayTags 0x9b9e0d0)
	static bool HasAllMatchingGameplayTags(struct TScriptInterface<class IGameplayTagAssetInterface>& TagContainerInterface, struct FGameplayTagContainer& OtherContainer); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.GetTagName (Underlying native function: GetTagName 0x235b26c)
	static struct FName GetTagName(struct FGameplayTag& GameplayTag); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.GetNumGameplayTagsInContainer (Underlying native function: GetNumGameplayTagsInContainer 0x9b9df50)
	static int GetNumGameplayTagsInContainer(struct FGameplayTagContainer& TagContainer); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.GetDebugStringFromGameplayTagContainer (Underlying native function: GetDebugStringFromGameplayTagContainer 0x9b9dc24)
	static struct FString GetDebugStringFromGameplayTagContainer(struct FGameplayTagContainer& TagContainer); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.GetDebugStringFromGameplayTag (Underlying native function: GetDebugStringFromGameplayTag 0x9b9db88)
	static struct FString GetDebugStringFromGameplayTag(struct FGameplayTag& GameplayTag); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.GetAllActorsOfClassMatchingTagQuery (Underlying native function: GetAllActorsOfClassMatchingTagQuery 0x9b9d6e0)
	static void GetAllActorsOfClassMatchingTagQuery(class UObject*& WorldContextObject, class UClass*& ActorClass, struct FGameplayTagQuery& GameplayTagQuery, struct TArray<class AActor*>& OutActors); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.EqualEqual_GameplayTagContainer (Underlying native function: EqualEqual_GameplayTagContainer 0x9b9d5a0)
	static bool EqualEqualGameplayTagContainer(struct FGameplayTagContainer& A, struct FGameplayTagContainer& B); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.EqualEqual_GameplayTag (Underlying native function: EqualEqual_GameplayTag 0x2da7d6c)
	static bool EqualEqualGameplayTag(struct FGameplayTag& A, struct FGameplayTag& B); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.DoesTagAssetInterfaceHaveTag (Underlying native function: DoesTagAssetInterfaceHaveTag 0x9b9d4d0)
	static bool DoesTagAssetInterfaceHaveTag(struct TScriptInterface<class IGameplayTagAssetInterface>& TagContainerInterface, struct FGameplayTag& tag); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.DoesContainerMatchTagQuery (Underlying native function: DoesContainerMatchTagQuery 0x9b9d358)
	static bool DoesContainerMatchTagQuery(struct FGameplayTagContainer& TagContainer, struct FGameplayTagQuery& TagQuery); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.BreakGameplayTagContainer (Underlying native function: BreakGameplayTagContainer 0x9b9d23c)
	static void BreakGameplayTagContainer(struct FGameplayTagContainer& GameplayTagContainer, struct TArray<struct FGameplayTag>& GameplayTags); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.AppendGameplayTagContainers (Underlying native function: AppendGameplayTagContainers 0x9b9d10c)
	static void AppendGameplayTagContainers(struct FGameplayTagContainer& InOutTagContainer, struct FGameplayTagContainer& InTagContainer); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.AddGameplayTag (Underlying native function: AddGameplayTag 0x2d92a70)
	static void AddGameplayTag(struct FGameplayTagContainer& TagContainer, struct FGameplayTag& tag); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)
};

