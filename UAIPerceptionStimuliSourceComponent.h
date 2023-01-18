// Class /Script/AIModule.AIPerceptionStimuliSourceComponent
// Size: 0xb8
class UAIPerceptionStimuliSourceComponent : public UActorComponent
{
	unsigned char bAutoRegisterAsSource; // 0xa0 (0x1)
	unsigned char unreflected_a1[0x7]; // 0xa1 (0x7) 
	struct TArray<class UClass*> RegisterAsSourceForSenses; // 0xa8 (0x10)

	/* Functions */

	// Function /Script/AIModule.AIPerceptionStimuliSourceComponent.UnregisterFromSense (Underlying native function: UnregisterFromSense 0xa1db1d4)
	void UnregisterFromSense(class UClass*& SenseClass); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/AIModule.AIPerceptionStimuliSourceComponent.UnregisterFromPerceptionSystem (Underlying native function: UnregisterFromPerceptionSystem 0xa1db1c0)
	void UnregisterFromPerceptionSystem(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/AIModule.AIPerceptionStimuliSourceComponent.RegisterWithPerceptionSystem (Underlying native function: RegisterWithPerceptionSystem 0xa1daad4)
	void RegisterWithPerceptionSystem(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/AIModule.AIPerceptionStimuliSourceComponent.RegisterForSense (Underlying native function: RegisterForSense 0xa1da868)
	void RegisterForSense(class UClass*& SenseClass); // (Final | Native | Public | BlueprintCallable)
};

