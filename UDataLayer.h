// Class /Script/Engine.DataLayer
// Size: 0x50
class UDataLayer : public UObject
{
	struct FName DataLayerLabel; // 0x28 (0x4)
	unsigned char bIsRuntime; // 0x2c (0x1)
	unsigned char unreflected_2d[0x3]; // 0x2d (0x3) 
	enum EDataLayerRuntimeState InitialRuntimeState; // 0x30 (0x1)
	unsigned char unreflected_31[0x3]; // 0x31 (0x3) 
	struct FColor DebugColor; // 0x34 (0x4)
	class UDataLayer* Parent; // 0x38 (0x8)
	struct TArray<class UDataLayer*> Children; // 0x40 (0x10)

	/* Functions */

	// Function /Script/Engine.DataLayer.IsVisible (Underlying native function: IsVisible 0x2486284)
	bool IsVisible(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.DataLayer.IsRuntime (Underlying native function: IsRuntime 0x9fdf6d8)
	bool IsRuntime(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.DataLayer.IsInitiallyVisible (Underlying native function: IsInitiallyVisible 0x2486284)
	bool IsInitiallyVisible(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.DataLayer.IsInitiallyActive (Underlying native function: IsInitiallyActive 0x9fdf6f0)
	bool IsInitiallyActive(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.DataLayer.IsEffectiveVisible (Underlying native function: IsEffectiveVisible 0x2486284)
	bool IsEffectiveVisible(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.DataLayer.IsDynamicallyLoaded (Underlying native function: IsDynamicallyLoaded 0x9fdf6d8)
	bool IsDynamicallyLoaded(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.DataLayer.GetInitialState (Underlying native function: GetInitialState 0x9fdf668)
	enum EDataLayerState GetInitialState(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.DataLayer.GetInitialRuntimeState (Underlying native function: GetInitialRuntimeState 0x9fdf668)
	enum EDataLayerRuntimeState GetInitialRuntimeState(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.DataLayer.GetDebugColor (Underlying native function: GetDebugColor 0x23fe6e4)
	struct FColor GetDebugColor(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.DataLayer.GetDataLayerLabel (Underlying native function: GetDataLayerLabel 0x743b82c)
	struct FName GetDataLayerLabel(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.DataLayer.Equals (Underlying native function: Equals 0x9fdee88)
	bool Equals(struct FActorDataLayer& ActorDataLayer); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)
};

