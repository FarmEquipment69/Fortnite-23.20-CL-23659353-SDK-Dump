// Class /Script/Curie.CurieManager
// Size: 0x630
class UCurieManager : public UGameStateComponent
{
	class UClass* CurieComponentClass; // 0xa0 (0x8)
	struct FName CurieManagerRegistryName; // 0xa8 (0x4)
	struct FName MaterialDataRegistryName; // 0xac (0x4)
	struct FName ElementDataRegistryName; // 0xb0 (0x4)
	struct FName EntityStateDataRegistryName; // 0xb4 (0x4)
	unsigned char unreflected_b8[0x298]; // 0xb8 (0x298) 
	struct TMap<struct FGameplayTag, class UCurieElementAllocationHandler*> ElementAllocationHandlers; // 0x350 (0x50)
	struct TMap<struct FGameplayTag, struct FCurieElementAttachHandlersContainer> ElementAttachmentHandlers; // 0x3a0 (0x50)
	struct TMap<struct FGameplayTag, struct FCurieElementAttachConditionHandlersContainer> ElementAttachmentConditionHandlers; // 0x3f0 (0x50)
	struct TMap<struct FCurieElementPairKey*, struct FCurieElementInteractWithElementHandlersContainer> ElementInteractWithElementHandlers; // 0x440 (0x50)
	struct TMap<struct FGameplayTag, struct FCurieElementInteractWithMaterialHandlersContainer> ElementInteractWithMaterialHandlers; // 0x490 (0x50)
	struct TMap<struct FGameplayTag, struct FCurieElementInteractWithContainerHandlersContainer> ElementInteractWithContainerHandlers; // 0x4e0 (0x50)
	struct TArray<class UCurieManagerComponent*> CurieManagerComponents; // 0x530 (0x10)
	unsigned char padding_540[0xf0]; // 0x540 (0xf0)

	/* Functions */

	// Function /Script/Curie.CurieManager.UnbindDelegateForCurieStateDetached (Underlying native function: UnbindDelegateForCurieStateDetached 0x6d69728)
	void UnbindDelegateForCurieStateDetached(class UObject*& CurieOwner, struct FDelegate& Delegate); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Curie.CurieManager.UnbindDelegateForCurieStateAttached (Underlying native function: UnbindDelegateForCurieStateAttached 0x6d6944c)
	void UnbindDelegateForCurieStateAttached(class UObject*& CurieOwner, struct FDelegate& Delegate); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Curie.CurieManager.UnbindDelegateForCurieElementInteract (Underlying native function: UnbindDelegateForCurieElementInteract 0x6d69160)
	void UnbindDelegateForCurieElementInteract(class UObject*& CurieOwner, struct FDelegate& Delegate); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Curie.CurieManager.UnbindDelegateForCurieElementEndInteract (Underlying native function: UnbindDelegateForCurieElementEndInteract 0x6d68e74)
	void UnbindDelegateForCurieElementEndInteract(class UObject*& CurieOwner, struct FDelegate& Delegate); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Curie.CurieManager.UnbindDelegateForCurieElementDetached (Underlying native function: UnbindDelegateForCurieElementDetached 0x6d68b88)
	void UnbindDelegateForCurieElementDetached(class UObject*& CurieOwner, struct FDelegate& Delegate); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Curie.CurieManager.UnbindDelegateForCurieElementBeginInteract (Underlying native function: UnbindDelegateForCurieElementBeginInteract 0x6d6889c)
	void UnbindDelegateForCurieElementBeginInteract(class UObject*& CurieOwner, struct FDelegate& Delegate); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Curie.CurieManager.UnbindDelegateForCurieElementAttached (Underlying native function: UnbindDelegateForCurieElementAttached 0x6d685b0)
	void UnbindDelegateForCurieElementAttached(class UObject*& CurieOwner, struct FDelegate& Delegate); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Curie.CurieManager.HandleContainerOwnerDestroyed (Underlying native function: HandleContainerOwnerDestroyed 0x6d6852c)
	void HandleContainerOwnerDestroyed(class AActor*& OwnerActor); // (Final | Native | Private)

	// Function /Script/Curie.CurieManager.BindDelegateForCurieStateDetached (Underlying native function: BindDelegateForCurieStateDetached 0x6d682e0)
	void BindDelegateForCurieStateDetached(class UObject*& CurieOwner, struct FDelegate& Delegate); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Curie.CurieManager.BindDelegateForCurieStateAttached (Underlying native function: BindDelegateForCurieStateAttached 0x6d68094)
	void BindDelegateForCurieStateAttached(class UObject*& CurieOwner, struct FDelegate& Delegate); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Curie.CurieManager.BindDelegateForCurieElementInteract (Underlying native function: BindDelegateForCurieElementInteract 0x6d67e48)
	void BindDelegateForCurieElementInteract(class UObject*& CurieOwner, struct FDelegate& Delegate); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Curie.CurieManager.BindDelegateForCurieElementEndInteract (Underlying native function: BindDelegateForCurieElementEndInteract 0x6d67bfc)
	void BindDelegateForCurieElementEndInteract(class UObject*& CurieOwner, struct FDelegate& Delegate); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Curie.CurieManager.BindDelegateForCurieElementDetached (Underlying native function: BindDelegateForCurieElementDetached 0x6d679b0)
	void BindDelegateForCurieElementDetached(class UObject*& CurieOwner, struct FDelegate& Delegate); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Curie.CurieManager.BindDelegateForCurieElementBeginInteract (Underlying native function: BindDelegateForCurieElementBeginInteract 0x6d67764)
	void BindDelegateForCurieElementBeginInteract(class UObject*& CurieOwner, struct FDelegate& Delegate); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Curie.CurieManager.BindDelegateForCurieElementAttached (Underlying native function: BindDelegateForCurieElementAttached 0x6d67518)
	void BindDelegateForCurieElementAttached(class UObject*& CurieOwner, struct FDelegate& Delegate); // (Final | Native | Public | HasOutParms | BlueprintCallable)
};

