// ScriptStruct /Script/CrewUI.FortProgressiveSet
// Size: 0x60
struct FFortProgressiveSet
{
	struct FString FulfillmentId; // 0x0 (0x10)
	struct FText SetName; // 0x10 (0x18)
	struct TWeakObjectPtr<class UMaterialInterface> TileMaterial; // 0x28 (0x28)
	struct TArray<struct FFortProgressiveUIStage> Stages; // 0x50 (0x10)
};

