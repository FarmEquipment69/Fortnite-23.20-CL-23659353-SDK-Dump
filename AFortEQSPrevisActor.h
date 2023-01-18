// Class /Script/FortniteAI.FortEQSPrevisActor
// Size: 0x2c0
class AFortEQSPrevisActor : public AActor
{
	unsigned char unreflected_288[0x10]; // 0x288 (0x10) 
	class USceneComponent* SceneRoot; // 0x298 (0x8)
	struct FGameplayTagContainer GameplayTags; // 0x2a0 (0x20)

	/* Functions */

	// Function /Script/FortniteAI.FortEQSPrevisActor.SetQueryTemplate (Underlying native function: SetQueryTemplate 0x71a663c)
	void SetQueryTemplate(class UEnvQuery*& InPrevisQueryTemplate); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortEQSPrevisActor.PrepForPrevis (Has no native function)
	void PrepForPrevis(); // (Event | Public | BlueprintEvent)
};

