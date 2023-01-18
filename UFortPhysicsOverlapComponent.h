// Class /Script/FortniteGame.FortPhysicsOverlapComponent
// Size: 0x2d0
class UFortPhysicsOverlapComponent : public USceneComponent
{
	bool bBeginPlayDisablePhysicsObjectSleepWhenOverlapping; // 0x2a0 (0x1)
	unsigned char unreflected_2a1[0x3]; // 0x2a1 (0x3) 
	float OverlapRadius; // 0x2a4 (0x4)
	class USphereComponent* OverlapComponent; // 0x2a8 (0x8)
	unsigned char unreflected_2b0[0x8]; // 0x2b0 (0x8) 
	struct TArray<class AActor*> SleepIncrementedPhysicsObjects; // 0x2b8 (0x10)
	unsigned char padding_2c8[0x8]; // 0x2c8 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortPhysicsOverlapComponent.SetNeverSleepWhenOverlapping (Underlying native function: SetNeverSleepWhenOverlapping 0x8d3a600)
	void SetNeverSleepWhenOverlapping(bool& bShouldSleep); // (Final | Native | Private | BlueprintCallable)

	// Function /Script/FortniteGame.FortPhysicsOverlapComponent.OnPhysicsObjectEndOverlap (Underlying native function: OnPhysicsObjectEndOverlap 0x8d39bbc)
	void OnPhysicsObjectEndOverlap(class UPrimitiveComponent*& OverlappedComponent, class AActor*& OtherActor, class UPrimitiveComponent*& OtherComp, int& OtherBodyIndex); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortPhysicsOverlapComponent.OnPhysicsObjectBeginOverlap (Underlying native function: OnPhysicsObjectBeginOverlap 0x8d399bc)
	void OnPhysicsObjectBeginOverlap(class UPrimitiveComponent*& OverlappedComponent, class AActor*& OtherActor, class UPrimitiveComponent*& OtherComp, int& OtherBodyIndex, bool& bFromSweep, struct FHitResult& SweepResult); // (Final | Native | Private | HasOutParms)
};

