// Class /Script/Engine.KismetMaterialLibrary
// Size: 0x28
class UKismetMaterialLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/Engine.KismetMaterialLibrary.SetVectorParameterValue (Underlying native function: SetVectorParameterValue 0x209d9c4)
	static void SetVectorParameterValue(class UObject*& WorldContextObject, class UMaterialParameterCollection*& Collection, struct FName& ParameterName, struct FLinearColor& ParameterValue); // (Final | 0x00000002 | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.KismetMaterialLibrary.SetScalarParameterValue (Underlying native function: SetScalarParameterValue 0x1187e88)
	static void SetScalarParameterValue(class UObject*& WorldContextObject, class UMaterialParameterCollection*& Collection, struct FName& ParameterName, float& ParameterValue); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.KismetMaterialLibrary.GetVectorParameterValue (Underlying native function: GetVectorParameterValue 0x9df726c)
	static struct FLinearColor GetVectorParameterValue(class UObject*& WorldContextObject, class UMaterialParameterCollection*& Collection, struct FName& ParameterName); // (Final | 0x00000002 | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.KismetMaterialLibrary.GetScalarParameterValue (Underlying native function: GetScalarParameterValue 0x1e3cc24)
	static float GetScalarParameterValue(class UObject*& WorldContextObject, class UMaterialParameterCollection*& Collection, struct FName& ParameterName); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.KismetMaterialLibrary.CreateDynamicMaterialInstance (Underlying native function: CreateDynamicMaterialInstance 0x230c60c)
	static class UMaterialInstanceDynamic* CreateDynamicMaterialInstance(class UObject*& WorldContextObject, class UMaterialInterface*& Parent, struct FName& OptionalName, enum EMIDCreationFlags& CreationFlags); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable)
};

