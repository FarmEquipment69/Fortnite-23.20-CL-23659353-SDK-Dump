// ScriptStruct /Script/Engine.PrecomputedLightInstanceData
// Size: 0x140
struct FPrecomputedLightInstanceData : FSceneComponentInstanceData
{
	unsigned char unreflected_b8[0x8]; // 0xb8 (0x8) 
	struct FTransform Transform; // 0xc0 (0x60)
	struct FGuid LightGuid; // 0x120 (0x10)
	int PreviewShadowMapChannel; // 0x130 (0x4)
	unsigned char padding_134[0xc]; // 0x134 (0xc)
};

