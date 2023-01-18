// Class /Script/AugmentedReality.ARLifeCycleComponent
// Size: 0x2d0
class UARLifeCycleComponent : public USceneComponent
{
	struct FMulticastInlineDelegate OnARActorSpawnedDelegate; // 0x2a0 (0x10)
	struct FMulticastInlineDelegate OnARActorToBeDestroyedDelegate; // 0x2b0 (0x10)
	unsigned char padding_2c0[0x10]; // 0x2c0 (0x10)

	/* Functions */

	// Function /Script/AugmentedReality.ARLifeCycleComponent.ServerSpawnARActor (Underlying native function: ServerSpawnARActor 0x97bdcbc)
	void ServerSpawnARActor(class UClass*& ComponentClass, struct FGuid& NativeID); // (Final | Net | NetReliable | Native | Event | Private | NetServer | HasDefaults | 0x80000000)

	// Function /Script/AugmentedReality.ARLifeCycleComponent.ServerDestroyARActor (Underlying native function: ServerDestroyARActor 0x97bdbd0)
	void ServerDestroyARActor(class AARActor*& Actor); // (Final | Net | NetReliable | Native | Event | Private | NetServer | 0x80000000)

	// DelegateFunction /Script/AugmentedReality.ARLifeCycleComponent.InstanceARActorToBeDestroyedDelegate__DelegateSignature (Has no native function)
	void InstanceARActorToBeDestroyedDelegateDelegateSignature(class AARActor*& Actor); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/AugmentedReality.ARLifeCycleComponent.InstanceARActorSpawnedDelegate__DelegateSignature (Has no native function)
	void InstanceARActorSpawnedDelegateDelegateSignature(class UClass*& ComponentClass, struct FGuid& NativeID, class AARActor*& SpawnedActor); // (MulticastDelegate | Public | Delegate | HasDefaults)
};

