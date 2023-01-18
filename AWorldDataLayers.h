// Class /Script/Engine.WorldDataLayers
// Size: 0x5b0
class AWorldDataLayers : public AInfo
{
	unsigned char unreflected_288[0xa0]; // 0x288 (0xa0) 
	struct TSet<class UDataLayerInstance*> DataLayerInstances; // 0x328 (0x50)
	struct TMap<struct FName, struct TWeakObjectPtr<class UDataLayerInstance>> DeprecatedDataLayerNameToDataLayerInstance; // 0x378 (0x50)
	struct TSet<class UDataLayer*> WorldDataLayers; // 0x3c8 (0x50)
	struct TArray<struct FName> RepActiveDataLayerNames; // 0x418 (0x10)
	struct TArray<struct FName> RepLoadedDataLayerNames; // 0x428 (0x10)
	unsigned char unreflected_438[0xa0]; // 0x438 (0xa0) 
	struct TArray<struct FName> RepEffectiveActiveDataLayerNames; // 0x4d8 (0x10)
	struct TArray<struct FName> RepEffectiveLoadedDataLayerNames; // 0x4e8 (0x10)
	unsigned char padding_4f8[0xb8]; // 0x4f8 (0xb8)

	/* Functions */

	// Function /Script/Engine.WorldDataLayers.OnRep_LoadedDataLayerNames (Underlying native function: OnRep_LoadedDataLayerNames 0x9fdf794)
	void OnRepLoadedDataLayerNames(); // (Final | Native | Protected)

	// Function /Script/Engine.WorldDataLayers.OnRep_EffectiveLoadedDataLayerNames (Underlying native function: OnRep_EffectiveLoadedDataLayerNames 0x9fdf728)
	void OnRepEffectiveLoadedDataLayerNames(); // (Final | Native | Protected)

	// Function /Script/Engine.WorldDataLayers.OnRep_EffectiveActiveDataLayerNames (Underlying native function: OnRep_EffectiveActiveDataLayerNames 0x1f34260)
	void OnRepEffectiveActiveDataLayerNames(); // (Final | Native | Protected)

	// Function /Script/Engine.WorldDataLayers.OnRep_ActiveDataLayerNames (Underlying native function: OnRep_ActiveDataLayerNames 0x2d0909c)
	void OnRepActiveDataLayerNames(); // (Final | Native | Protected)

	// Function /Script/Engine.WorldDataLayers.OnDataLayerRuntimeStateChanged (Underlying native function: OnDataLayerRuntimeStateChanged 0x28c5e50)
	void OnDataLayerRuntimeStateChanged(class UDataLayerInstance*& InDataLayer, enum EDataLayerRuntimeState& InState); // (Net | NetReliable | Native | Event | NetMulticast | Public)
};

