// Class /Script/SmartObjectsModule.SmartObjectTestingActor
// Size: 0x2b0
class ASmartObjectTestingActor : public AActor
{
	struct TArray<class USmartObjectTest*> Tests; // 0x288 (0x10)
	class USmartObjectTestRenderingComponent* RenderingComponent; // 0x298 (0x8)
	class USmartObjectSubsystem* SmartObjectSubsystem; // 0x2a0 (0x8)
	bool bRunTestsEachFrame; // 0x2a8 (0x1)
	unsigned char padding_2a9[0x7]; // 0x2a9 (0x7)

	/* Functions */

	// Function /Script/SmartObjectsModule.SmartObjectTestingActor.RunTests (Underlying native function: RunTests 0x7f28554)
	void RunTests(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/SmartObjectsModule.SmartObjectTestingActor.ResetTests (Underlying native function: ResetTests 0x7f284f8)
	void ResetTests(); // (Final | Native | Protected | BlueprintCallable)
};

