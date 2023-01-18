// Class /Script/FortniteAI.FortAthenaLocalGameplayBehavior
// Size: 0x298
class AFortAthenaLocalGameplayBehavior : public AActor
{
	bool bNeedToAwakeDuringExecution; // 0x288 (0x1)
	unsigned char unreflected_289[0x7]; // 0x289 (0x7) 
	class UFortAthenaBTTask_DynamicBlueprint* CachedTask; // 0x290 (0x8)

	/* Functions */

	// Function /Script/FortniteAI.FortAthenaLocalGameplayBehavior.OnExecute (Has no native function)
	void OnExecute(class AActor*& Activator); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteAI.FortAthenaLocalGameplayBehavior.OnAbort (Has no native function)
	void OnAbort(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteAI.FortAthenaLocalGameplayBehavior.FinishExecute (Underlying native function: FinishExecute 0xa3c1b30)
	void FinishExecute(); // (Final | Native | Public | BlueprintCallable)
};

