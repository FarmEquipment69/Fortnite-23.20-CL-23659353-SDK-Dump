// Class /Script/AudioGameplay.AudioParameterComponent
// Size: 0xd0
class UAudioParameterComponent : public UActorComponent
{
	unsigned char unreflected_a0[0x10]; // 0xa0 (0x10) 
	struct TArray<struct TWeakObjectPtr<class UAudioComponent>> ActiveComponents; // 0xb0 (0x10)
	struct TArray<struct FAudioParameter> Parameters; // 0xc0 (0x10)

	/* Functions */

	// Function /Script/AudioGameplay.AudioParameterComponent.GetParameters (Underlying native function: GetParameters 0x720cfd4)
	struct TArray<struct FAudioParameter> GetParameters(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

