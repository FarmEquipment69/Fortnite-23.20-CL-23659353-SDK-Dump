// Class /Script/Engine.DataLayerAsset
// Size: 0x30
class UDataLayerAsset : public UObject
{
	enum EDataLayerType DataLayerType; // 0x28 (0x1)
	unsigned char unreflected_29[0x3]; // 0x29 (0x3) 
	struct FColor DebugColor; // 0x2c (0x4)

	/* Functions */

	// Function /Script/Engine.DataLayerAsset.IsRuntime (Underlying native function: IsRuntime 0x9fdf710)
	bool IsRuntime(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.DataLayerAsset.GetType (Underlying native function: GetType 0x2d009f8)
	enum EDataLayerType GetType(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.DataLayerAsset.GetDebugColor (Underlying native function: GetDebugColor 0x97bab9c)
	struct FColor GetDebugColor(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)
};

