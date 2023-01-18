// Class /Script/PlayspaceSystem.OverlapComponent
// Size: 0x620
class UOverlapComponent : public UStaticMeshComponent
{
	unsigned char unreflected_620[0x620]; 

	/* Functions */

	// Function /Script/PlayspaceSystem.OverlapComponent.OnEndActorOverlap (Underlying native function: OnEndActorOverlap 0x7061db0)
	void OnEndActorOverlap(class UPrimitiveComponent*& OverlappedComponent, class AActor*& OtherActor, class UPrimitiveComponent*& OtherComp, int& OtherBodyIndex); // (Native | Protected)

	// Function /Script/PlayspaceSystem.OverlapComponent.OnBeginActorOverlap (Underlying native function: OnBeginActorOverlap 0x7061bc0)
	void OnBeginActorOverlap(class UPrimitiveComponent*& OverlappedComponent, class AActor*& OtherActor, class UPrimitiveComponent*& OtherComp, int& OtherBodyIndex, bool& bFromSweep, struct FHitResult& SweepResult); // (Native | Protected | HasOutParms)
};

