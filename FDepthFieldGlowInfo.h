// ScriptStruct /Script/Engine.DepthFieldGlowInfo
// Size: 0x38
struct FDepthFieldGlowInfo
{
	unsigned char bEnableGlow; // 0x0 (0x1)
	unsigned char unreflected_1[0x3]; // 0x1 (0x3) 
	struct FLinearColor GlowColor; // 0x4 (0x10)
	unsigned char unreflected_14[0x4]; // 0x14 (0x4) 
	struct FVector2D GlowOuterRadius; // 0x18 (0x10)
	struct FVector2D GlowInnerRadius; // 0x28 (0x10)
};

