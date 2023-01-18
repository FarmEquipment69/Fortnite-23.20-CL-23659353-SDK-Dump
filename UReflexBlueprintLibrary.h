// Class /Script/Reflex.ReflexBlueprintLibrary
// Size: 0x28
class UReflexBlueprintLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/Reflex.ReflexBlueprintLibrary.SetReflexMode (Underlying native function: SetReflexMode 0x7df1c74)
	static void SetReflexMode(enum EReflexMode& Mode); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Reflex.ReflexBlueprintLibrary.SetFlashIndicatorEnabled (Underlying native function: SetFlashIndicatorEnabled 0x7df1c04)
	static void SetFlashIndicatorEnabled(bool& bEnabled); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Reflex.ReflexBlueprintLibrary.GetRenderLatencyInMs (Underlying native function: GetRenderLatencyInMs 0x7df1bdc)
	static float GetRenderLatencyInMs(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Reflex.ReflexBlueprintLibrary.GetReflexMode (Underlying native function: GetReflexMode 0x7df1b50)
	static enum EReflexMode GetReflexMode(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Reflex.ReflexBlueprintLibrary.GetReflexAvailable (Underlying native function: GetReflexAvailable 0x7df1b2c)
	static bool GetReflexAvailable(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Reflex.ReflexBlueprintLibrary.GetGameToRenderLatencyInMs (Underlying native function: GetGameToRenderLatencyInMs 0x7df1b04)
	static float GetGameToRenderLatencyInMs(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Reflex.ReflexBlueprintLibrary.GetGameLatencyInMs (Underlying native function: GetGameLatencyInMs 0x7df1adc)
	static float GetGameLatencyInMs(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Reflex.ReflexBlueprintLibrary.GetFlashIndicatorEnabled (Underlying native function: GetFlashIndicatorEnabled 0x7df1a58)
	static bool GetFlashIndicatorEnabled(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)
};

