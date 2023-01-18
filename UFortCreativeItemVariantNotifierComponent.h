// Class /Script/FortniteGame.FortCreativeItemVariantNotifierComponent
// Size: 0xf8
class UFortCreativeItemVariantNotifierComponent : public UActorComponent
{
	struct FMulticastInlineDelegate OnItemTemplateEnabled; // 0xa0 (0x10)
	struct FMulticastInlineDelegate OnItemTemplateDisabled; // 0xb0 (0x10)
	struct FMulticastInlineDelegate OnItemTemplateChanged; // 0xc0 (0x10)
	struct TArray<struct FItemVariantHandle> BoundVariantHandles; // 0xd0 (0x10)
	struct FItemVariantHandle WeaponVariantHandle; // 0xe0 (0x18)

	/* Functions */

	// Function /Script/FortniteGame.FortCreativeItemVariantNotifierComponent.UnbindFromItemVariant (Underlying native function: UnbindFromItemVariant 0x87b7550)
	void UnbindFromItemVariant(struct FItemVariantHandle& VariantHandle); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativeItemVariantNotifierComponent.UnbindFromAllItemVariants (Underlying native function: UnbindFromAllItemVariants 0x87b753c)
	void UnbindFromAllItemVariants(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativeItemVariantNotifierComponent.GetTemplateObjectsByVariant (Underlying native function: GetTemplateObjectsByVariant 0x87b39d0)
	bool GetTemplateObjectsByVariant(struct FItemVariantHandle& VariantHandle, class UClass*& TemplateClass, struct TArray<class UFortCreativeItemTemplate*>& TemplateObjs, bool& bOnlyEnabled); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCreativeItemVariantNotifierComponent.GetTemplateObjectsByIndex (Underlying native function: GetTemplateObjectsByIndex 0x87b37a4)
	bool GetTemplateObjectsByIndex(int& VariantIndex, class UClass*& TemplateClass, struct TArray<class UFortCreativeItemTemplate*>& TemplateObjs, bool& bOnlyEnabled); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCreativeItemVariantNotifierComponent.GetTemplateObjects (Underlying native function: GetTemplateObjects 0x87b35b8)
	bool GetTemplateObjects(class UClass*& TemplateClass, struct TArray<class UFortCreativeItemTemplate*>& TemplateObjs, bool& bOnlyEnabled); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCreativeItemVariantNotifierComponent.GetReplicatedWeaponVariantHandle (Underlying native function: GetReplicatedWeaponVariantHandle 0x87b2ec0)
	struct FItemVariantHandle GetReplicatedWeaponVariantHandle(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCreativeItemVariantNotifierComponent.GetNumBoundItemVariants (Underlying native function: GetNumBoundItemVariants 0x87b2c90)
	int GetNumBoundItemVariants(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCreativeItemVariantNotifierComponent.BindToItemVariant (Underlying native function: BindToItemVariant 0x87b0970)
	void BindToItemVariant(struct FItemVariantHandle& VariantHandle); // (Final | Native | Public | HasOutParms | BlueprintCallable)
};

