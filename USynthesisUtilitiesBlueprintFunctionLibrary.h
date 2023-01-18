// Class /Script/Synthesis.SynthesisUtilitiesBlueprintFunctionLibrary
// Size: 0x28
class USynthesisUtilitiesBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/Synthesis.SynthesisUtilitiesBlueprintFunctionLibrary.GetLogFrequency (Underlying native function: GetLogFrequency 0x71cfb9c)
	static float GetLogFrequency(float& InLinearValue, float& InDomainMin, float& InDomainMax, float& InRangeMin, float& InRangeMax); // (Final | Native | Static | Private | BlueprintCallable)

	// Function /Script/Synthesis.SynthesisUtilitiesBlueprintFunctionLibrary.GetLinearFrequency (Underlying native function: GetLinearFrequency 0x71cfa1c)
	static float GetLinearFrequency(float& InLogFrequencyValue, float& InDomainMin, float& InDomainMax, float& InRangeMin, float& InRangeMax); // (Final | Native | Static | Private | BlueprintCallable)
};

