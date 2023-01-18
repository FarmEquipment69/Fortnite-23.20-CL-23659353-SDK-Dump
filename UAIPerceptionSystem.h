// Class /Script/AIModule.AIPerceptionSystem
// Size: 0x128
class UAIPerceptionSystem : public UAISubsystem
{
	unsigned char unreflected_38[0x50]; // 0x38 (0x50) 
	struct TArray<class UAISense*> Senses; // 0x88 (0x10)
	float PerceptionAgingRate; // 0x98 (0x4)
	unsigned char padding_9c[0x8c]; // 0x9c (0x8c)

	/* Functions */

	// Function /Script/AIModule.AIPerceptionSystem.ReportPerceptionEvent (Underlying native function: ReportPerceptionEvent 0xa1dacb8)
	static void ReportPerceptionEvent(class UObject*& WorldContextObject, class UAISenseEvent*& PerceptionEvent); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AIModule.AIPerceptionSystem.ReportEvent (Underlying native function: ReportEvent 0xa1dabf8)
	void ReportEvent(class UAISenseEvent*& PerceptionEvent); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/AIModule.AIPerceptionSystem.RegisterPerceptionStimuliSource (Underlying native function: RegisterPerceptionStimuliSource 0xa1da974)
	static bool RegisterPerceptionStimuliSource(class UObject*& WorldContextObject, class UClass*& Sense, class AActor*& Target); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AIModule.AIPerceptionSystem.OnPerceptionStimuliSourceEndPlay (Underlying native function: OnPerceptionStimuliSourceEndPlay 0x1ae00c8)
	void OnPerceptionStimuliSourceEndPlay(class AActor*& Actor, struct TEnumAsByte<EEndPlayReason>& EndPlayReason); // (Final | Native | Protected)

	// Function /Script/AIModule.AIPerceptionSystem.GetSenseClassForStimulus (Underlying native function: GetSenseClassForStimulus 0xa1da3e4)
	static class UClass* GetSenseClassForStimulus(class UObject*& WorldContextObject, struct FAIStimulus& Stimulus); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)
};

