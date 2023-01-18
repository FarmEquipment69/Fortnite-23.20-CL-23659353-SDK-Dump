// Class /Script/FortniteGame.UserOptionDefinitionContainerInterface
// Size: 0x28
class IUserOptionDefinitionContainerInterface : public IInterface
{

	/* Functions */

	// Function /Script/FortniteGame.UserOptionDefinitionContainerInterface.GetUserOptionsInteractionText (Underlying native function: GetUserOptionsInteractionText 0x89d2118)
	struct FText GetUserOptionsInteractionText(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.UserOptionDefinitionContainerInterface.GetUserOptionsInteractionSpeed (Underlying native function: GetUserOptionsInteractionSpeed 0x89d20e8)
	struct FCurveTableRowHandle GetUserOptionsInteractionSpeed(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.UserOptionDefinitionContainerInterface.GetUserOptionsDisplayName (Underlying native function: GetUserOptionsDisplayName 0x80945d4)
	struct FText GetUserOptionsDisplayName(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.UserOptionDefinitionContainerInterface.GetUserOptionsDescription (Underlying native function: GetUserOptionsDescription 0x89d206c)
	struct FText GetUserOptionsDescription(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.UserOptionDefinitionContainerInterface.GetUserOptionList (Underlying native function: GetUserOptionList 0x89d1fd8)
	class UPlaylistUserOptions* GetUserOptionList(bool& bAllowGenerated); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.UserOptionDefinitionContainerInterface.GetUserOptionDefinitions (Underlying native function: GetUserOptionDefinitions 0x89d1f34)
	struct TArray<struct FUserOptionDefinition> GetUserOptionDefinitions(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.UserOptionDefinitionContainerInterface.GetGrantedContextTagsFromObject (Underlying native function: GetGrantedContextTagsFromObject 0x89d1ca0)
	void GetGrantedContextTagsFromObject(class UObject*& Object, struct FGameplayTagContainer& ContextTags); // (Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)
};

