// ScriptStruct /Script/Engine.MaterialInstanceBasePropertyOverrides
// Size: 0x8
struct FMaterialInstanceBasePropertyOverrides
{
	unsigned char bOverrideOpacityMaskClipValue; // 0x0 (0x1)
	unsigned char bOverrideBlendMode; // 0x0 (0x1)
	unsigned char bOverrideShadingModel; // 0x0 (0x1)
	unsigned char bOverrideDitheredLODTransition; // 0x0 (0x1)
	unsigned char bOverrideCastDynamicShadowAsMasked; // 0x0 (0x1)
	unsigned char bOverrideTwoSided; // 0x0 (0x1)
	unsigned char bOverrideOutputTranslucentVelocity; // 0x0 (0x1)
	unsigned char TwoSided; // 0x0 (0x1)
	unsigned char DitheredLODTransition; // 0x1 (0x1)
	unsigned char bCastDynamicShadowAsMasked; // 0x1 (0x1)
	unsigned char bOutputTranslucentVelocity; // 0x1 (0x1)
	struct TEnumAsByte<EBlendMode> BlendMode; // 0x2 (0x1)
	struct TEnumAsByte<EMaterialShadingModel> ShadingModel; // 0x3 (0x1)
	float OpacityMaskClipValue; // 0x4 (0x4)
};

