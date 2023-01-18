// Class /Script/Engine.LocationVolume
// Size: 0x2d0
class ALocationVolume : public AVolume
{
	unsigned char unreflected_2c0[0x8]; // 0x2c0 (0x8) 
	struct FColor DebugColor; // 0x2c8 (0x4)
	unsigned char bIsRuntime; // 0x2cc (0x1)
	unsigned char padding_2cd[0x3]; // 0x2cd (0x3)

	/* Functions */

	// Function /Script/Engine.LocationVolume.Unload (Underlying native function: Unload 0x26daa0c)
	void Unload(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.LocationVolume.Load (Underlying native function: Load 0x26daa0c)
	void Load(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.LocationVolume.IsLoaded (Underlying native function: IsLoaded 0x2486284)
	bool IsLoaded(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

