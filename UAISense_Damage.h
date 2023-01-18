// Class /Script/AIModule.AISense_Damage
// Size: 0x90
class UAISense_Damage : public UAISense
{
	struct TArray<struct FAIDamageEvent> RegisteredEvents; // 0x80 (0x10)

	/* Functions */

	// Function /Script/AIModule.AISense_Damage.ReportDamageEvent (Underlying native function: ReportDamageEvent 0xa1e335c)
	static void ReportDamageEvent(class UObject*& WorldContextObject, class AActor*& DamagedActor, class AActor*& Instigator, float& DamageAmount, struct FVector& EventLocation, struct FVector& HitLocation, struct FName& tag); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)
};

