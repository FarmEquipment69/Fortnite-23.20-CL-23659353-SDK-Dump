// Class /Script/AIModule.BTFunctionLibrary
// Size: 0x28
class UBTFunctionLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/AIModule.BTFunctionLibrary.StopUsingExternalEvent (Underlying native function: StopUsingExternalEvent 0x71a663c)
	static void StopUsingExternalEvent(class UBTNode*& NodeOwner); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AIModule.BTFunctionLibrary.StartUsingExternalEvent (Underlying native function: StartUsingExternalEvent 0x70dc290)
	static void StartUsingExternalEvent(class UBTNode*& NodeOwner, class AActor*& OwningActor); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AIModule.BTFunctionLibrary.SetBlackboardValueAsVector (Underlying native function: SetBlackboardValueAsVector 0xa196b74)
	static void SetBlackboardValueAsVector(class UBTNode*& NodeOwner, struct FBlackboardKeySelector& Key, struct FVector& Value); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/AIModule.BTFunctionLibrary.SetBlackboardValueAsString (Underlying native function: SetBlackboardValueAsString 0xa19699c)
	static void SetBlackboardValueAsString(class UBTNode*& NodeOwner, struct FBlackboardKeySelector& Key, struct FString& Value); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AIModule.BTFunctionLibrary.SetBlackboardValueAsRotator (Underlying native function: SetBlackboardValueAsRotator 0xa19683c)
	static void SetBlackboardValueAsRotator(class UBTNode*& NodeOwner, struct FBlackboardKeySelector& Key, struct FRotator& Value); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/AIModule.BTFunctionLibrary.SetBlackboardValueAsObject (Underlying native function: SetBlackboardValueAsObject 0xa1966ec)
	static void SetBlackboardValueAsObject(class UBTNode*& NodeOwner, struct FBlackboardKeySelector& Key, class UObject*& Value); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AIModule.BTFunctionLibrary.SetBlackboardValueAsName (Underlying native function: SetBlackboardValueAsName 0xa196578)
	static void SetBlackboardValueAsName(class UBTNode*& NodeOwner, struct FBlackboardKeySelector& Key, struct FName& Value); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AIModule.BTFunctionLibrary.SetBlackboardValueAsInt (Underlying native function: SetBlackboardValueAsInt 0xa196404)
	static void SetBlackboardValueAsInt(class UBTNode*& NodeOwner, struct FBlackboardKeySelector& Key, int& Value); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AIModule.BTFunctionLibrary.SetBlackboardValueAsFloat (Underlying native function: SetBlackboardValueAsFloat 0xa1962c0)
	static void SetBlackboardValueAsFloat(class UBTNode*& NodeOwner, struct FBlackboardKeySelector& Key, float& Value); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AIModule.BTFunctionLibrary.SetBlackboardValueAsEnum (Underlying native function: SetBlackboardValueAsEnum 0xa19614c)
	static void SetBlackboardValueAsEnum(class UBTNode*& NodeOwner, struct FBlackboardKeySelector& Key, unsigned char& Value); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AIModule.BTFunctionLibrary.SetBlackboardValueAsClass (Underlying native function: SetBlackboardValueAsClass 0xa195fd8)
	static void SetBlackboardValueAsClass(class UBTNode*& NodeOwner, struct FBlackboardKeySelector& Key, class UClass*& Value); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AIModule.BTFunctionLibrary.SetBlackboardValueAsBool (Underlying native function: SetBlackboardValueAsBool 0xa195e74)
	static void SetBlackboardValueAsBool(class UBTNode*& NodeOwner, struct FBlackboardKeySelector& Key, bool& Value); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AIModule.BTFunctionLibrary.GetOwnersBlackboard (Underlying native function: GetOwnersBlackboard 0xa1952f8)
	static class UBlackboardComponent* GetOwnersBlackboard(class UBTNode*& NodeOwner); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/AIModule.BTFunctionLibrary.GetOwnerComponent (Underlying native function: GetOwnerComponent 0xa195268)
	static class UBehaviorTreeComponent* GetOwnerComponent(class UBTNode*& NodeOwner); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/AIModule.BTFunctionLibrary.GetBlackboardValueAsVector (Underlying native function: GetBlackboardValueAsVector 0xa195018)
	static struct FVector GetBlackboardValueAsVector(class UBTNode*& NodeOwner, struct FBlackboardKeySelector& Key); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/AIModule.BTFunctionLibrary.GetBlackboardValueAsString (Underlying native function: GetBlackboardValueAsString 0xa194ec8)
	static struct FString GetBlackboardValueAsString(class UBTNode*& NodeOwner, struct FBlackboardKeySelector& Key); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/AIModule.BTFunctionLibrary.GetBlackboardValueAsRotator (Underlying native function: GetBlackboardValueAsRotator 0xa194da4)
	static struct FRotator GetBlackboardValueAsRotator(class UBTNode*& NodeOwner, struct FBlackboardKeySelector& Key); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/AIModule.BTFunctionLibrary.GetBlackboardValueAsObject (Underlying native function: GetBlackboardValueAsObject 0xa194c90)
	static class UObject* GetBlackboardValueAsObject(class UBTNode*& NodeOwner, struct FBlackboardKeySelector& Key); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/AIModule.BTFunctionLibrary.GetBlackboardValueAsName (Underlying native function: GetBlackboardValueAsName 0xa194b64)
	static struct FName GetBlackboardValueAsName(class UBTNode*& NodeOwner, struct FBlackboardKeySelector& Key); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/AIModule.BTFunctionLibrary.GetBlackboardValueAsInt (Underlying native function: GetBlackboardValueAsInt 0xa194a3c)
	static int GetBlackboardValueAsInt(class UBTNode*& NodeOwner, struct FBlackboardKeySelector& Key); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/AIModule.BTFunctionLibrary.GetBlackboardValueAsFloat (Underlying native function: GetBlackboardValueAsFloat 0xa194928)
	static float GetBlackboardValueAsFloat(class UBTNode*& NodeOwner, struct FBlackboardKeySelector& Key); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/AIModule.BTFunctionLibrary.GetBlackboardValueAsEnum (Underlying native function: GetBlackboardValueAsEnum 0xa194800)
	static unsigned char GetBlackboardValueAsEnum(class UBTNode*& NodeOwner, struct FBlackboardKeySelector& Key); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/AIModule.BTFunctionLibrary.GetBlackboardValueAsClass (Underlying native function: GetBlackboardValueAsClass 0xa1946d8)
	static class UClass* GetBlackboardValueAsClass(class UBTNode*& NodeOwner, struct FBlackboardKeySelector& Key); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/AIModule.BTFunctionLibrary.GetBlackboardValueAsBool (Underlying native function: GetBlackboardValueAsBool 0xa1945b0)
	static bool GetBlackboardValueAsBool(class UBTNode*& NodeOwner, struct FBlackboardKeySelector& Key); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/AIModule.BTFunctionLibrary.GetBlackboardValueAsActor (Underlying native function: GetBlackboardValueAsActor 0xa194488)
	static class AActor* GetBlackboardValueAsActor(class UBTNode*& NodeOwner, struct FBlackboardKeySelector& Key); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/AIModule.BTFunctionLibrary.ClearBlackboardValueAsVector (Underlying native function: ClearBlackboardValueAsVector 0xa1942d0)
	static void ClearBlackboardValueAsVector(class UBTNode*& NodeOwner, struct FBlackboardKeySelector& Key); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AIModule.BTFunctionLibrary.ClearBlackboardValue (Underlying native function: ClearBlackboardValue 0xa1942d0)
	static void ClearBlackboardValue(class UBTNode*& NodeOwner, struct FBlackboardKeySelector& Key); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)
};

