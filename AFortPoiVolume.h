// Class /Script/FortniteGame.FortPoiVolume
// Size: 0x318
class AFortPoiVolume : public AVolume
{
	bool bIsLargeGameVolume; // 0x2c0 (0x1)
	unsigned char unreflected_2c1[0x3]; // 0x2c1 (0x3) 
	float CurrentFortPoiVolumeSize; // 0x2c4 (0x4)
	float VolumeThresholdForLargeGameVolume; // 0x2c8 (0x4)
	unsigned char unreflected_2cc[0xc]; // 0x2cc (0xc) 
	float LargeGameVolume; // 0x2d8 (0x4)
	unsigned char unreflected_2dc[0x4]; // 0x2dc (0x4) 
	struct TArray<struct FString> EventsEnabledDuring; // 0x2e0 (0x10)
	struct FGameplayTagContainer LocationTags; // 0x2f0 (0x20)
	class UFortPoiCollisionComponent* PoiCollisionComp; // 0x310 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortPoiVolume.DoesShapeComponentOverlap (Underlying native function: DoesShapeComponentOverlap 0x8415004)
	bool DoesShapeComponentOverlap(class UShapeComponent*& Shape); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPoiVolume.ContainsLocationTag (Underlying native function: ContainsLocationTag 0x8414ecc)
	bool ContainsLocationTag(struct FGameplayTag& tag); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPoiVolume.CalendarEventsShouldBeReady (Underlying native function: CalendarEventsShouldBeReady 0x841477c)
	void CalendarEventsShouldBeReady(struct TArray<struct FString>& NewEvents); // (Final | Native | Private | HasOutParms)
};

