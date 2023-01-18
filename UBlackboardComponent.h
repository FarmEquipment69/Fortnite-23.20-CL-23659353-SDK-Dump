// Class /Script/AIModule.BlackboardComponent
// Size: 0x1a8
class UBlackboardComponent : public UActorComponent
{
	class UBrainComponent* BrainComp; // 0xa0 (0x8)
	class UBlackboardData* DefaultBlackboardAsset; // 0xa8 (0x8)
	class UBlackboardData* BlackboardAsset; // 0xb0 (0x8)
	unsigned char unreflected_b8[0x20]; // 0xb8 (0x20) 
	struct TArray<class UBlackboardKeyType*> KeyInstances; // 0xd8 (0x10)
	unsigned char padding_e8[0xc0]; // 0xe8 (0xc0)

	/* Functions */

	// Function /Script/AIModule.BlackboardComponent.SetValueAsVector (Underlying native function: SetValueAsVector 0xa19766c)
	void SetValueAsVector(struct FName& KeyName, struct FVector& VectorValue); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/AIModule.BlackboardComponent.SetValueAsString (Underlying native function: SetValueAsString 0xa1974b8)
	void SetValueAsString(struct FName& KeyName, struct FString& StringValue); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AIModule.BlackboardComponent.SetValueAsRotator (Underlying native function: SetValueAsRotator 0xa1973c4)
	void SetValueAsRotator(struct FName& KeyName, struct FRotator& VectorValue); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/AIModule.BlackboardComponent.SetValueAsObject (Underlying native function: SetValueAsObject 0xa1972e4)
	void SetValueAsObject(struct FName& KeyName, class UObject*& ObjectValue); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AIModule.BlackboardComponent.SetValueAsName (Underlying native function: SetValueAsName 0xa197208)
	void SetValueAsName(struct FName& KeyName, struct FName& NameValue); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AIModule.BlackboardComponent.SetValueAsInt (Underlying native function: SetValueAsInt 0xa19712c)
	void SetValueAsInt(struct FName& KeyName, int& IntValue); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AIModule.BlackboardComponent.SetValueAsFloat (Underlying native function: SetValueAsFloat 0xa197048)
	void SetValueAsFloat(struct FName& KeyName, float& FloatValue); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AIModule.BlackboardComponent.SetValueAsEnum (Underlying native function: SetValueAsEnum 0xa196f68)
	void SetValueAsEnum(struct FName& KeyName, unsigned char& EnumValue); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AIModule.BlackboardComponent.SetValueAsClass (Underlying native function: SetValueAsClass 0xa196e88)
	void SetValueAsClass(struct FName& KeyName, class UClass*& ClassValue); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AIModule.BlackboardComponent.SetValueAsBool (Underlying native function: SetValueAsBool 0xa196d9c)
	void SetValueAsBool(struct FName& KeyName, bool& BoolValue); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AIModule.BlackboardComponent.IsVectorValueSet (Underlying native function: IsVectorValueSet 0xa195d9c)
	bool IsVectorValueSet(struct FName& KeyName); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AIModule.BlackboardComponent.GetValueAsVector (Underlying native function: GetValueAsVector 0xa195c0c)
	struct FVector GetValueAsVector(struct FName& KeyName); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AIModule.BlackboardComponent.GetValueAsString (Underlying native function: GetValueAsString 0xa195a6c)
	struct FString GetValueAsString(struct FName& KeyName); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AIModule.BlackboardComponent.GetValueAsRotator (Underlying native function: GetValueAsRotator 0xa1959b8)
	struct FRotator GetValueAsRotator(struct FName& KeyName); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AIModule.BlackboardComponent.GetValueAsObject (Underlying native function: GetValueAsObject 0xa195918)
	class UObject* GetValueAsObject(struct FName& KeyName); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AIModule.BlackboardComponent.GetValueAsName (Underlying native function: GetValueAsName 0xa195870)
	struct FName GetValueAsName(struct FName& KeyName); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AIModule.BlackboardComponent.GetValueAsInt (Underlying native function: GetValueAsInt 0xa1957d0)
	int GetValueAsInt(struct FName& KeyName); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AIModule.BlackboardComponent.GetValueAsFloat (Underlying native function: GetValueAsFloat 0xa195730)
	float GetValueAsFloat(struct FName& KeyName); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AIModule.BlackboardComponent.GetValueAsEnum (Underlying native function: GetValueAsEnum 0xa195690)
	unsigned char GetValueAsEnum(struct FName& KeyName); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AIModule.BlackboardComponent.GetValueAsClass (Underlying native function: GetValueAsClass 0xa1955f0)
	class UClass* GetValueAsClass(struct FName& KeyName); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AIModule.BlackboardComponent.GetValueAsBool (Underlying native function: GetValueAsBool 0xa195550)
	bool GetValueAsBool(struct FName& KeyName); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AIModule.BlackboardComponent.GetRotationFromEntry (Underlying native function: GetRotationFromEntry 0xa1953a0)
	bool GetRotationFromEntry(struct FName& KeyName, struct FRotator& ResultRotation); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AIModule.BlackboardComponent.GetLocationFromEntry (Underlying native function: GetLocationFromEntry 0xa19516c)
	bool GetLocationFromEntry(struct FName& KeyName, struct FVector& ResultLocation); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AIModule.BlackboardComponent.ClearValue (Underlying native function: ClearValue 0xa1943ec)
	void ClearValue(struct FName& KeyName); // (Final | Native | Public | HasOutParms | BlueprintCallable)
};

