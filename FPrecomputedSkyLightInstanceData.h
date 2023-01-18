// ScriptStruct /Script/Engine.PrecomputedSkyLightInstanceData
// Size: 0x170
struct FPrecomputedSkyLightInstanceData : FSceneComponentInstanceData
{
	struct FGuid LightGuid; // 0xb8 (0x10)
	float AverageBrightness; // 0xc8 (0x4)
	unsigned char padding_cc[0xa4]; // 0xcc (0xa4)
};

