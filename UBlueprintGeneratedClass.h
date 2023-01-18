// Class /Script/Engine.BlueprintGeneratedClass
// Size: 0x380
class UBlueprintGeneratedClass : public UClass
{
	unsigned char unreflected_230[0x8]; // 0x230 (0x8) 
	int NumReplicatedProperties; // 0x238 (0x4)
	unsigned char bHasNativizedParent; // 0x23c (0x1)
	unsigned char bHasCookedComponentInstancingData; // 0x23c (0x1)
	unsigned char unreflected_23d[0x3]; // 0x23d (0x3) 
	struct TArray<class UDynamicBlueprintBinding*> DynamicBindingObjects; // 0x240 (0x10)
	struct TArray<class UActorComponent*> ComponentTemplates; // 0x250 (0x10)
	struct TArray<class UTimelineTemplate*> Timelines; // 0x260 (0x10)
	struct TArray<struct FBPComponentClassOverride> ComponentClassOverrides; // 0x270 (0x10)
	class USimpleConstructionScript* SimpleConstructionScript; // 0x280 (0x8)
	class UInheritableComponentHandler* InheritableComponentHandler; // 0x288 (0x8)
	class UStructProperty* UberGraphFramePointerProperty; // 0x290 (0x8)
	unsigned char unreflected_298[0x8]; // 0x298 (0x8) 
	class UFunction* UberGraphFunction; // 0x2a0 (0x8)
	struct TMap<struct FName, struct FGuid> CookedPropertyGuids; // 0x2a8 (0x50)
	struct TMap<struct FName, struct FBlueprintCookedComponentInstancingData> CookedComponentInstancingData; // 0x2f8 (0x50)
	unsigned char padding_348[0x38]; // 0x348 (0x38)
};

