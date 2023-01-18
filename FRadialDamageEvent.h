// ScriptStruct /Script/Engine.RadialDamageEvent
// Size: 0x50
struct FRadialDamageEvent : FDamageEvent
{
	struct FRadialDamageParams Params; // 0x10 (0x14)
	unsigned char unreflected_24[0x4]; // 0x24 (0x4) 
	struct FVector Origin; // 0x28 (0x18)
	struct TArray<struct FHitResult> ComponentHits; // 0x40 (0x10)
};

