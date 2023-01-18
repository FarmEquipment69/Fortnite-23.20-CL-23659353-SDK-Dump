// ScriptStruct /Script/FortniteGame.CollectorUnitInfo
// Size: 0x110
struct FCollectorUnitInfo
{
	class UFortWorldItemDefinition* InputItem; // 0x0 (0x8)
	struct FScalableFloat InputCount; // 0x8 (0x28)
	class UTexture* OverrideInputItemTexture; // 0x30 (0x8)
	unsigned char bUseDefinedOutputItem; // 0x38 (0x1)
	unsigned char unreflected_39[0x7]; // 0x39 (0x7) 
	class UFortWorldItemDefinition* OutputItem; // 0x40 (0x8)
	struct TArray<struct FFortItemEntry> OutputItemEntry; // 0x48 (0x10)
	struct FName OverrideOutputItemLootTierGroupName; // 0x58 (0x4)
	unsigned char unreflected_5c[0x4]; // 0x5c (0x4) 
	struct FFortGameplayEffectDeliveryInfo OutputGameplayEffect; // 0x60 (0xa8)
	class UTexture* OverrideOutputItemTexture; // 0x108 (0x8)
};

