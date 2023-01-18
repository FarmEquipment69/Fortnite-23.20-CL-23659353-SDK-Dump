// Class /Script/FortniteGame.FortItemWrapOverrideComponent
// Size: 0x158
class UFortItemWrapOverrideComponent : public UActorComponent
{
	unsigned char unreflected_a0[0x20]; // 0xa0 (0x20) 
	struct TWeakObjectPtr<class UAthenaItemWrapDefinition> ReplicatedItemWrapOverride; // 0xc0 (0x28)
	class UAthenaItemWrapDefinition* CurrentOverrideHardRef; // 0xe8 (0x8)
	struct TArray<struct FMcpVariantChannelInfo> VariantInfo; // 0xf0 (0x10)
	struct TMap<class UPrimitiveComponent*, struct FFortMaterialsPriorToOverride> OriginalMaterials; // 0x100 (0x50)
	unsigned char padding_150[0x8]; // 0x150 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortItemWrapOverrideComponent.RemoveWrapFromOwner (Underlying native function: RemoveWrapFromOwner 0x86e9b40)
	void RemoveWrapFromOwner(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortItemWrapOverrideComponent.OverrideWrapOnActor (Underlying native function: OverrideWrapOnActor 0x86e9750)
	static class UFortItemWrapOverrideComponent* OverrideWrapOnActor(class AActor*& ActorBase, struct TWeakObjectPtr<class UAthenaItemWrapDefinition>& wrap, struct TArray<struct FMcpVariantChannelInfo>& VariantData); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortItemWrapOverrideComponent.OnRep_VariantData (Underlying native function: OnRep_VariantData 0x86e96bc)
	void OnRepVariantData(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortItemWrapOverrideComponent.OnRep_SoftOverride (Underlying native function: OnRep_SoftOverride 0x86e96bc)
	void OnRepSoftOverride(); // (Final | Native | Protected)
};

