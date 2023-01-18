// Class /Script/Engine.ChildActorComponent
// Size: 0x2e0
class UChildActorComponent : public USceneComponent
{
	class UClass* ChildActorClass; // 0x2a0 (0x8)
	class AActor* ChildActor; // 0x2a8 (0x8)
	class AActor* ChildActorTemplate; // 0x2b0 (0x8)
	unsigned char padding_2b8[0x28]; // 0x2b8 (0x28)

	/* Functions */

	// Function /Script/Engine.ChildActorComponent.SetChildActorClass (Underlying native function: SetChildActorClass 0x25e2244)
	void SetChildActorClass(class UClass*& InClass); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.ChildActorComponent.OnChildActorDestroyed (Underlying native function: OnChildActorDestroyed 0x17aa888)
	void OnChildActorDestroyed(class AActor*& DestroyedActor); // (Final | Native | Private)
};

