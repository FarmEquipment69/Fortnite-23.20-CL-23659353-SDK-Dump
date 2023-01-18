// Class /Script/GameplayBehaviorsModule.GameplayBehaviorsBlueprintFunctionLibrary
// Size: 0x28
class UGameplayBehaviorsBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/GameplayBehaviorsModule.GameplayBehaviorsBlueprintFunctionLibrary.SetValueAsGameplayTagForBlackboardComp (Underlying native function: SetValueAsGameplayTagForBlackboardComp 0x7f71580)
	static void SetValueAsGameplayTagForBlackboardComp(class UBlackboardComponent*& BlackboardComp, struct FName& KeyName, struct FGameplayTagContainer& GameplayTagValue); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/GameplayBehaviorsModule.GameplayBehaviorsBlueprintFunctionLibrary.SetBlackboardValueAsGameplayTag (Underlying native function: SetBlackboardValueAsGameplayTag 0x7f71414)
	static void SetBlackboardValueAsGameplayTag(class UBTNode*& NodeOwner, struct FBlackboardKeySelector& Key, struct FGameplayTagContainer& Value); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/GameplayBehaviorsModule.GameplayBehaviorsBlueprintFunctionLibrary.GetBlackboardValueAsGameplayTagFromBlackboardComp (Underlying native function: GetBlackboardValueAsGameplayTagFromBlackboardComp 0x7f70f4c)
	static struct FGameplayTagContainer GetBlackboardValueAsGameplayTagFromBlackboardComp(class UBlackboardComponent*& BlackboardComp, struct FName& KeyName); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/GameplayBehaviorsModule.GameplayBehaviorsBlueprintFunctionLibrary.GetBlackboardValueAsGameplayTag (Underlying native function: GetBlackboardValueAsGameplayTag 0x7f70dd8)
	static struct FGameplayTagContainer GetBlackboardValueAsGameplayTag(class UBTNode*& NodeOwner, struct FBlackboardKeySelector& Key); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayBehaviorsModule.GameplayBehaviorsBlueprintFunctionLibrary.AddGameplayTagFilterToBlackboardKeySelector (Underlying native function: AddGameplayTagFilterToBlackboardKeySelector 0x7f70c98)
	static void AddGameplayTagFilterToBlackboardKeySelector(struct FBlackboardKeySelector& InSelector, class UObject*& Owner, struct FName& PropertyName); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)
};

