// ScriptStruct /Script/FortniteGame.WaxVisibilityModifiers
// Size: 0x200
struct FWaxVisibilityModifiers
{
	struct FScalableFloat UIVisibilityMode; // 0x0 (0x28)
	unsigned char unreflected_28[0x8]; // 0x28 (0x8) 
	struct FSlateBrush CompassIndicator; // 0x30 (0xc0)
	struct FSlateBrush MiniMapIndicator; // 0xf0 (0xc0)
	struct TArray<class UClass*> TemporarilyGrantedEffects; // 0x1b0 (0x10)
	struct TArray<class UClass*> PermanentlyGrantedEffects; // 0x1c0 (0x10)
	struct FScalableFloat DistanceConsideredCloseForUI; // 0x1d0 (0x28)
	unsigned char padding_1f8[0x8]; // 0x1f8 (0x8)
};

