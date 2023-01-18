// Class /Script/GameplayDebugger.GameplayDebuggerConfig
// Size: 0x258
class UGameplayDebuggerConfig : public UObject
{
	struct FKey ActivationKey; // 0x28 (0x18)
	struct FKey CategoryRowNextKey; // 0x40 (0x18)
	struct FKey CategoryRowPrevKey; // 0x58 (0x18)
	struct FKey CategorySlot0; // 0x70 (0x18)
	struct FKey CategorySlot1; // 0x88 (0x18)
	struct FKey CategorySlot2; // 0xa0 (0x18)
	struct FKey CategorySlot3; // 0xb8 (0x18)
	struct FKey CategorySlot4; // 0xd0 (0x18)
	struct FKey CategorySlot5; // 0xe8 (0x18)
	struct FKey CategorySlot6; // 0x100 (0x18)
	struct FKey CategorySlot7; // 0x118 (0x18)
	struct FKey CategorySlot8; // 0x130 (0x18)
	struct FKey CategorySlot9; // 0x148 (0x18)
	float DebugCanvasPaddingLeft; // 0x160 (0x4)
	float DebugCanvasPaddingRight; // 0x164 (0x4)
	float DebugCanvasPaddingTop; // 0x168 (0x4)
	float DebugCanvasPaddingBottom; // 0x16c (0x4)
	bool bDebugCanvasEnableTextShadow; // 0x170 (0x1)
	unsigned char unreflected_171[0x7]; // 0x171 (0x7) 
	struct TArray<struct FGameplayDebuggerCategoryConfig> Categories; // 0x178 (0x10)
	struct TArray<struct FGameplayDebuggerExtensionConfig> Extensions; // 0x188 (0x10)
	unsigned char padding_198[0xc0]; // 0x198 (0xc0)
};

