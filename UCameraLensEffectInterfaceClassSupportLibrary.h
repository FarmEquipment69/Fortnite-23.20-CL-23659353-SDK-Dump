// Class /Script/Engine.CameraLensEffectInterfaceClassSupportLibrary
// Size: 0x28
class UCameraLensEffectInterfaceClassSupportLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/Engine.CameraLensEffectInterfaceClassSupportLibrary.SetInterfaceClass (Underlying native function: SetInterfaceClass 0x9c9c914)
	static void SetInterfaceClass(class UClass*& Class, struct FCameraLensInterfaceClassSupport*& Var, enum EInterfaceValidResult& Result); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.CameraLensEffectInterfaceClassSupportLibrary.IsInterfaceValid (Underlying native function: IsInterfaceValid 0x9c9bfe0)
	static void IsInterfaceValid(struct TScriptInterface<class ICameraLensEffectInterface>& CameraLens, enum EInterfaceValidResult& Result); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.CameraLensEffectInterfaceClassSupportLibrary.IsInterfaceClassValid (Underlying native function: IsInterfaceClassValid 0x9c9bef8)
	static void IsInterfaceClassValid(struct FCameraLensInterfaceClassSupport*& CameraLens, enum EInterfaceValidResult& Result); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.CameraLensEffectInterfaceClassSupportLibrary.GetInterfaceClass (Underlying native function: GetInterfaceClass 0x9c9bbbc)
	static class UClass* GetInterfaceClass(struct FCameraLensInterfaceClassSupport*& CameraLens); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)
};

